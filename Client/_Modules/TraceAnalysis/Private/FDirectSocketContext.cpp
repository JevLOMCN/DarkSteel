// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 1

// FDirectSocketContext @ 14d38f190

FDirectSocketContext * __thiscall
UE::Trace::FDirectSocketContext::FDirectSocketContext(FDirectSocketContext *this)

{
  win_iocp_io_context *this_00;
  win_iocp_io_context *pwVar1;
  
  asio::execution_context::execution_context((execution_context *)this);
  asio::detail::winsock_init<2,2>::winsock_init<2,2>(&(this->Context).init_,true);
  this_00 = ::operator_new(0xb0);
  pwVar1 = (win_iocp_io_context *)0x0;
  if (this_00 != (win_iocp_io_context *)0x0) {
    pwVar1 = asio::detail::win_iocp_io_context::win_iocp_io_context
                       (this_00,(execution_context *)this,1,false);
  }
  pwVar1 = asio::io_context::add_impl(&this->Context,pwVar1);
  (this->Context).impl_ = pwVar1;
  asio::detail::
  io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor>::
  io_object_impl<asio::detail::win_iocp_socket_service<asio::ip::tcp>,asio::any_io_executor><asio::io_context>
            (&(this->Acceptor).impl_,0,0,&this->Context);
  return this;
}

