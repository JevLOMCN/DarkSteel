// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 2

// AcceptEx @ 15018f890

BOOL __stdcall
AcceptEx(SOCKET sListenSocket,SOCKET sAcceptSocket,PVOID lpOutputBuffer,DWORD dwReceiveDataLength,
        DWORD dwLocalAddressLength,DWORD dwRemoteAddressLength,LPDWORD lpdwBytesReceived,
        LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018f890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = AcceptEx(sListenSocket,sAcceptSocket,lpOutputBuffer,dwReceiveDataLength,
                   dwLocalAddressLength,dwRemoteAddressLength,lpdwBytesReceived,lpOverlapped);
  return BVar1;
}

// GetAcceptExSockaddrs @ 15018f89c

void __stdcall
GetAcceptExSockaddrs
          (PVOID lpOutputBuffer,DWORD dwReceiveDataLength,DWORD dwLocalAddressLength,
          DWORD dwRemoteAddressLength,sockaddr **LocalSockaddr,LPINT LocalSockaddrLength,
          sockaddr **RemoteSockaddr,LPINT RemoteSockaddrLength)

{
                    /* WARNING: Could not recover jumptable at 0x00015018f89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetAcceptExSockaddrs
            (lpOutputBuffer,dwReceiveDataLength,dwLocalAddressLength,dwRemoteAddressLength,
             LocalSockaddr,LocalSockaddrLength,RemoteSockaddr,RemoteSockaddrLength);
  return;
}

