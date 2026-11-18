// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 1

// Send @ 143115b90

void __thiscall
FMultichannelTcpSender::Send(FMultichannelTcpSender *this,uchar *param_1,int param_2,uint param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  FScopedEvent *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForAnyElementType *pFVar6;
  ForAnyElementType *pFVar7;
  undefined1 *puVar8;
  uint local_res20 [2];
  ForAnyElementType *local_48;
  uint *local_40;
  ForAnyElementType **local_38;
  
  lpCriticalSection = &this->SendBuffersCriticalSection;
  local_res20[0] = param_3;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((param_2 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Sockets\\Public\\MultichannelTcpSender.h"
                         ,0x5c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar7 = (ForAnyElementType *)0x0;
  if (*(int *)&(this->SendBuffers).field_0x8 != *(int *)&(this->SendBuffers).field_0x34) {
    puVar8 = *(undefined1 **)&(this->SendBuffers).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->SendBuffers).field_0x38;
    }
    iVar5 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->SendBuffers).field_0x48 - 1U & local_res20[0]) * 4);
    if (iVar5 != -1) {
      do {
        lVar1 = *(longlong *)&this->SendBuffers + (longlong)iVar5 * 0x18;
        if (*(uint *)(*(longlong *)&this->SendBuffers + (longlong)iVar5 * 0x18) == local_res20[0]) {
          if ((lVar1 != 0) &&
             (local_48 = *(ForAnyElementType **)(lVar1 + 8), local_48 != (ForAnyElementType *)0x0))
          goto LAB_143115cb2;
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  pFVar6 = ::operator_new(0x10);
  if (pFVar6 != (ForAnyElementType *)0x0) {
    pFVar6->Data = (FScriptContainerElement *)0x0;
    pFVar6[1].Data = (FScriptContainerElement *)0x0;
    pFVar7 = pFVar6;
  }
  local_40 = local_res20;
  local_38 = &local_48;
  local_48 = pFVar7;
  TSet<TTuple<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*_const_&>_>
            ((TSet<TTuple<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
              *)&this->SendBuffers,
             (TPairInitializer<unsigned_int_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*_const_&>
              *)&stack0x00000008,(bool *)&local_40);
LAB_143115cb2:
  iVar5 = *(int *)&local_48[1].Data;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,param_2,local_48,(int *)(local_48 + 1),(int *)((longlong)&local_48[1].Data + 4));
  memcpy(local_48->Data + iVar5,param_1,(longlong)param_2);
  pFVar2 = this->EventToRestart;
  if (pFVar2 != (FScopedEvent *)0x0) {
    this->EventToRestart = (FScopedEvent *)0x0;
    (**(code **)(pFVar2->Event->_padding_ + 0x10))();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

