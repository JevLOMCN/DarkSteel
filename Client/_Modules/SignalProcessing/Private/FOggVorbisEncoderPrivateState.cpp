// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 2

// FlushPages @ 1444fbf70

void __thiscall
FOggVorbisEncoderPrivateState::FlushPages
          (FOggVorbisEncoderPrivateState *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = ogg_stream_flush(this,&this->CurrentPage);
  if (iVar4 != 0) {
    do {
      puVar1 = (this->CurrentPage).header;
      iVar4 = (this->CurrentPage).header_len;
      if (((puVar1 == (uchar *)0x0) && (iVar4 != 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,iVar4,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax
                        );
      if (iVar4 != 0) {
        memcpy((param_1->AllocatorInstance).Data + iVar5,puVar1,(longlong)iVar4);
      }
      puVar1 = (this->CurrentPage).body;
      iVar4 = (this->CurrentPage).body_len;
      if (((puVar1 == (uchar *)0x0) && (iVar4 != 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,iVar4,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax
                        );
      if (iVar4 != 0) {
        memcpy((param_1->AllocatorInstance).Data + iVar5,puVar1,(longlong)iVar4);
      }
      iVar4 = ogg_stream_flush(this,&this->CurrentPage);
    } while (iVar4 != 0);
  }
  return;
}

// operator() @ 1504bf8a0

bool __thiscall
`FOggVorbisEncoderPrivateState::PushPacket'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5783200462228422605>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5783200462228422605>,
                       &`public:___cdecl_`public:_void___cdecl_FOggVorbisEncoderPrivateState::PushPacket(ogg_packet&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

