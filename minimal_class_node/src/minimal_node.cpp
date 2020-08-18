#include <rclcpp/rclcpp.hpp>
#include "minimal_node.hpp"

MinimalNode::MinimalNode(
    const std::string& name_space,
    const rclcpp::NodeOptions& options
    )
: Node("Test", name_space, options){
    RCLCPP_INFO(this->get_logger(), "Kotokaze");
    }