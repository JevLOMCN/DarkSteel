// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 1

// BlockingReceive @ 14310ce90

int __thiscall
FMultichannelTcpSocket::BlockingReceive
          (FMultichannelTcpSocket *this,uchar *param_1,int param_2,uint param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  FReceiveBuffer **ppFVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ForAnyElementType *pFVar9;
  FScriptContainerElement *pFVar10;
  FScopedEvent *this_00;
  FScriptContainerElement *this_01;
  undefined1 *puVar11;
  uint local_res18 [2];
  uint local_res20 [2];
  TPairInitializer<unsigned_int_const_&,FMultichannelTcpSocket::FReceiveBuffer_*_const_&> local_58;
  uint *local_48;
  FReceiveBuffer ***local_40;
  
  local_res20[0] = param_3;
  if (((param_3 == 0) || (param_1 == (uchar *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Channel != ControlChannel) && Data",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Sockets\\Public\\MultichannelTcpSocket.h"
                         ,0x3f,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  if (0 < param_2) {
    iVar6 = 0;
    lpCriticalSection = &this->ReceiveBuffersCriticalSection;
    do {
      this_01 = (FScriptContainerElement *)0x0;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(int *)&(this->ReceiveBuffers).field_0x8 != *(int *)&(this->ReceiveBuffers).field_0x34) {
        puVar2 = *(undefined1 **)&(this->ReceiveBuffers).field_0x40;
        puVar11 = &(this->ReceiveBuffers).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar11 = puVar2;
        }
        iVar7 = *(int *)(puVar11 +
                        (ulonglong)
                        (*(int *)&(this->ReceiveBuffers).field_0x48 - 1U & local_res20[0]) * 4);
        if (iVar7 != -1) {
          do {
            lVar1 = *(longlong *)&this->ReceiveBuffers + (longlong)iVar7 * 0x18;
            if (*(uint *)(*(longlong *)&this->ReceiveBuffers + (longlong)iVar7 * 0x18) ==
                local_res20[0]) {
              if (lVar1 != 0) {
                local_58.Value = *(FReceiveBuffer ***)(lVar1 + 8);
                if ((FScriptContainerElement *)local_58.Value != (FScriptContainerElement *)0x0)
                goto LAB_14310cff7;
                goto LAB_14310cf7e;
              }
              break;
            }
            iVar7 = *(int *)(lVar1 + 0x10);
          } while (iVar7 != -1);
        }
      }
      local_58.Value = (FReceiveBuffer **)0x0;
LAB_14310cf7e:
      pFVar10 = (FScriptContainerElement *)local_58.Value;
      pFVar9 = ::operator_new(0x20);
      if (pFVar9 != (ForAnyElementType *)0x0) {
        pFVar9->Data = pFVar10;
        pFVar9[1].Data = (FScriptContainerElement *)0x0;
        *(int *)&pFVar9[2].Data = (int)pFVar10;
        pFVar9[3].Data = pFVar10;
        pFVar10 = (FScriptContainerElement *)pFVar9;
      }
      local_48 = local_res20;
      local_40 = &local_58.Value;
      local_58.Value = (FReceiveBuffer **)pFVar10;
      TSet<TTuple<unsigned_int,FMultichannelTcpSocket::FReceiveBuffer_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FMultichannelTcpSocket::FReceiveBuffer_*,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<unsigned_int_const_&,FMultichannelTcpSocket::FReceiveBuffer_*_const_&>_>
                ((TSet<TTuple<unsigned_int,FMultichannelTcpSocket::FReceiveBuffer_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FMultichannelTcpSocket::FReceiveBuffer_*,0>,FDefaultSetAllocator>
                  *)&this->ReceiveBuffers,&local_58,(bool *)&local_48);
LAB_14310cff7:
      if (((((ForAnyElementType *)((longlong)local_58.Value + 0x18))->Data !=
            (FScriptContainerElement *)0x0) ||
          (*(int *)&((ForAnyElementType *)((longlong)local_58.Value + 0x10))->Data != 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ChannelBuffer->EventToResumeWhenDataIsReady && !ChannelBuffer->BytesRequiredToResume"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Sockets\\Public\\MultichannelTcpSocket.h"
                             ,0x53,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      ppFVar4 = local_58.Value;
      uVar8 = local_res20[0];
      if (param_2 <= *(int *)&((ForAnyElementType *)(local_58.Value + 1))->Data) {
        memcpy(param_1,*(FScriptContainerElement **)local_58.Value,(longlong)param_2);
        if (*(int *)&((ForAnyElementType *)(ppFVar4 + 1))->Data == param_2) {
          local_res18[0] = uVar8;
          if (*(int *)&(this->ReceiveBuffers).field_0x8 !=
              *(int *)&(this->ReceiveBuffers).field_0x34) {
            TSet<TTuple<unsigned_int,FMultichannelTcpSocket::FReceiveBuffer_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FMultichannelTcpSocket::FReceiveBuffer_*,0>,FDefaultSetAllocator>
            ::RemoveImpl<unsigned_int>
                      ((TSet<TTuple<unsigned_int,FMultichannelTcpSocket::FReceiveBuffer_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FMultichannelTcpSocket::FReceiveBuffer_*,0>,FDefaultSetAllocator>
                        *)&this->ReceiveBuffers,uVar8,local_res18);
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            return param_2;
          }
        }
        else {
          uVar8 = 0;
          if (param_2 <= *(int *)&((ForAnyElementType *)(ppFVar4 + 1))->Data) {
            uVar8 = (uint)~param_2 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return iVar6;
          }
          iVar6 = *(int *)&((ForAnyElementType *)(ppFVar4 + 1))->Data - param_2;
          if (iVar6 != 0) {
            memmove(*(FScriptContainerElement **)ppFVar4,
                    *(FScriptContainerElement **)ppFVar4 + param_2,(longlong)iVar6);
          }
          *(int *)&((ForAnyElementType *)(ppFVar4 + 1))->Data =
               *(int *)&((ForAnyElementType *)(ppFVar4 + 1))->Data - param_2;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,(ForAnyElementType *)ppFVar4,
                     *(int *)&((ForAnyElementType *)(ppFVar4 + 1))->Data,
                     (int *)((longlong)&((ForAnyElementType *)(ppFVar4 + 1))->Data + 4));
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        return param_2;
      }
      if (iVar6 == 0) {
        this_00 = ::operator_new(8);
        if (this_00 == (FScopedEvent *)0x0) {
          this_01 = (FScriptContainerElement *)0x0;
        }
        else {
          this_01 = (FScriptContainerElement *)FScopedEvent::FScopedEvent(this_00);
        }
        ((ForAnyElementType *)(local_58.Value + 3))->Data = this_01;
        *(int *)&((ForAnyElementType *)(local_58.Value + 2))->Data = param_2;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (this_01 != (FScriptContainerElement *)0x0) {
        FScopedEvent::~FScopedEvent((FScopedEvent *)this_01);
        ::operator_delete(this_01,8);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
  }
  return 0;
}

