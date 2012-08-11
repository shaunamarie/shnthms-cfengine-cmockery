#ifndef SCHEMA_H_
# define SCHEMA_H_

// Printf formatting for xml XS Schema
#define XS_INIT_TESTSUITE \
    "<\?xml version=\"1.0\" encoding=\"UTF-8\"\?>\n" \
    "<testsuite name=\"%s\"\n" \
    "           timestamp=\"%s\"\n" \
    "           hostname=\"%s\"\n" \
    "           tests=\"%d\"\n" \
    "           failures=\"%d\"\n" \
    "           errors=\"%d\"\n" \
    "           time=\"%2lf seconds\">\n"
#define XS_TESTCASE \
    "    <testcase name=\"%s\"\n" \
    "              classname=\"%s\"\n" \
    "              time=\"%2lf seconds\">\n"
#define XS_RUN_TEST_FAILURE_ASSERT \
    "        <failure type=\"%s(%lld)\"\n" \
    "                 message=\"FAILED at %s:%d - %s(%lld)\">\n" \
    "        </failure>\n"
#define XS_RUN_TEST_FAILURE_ASSERT_EQUALITY_LLD \
    "        <failure type=\"%s(%lld, %lld)\"\n" \
    "                 message=\"FAILED at %s:%d - %s(%lld, %lld)\">\n" \
    "        </failure>\n"
#define XS_RUN_TEST_FAILURE_ASSERT_EQUALITY_STRING \
    "        <failure type=\"%s(%s, %s)\"\n" \
    "                 message=\"FAILED at %s:%d - %s(%s, %s)\">\n" \
    "        </failure>\n"
#define XS_RUN_TEST_FAILURE_ASSERT_RANGE_LLD \
    "        <failure type=\"%s(value=%lld, min=%lld, max=%lld)\"\n" \
    "                 message=\"FAILED at %s:%d - %s(value=%lld, min=%lld, max=%lld)\">\n" \
    "        </failure>\n"
#define XS_RUN_TEST_FAILURE_ASSERT_SET_LLD \
    "        <failure type=\"%s(value=%lld, number_of_values=%lld)\"\n" \
    "                 message=\"FAILED at %s:%d - %s(value=%lld, number_of_values=%lld)\">\n" \
    "        </failure>\n"

#define XS_RUN_TEST_ERROR \
    "        <error type=\"%s\"\n" \
    "               message="
#define XS_RUN_TEST_ERROR_END \
    "        </error>\n"

#define XS_TESTCASE_END \
    "    </testcase>\n"
#define XS_TESTSUITE_END \
    "</testsuite>\n"

#endif

