using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Web.Http;
using TestDB.Models;

namespace TestDB.Controllers
{
    public class TestDBController : ApiController
    {
        TestDBEntities ctx = new TestDBEntities(); //ctx là dành cho thêm xóa sửa database
        [HttpGet]
        [Route("api/test/getAllTest")]
        public List<Test> getAllTest()
        {
            return ctx.Tests.ToList();
        }

        // GET api/<controller>/5
        public string Get(int id)
        {
            return "value";
        }

        [HttpPost]
        [Route("api/test/AddTest")]
        // POST api/<controller>
        public List<Test> Post([FromBody] Test t)
        {
            ctx.Tests.Add(t);
            ctx.SaveChanges();
            return ctx.Tests.ToList();
        }

        // PUT api/<controller>/5
        public void Put(int id, [FromBody] string value)
        {
        }

        // DELETE api/<controller>/5
        public void Delete(int id)
        {
        }
    }
}