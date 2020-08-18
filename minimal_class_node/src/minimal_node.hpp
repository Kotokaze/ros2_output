#include <rclcpp/rclcpp.hpp>

class MinimalNode : public rclcpp::Node
{
private:
    /* data */
public:
    MinimalNode(
        const std::string &name_space = "",
        const rclcpp::NodeOptions &options = rclcpp::NodeOptions());
};