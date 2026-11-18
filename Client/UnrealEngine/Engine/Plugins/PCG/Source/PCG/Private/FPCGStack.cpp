// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 17

// FPCGStack @ 149c4a6b0

FPCGStack * __thiscall FPCGStack::FPCGStack(FPCGStack *this,FPCGStack *param_1)

{
  TArray<FPCGStackFrame,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FPCGStackFrame *pFVar4;
  
  pTVar1 = &this->StackFrames;
  this->GraphExecutionTaskId = param_1->GraphExecutionTaskId;
  piVar2 = &(this->StackFrames).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->StackFrames).ArrayNum;
  pFVar4 = (FPCGStackFrame *)(param_1->StackFrames).AllocatorInstance.Data;
  (this->StackFrames).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FPCGStackFrame,FPCGStackFrame,int>((pTVar1->AllocatorInstance).Data,pFVar4,iVar3)
    ;
  }
  return this;
}

// StaticStruct @ 149c961f0

UScriptStruct * __cdecl FPCGStack::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGStack.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGStack.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGStack,(UObject *)pUVar1,L"PCGStack");
  }
  return Z_Registration_Info_UScriptStruct_FPCGStack.OuterSingleton;
}

// operator== @ 149ca6e00

bool __thiscall FPCGStack::operator==(FPCGStack *this,FPCGStack *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar1 = (this->StackFrames).ArrayNum;
  if (iVar1 == (param_1->StackFrames).ArrayNum) {
    uVar8 = 0;
    if (0 < iVar1) {
      lVar9 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar8 < (this->StackFrames).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        pFVar2 = (this->StackFrames).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar8 < (param_1->StackFrames).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        pFVar3 = (param_1->StackFrames).AllocatorInstance.Data;
        bVar5 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)(pFVar2 + lVar9 + 8),
                           (FSoftObjectPath *)(pFVar3 + lVar9 + 8));
        if ((!bVar5) || (*(int *)(pFVar2 + lVar9 + 0x28) != *(int *)(pFVar3 + lVar9 + 0x28)))
        goto LAB_149ca6f0b;
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x30;
      } while ((int)uVar8 < (this->StackFrames).ArrayNum);
    }
    bVar5 = true;
  }
  else {
LAB_149ca6f0b:
    bVar5 = false;
  }
  return bVar5;
}

// BeginsWith @ 149cad2c0

bool __thiscall FPCGStack::BeginsWith(FPCGStack *this,FPCGStack *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  iVar1 = (param_1->StackFrames).ArrayNum;
  if ((this->StackFrames).ArrayNum < iVar1) {
LAB_149cad466:
    bVar5 = false;
  }
  else {
    uVar8 = 0;
    if (0 < iVar1) {
      lVar9 = 0;
      do {
        uVar10 = ~uVar8 >> 0x1f;
        uVar7 = 0;
        if ((int)uVar8 < (this->StackFrames).ArrayNum) {
          uVar7 = uVar10;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        pFVar2 = (this->StackFrames).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar8 < (param_1->StackFrames).ArrayNum) {
          uVar7 = uVar10;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        if (*(int *)((param_1->StackFrames).AllocatorInstance.Data + lVar9 + 0x2c) !=
            *(int *)(pFVar2 + lVar9 + 0x2c)) goto LAB_149cad466;
        uVar7 = 0;
        if ((int)uVar8 < (param_1->StackFrames).ArrayNum) {
          uVar7 = uVar10;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        pFVar2 = (param_1->StackFrames).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar8 < (this->StackFrames).ArrayNum) {
          uVar7 = uVar10;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        pFVar3 = (this->StackFrames).AllocatorInstance.Data;
        bVar5 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)(pFVar2 + lVar9 + 8),
                           (FSoftObjectPath *)(pFVar3 + lVar9 + 8));
        if ((!bVar5) || (*(int *)(pFVar2 + lVar9 + 0x28) != *(int *)(pFVar3 + lVar9 + 0x28)))
        goto LAB_149cad466;
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x30;
      } while ((int)uVar8 < (param_1->StackFrames).ArrayNum);
    }
    bVar5 = true;
  }
  return bVar5;
}

// CreateStackFramePath @ 149cba430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGStack::CreateStackFramePath(FPCGStack *this,FString *param_1,UPCGNode *param_2,UPCGPin *param_3)

{
  int iVar1;
  code *pcVar2;
  UPCGNode *pUVar3;
  UPCGPin *pUVar4;
  bool bVar5;
  undefined1 uVar6;
  UObject *this_00;
  UClass *pUVar7;
  void *pvVar8;
  FString *pFVar9;
  FString *pFVar10;
  ForAnyElementType FVar11;
  TPersistentObjectPtr<FSoftObjectPath> *this_01;
  int iVar12;
  int iVar13;
  int iVar14;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar15;
  undefined1 auStackY_1138 [32];
  undefined1 local_1108;
  FGCScopeGuard local_1107 [7];
  FString local_1100;
  FName local_10f0;
  UPCGNode *local_10e8;
  UPCGPin *local_10e0;
  FString *local_10d8;
  FName local_10d0;
  FName local_10c8;
  FString local_10c0;
  FString local_10b0;
  FString local_10a0;
  FString local_1090;
  FString local_1080;
  TStringBuilderBase<wchar_t> local_1068;
  wchar_t local_1048 [2048];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_1138;
  local_1068.CurPos = local_1048;
  local_1068.End = (wchar_t *)local_48;
  local_1068.Base = local_1048;
  local_1068.bIsDynamic = false;
  local_1068.bIsExternal = false;
  local_10e8 = param_2;
  local_10e0 = param_3;
  local_10d8 = param_1;
  if (0 < (this->StackFrames).ArrayNum) {
    FGCScopeGuard::FGCScopeGuard(local_1107);
    iVar14 = (this->StackFrames).ArrayNum;
    this_01 = (TPersistentObjectPtr<FSoftObjectPath> *)(this->StackFrames).AllocatorInstance.Data;
    pTVar15 = (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)this_01 + (longlong)iVar14 * 0x30)
    ;
LAB_149cba4e4:
    do {
      if ((this->StackFrames).ArrayNum != iVar14) {
        local_1108 = 0;
        `TCheckedPointerIterator<FPCGStackFrame_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_1108);
      }
      if (this_01 == pTVar15) goto LAB_149cba82b;
      this_00 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_01);
      iVar13 = 0;
      if (this_00 == (UObject *)0x0) {
        if (this_01[1].WeakPtr.ObjectIndex != -1) {
          if ((int)((longlong)local_1068.CurPos - (longlong)local_1068.Base >> 1) != 0) {
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_1068,L"/",1);
          }
          if (local_1068.End < local_1068.CurPos + 5) {
            TStringBuilderBase<wchar_t>::Extend(&local_1068,5);
          }
          pvVar8 = FGenericPlatformString::Memcpy(local_1068.CurPos,L"LOOP:",10);
          local_1068.CurPos = (wchar_t *)((longlong)pvVar8 + 10);
          local_1100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1100.Data.ArrayNum = 0;
          local_1100.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_1100,this_01[1].WeakPtr.ObjectIndex);
          if (local_1100.Data.ArrayNum != 0) {
            iVar13 = local_1100.Data.ArrayNum + -1;
          }
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    (&local_1068,(wchar_t *)local_1100.Data.AllocatorInstance.Data,iVar13);
          FVar11.Data = local_1100.Data.AllocatorInstance.Data;
          goto LAB_149cba818;
        }
      }
      else {
        if ((int)((longlong)local_1068.CurPos - (longlong)local_1068.Base >> 1) != 0) {
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_1068,L"/",1);
        }
        pUVar7 = Z_Construct_UClass_UPCGComponent_NoRegister();
        iVar1 = (int)pUVar7->_padding_;
        if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar7->_padding_)) {
          pUVar7 = Z_Construct_UClass_UPCGGraph_NoRegister();
          iVar1 = (int)pUVar7->_padding_;
          if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar7->_padding_)) {
            pUVar7 = Z_Construct_UClass_UPCGNode_NoRegister();
            iVar1 = (int)pUVar7->_padding_;
            if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
                &pUVar7->_padding_)) {
              if (local_1068.End < local_1068.CurPos + 5) {
                TStringBuilderBase<wchar_t>::Extend(&local_1068,5);
              }
              pvVar8 = FGenericPlatformString::Memcpy(local_1068.CurPos,L"NODE:",10);
              local_1068.CurPos = (wchar_t *)((longlong)pvVar8 + 10);
              local_10f0.ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
              local_10f0.Number = *(uint *)&this_00->field_0x1c;
              ::FName::AppendString(&local_10f0,&local_1068);
              this_01 = (TPersistentObjectPtr<FSoftObjectPath> *)&this_01[1].ObjectID;
              goto LAB_149cba4e4;
            }
            bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6828661919449088101>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGStackContext.cpp"
                               ,0x65,"false");
            if (bVar5) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            if (local_1068.End < local_1068.CurPos + 0xd) {
              TStringBuilderBase<wchar_t>::Extend(&local_1068,0xd);
            }
            pvVar8 = FGenericPlatformString::Memcpy(local_1068.CurPos,L"UNRECOGNIZED:",0x1a);
            local_1068.CurPos = (wchar_t *)((longlong)pvVar8 + 0x1a);
            pFVar9 = UObjectBaseUtility::GetFullName
                               ((UObjectBaseUtility *)this_00,&local_10a0,(UObject *)0x0,None);
            iVar1 = (pFVar9->Data).ArrayNum;
            iVar12 = iVar1 + -1;
            if (iVar1 == 0) {
              iVar12 = iVar13;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      (&local_1068,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,iVar12);
            FVar11.Data = local_10a0.Data.AllocatorInstance.Data;
          }
          else {
            if (local_1068.End < local_1068.CurPos + 6) {
              TStringBuilderBase<wchar_t>::Extend(&local_1068,6);
            }
            pvVar8 = FGenericPlatformString::Memcpy(local_1068.CurPos,L"GRAPH:",0xc);
            local_1068.CurPos = (wchar_t *)((longlong)pvVar8 + 0xc);
            pFVar9 = UObjectBaseUtility::GetFullName
                               ((UObjectBaseUtility *)this_00,&local_10b0,(UObject *)0x0,None);
            iVar1 = (pFVar9->Data).ArrayNum;
            iVar12 = iVar1 + -1;
            if (iVar1 == 0) {
              iVar12 = iVar13;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      (&local_1068,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,iVar12);
            FVar11.Data = local_10b0.Data.AllocatorInstance.Data;
          }
        }
        else {
          if (local_1068.End < local_1068.CurPos + 10) {
            TStringBuilderBase<wchar_t>::Extend(&local_1068,10);
          }
          pvVar8 = FGenericPlatformString::Memcpy(local_1068.CurPos,L"COMPONENT:",0x14);
          local_1068.CurPos = (wchar_t *)((longlong)pvVar8 + 0x14);
          pFVar9 = UObjectBaseUtility::GetFullName
                             ((UObjectBaseUtility *)this_00,&local_10c0,(UObject *)0x0,None);
          iVar1 = (pFVar9->Data).ArrayNum;
          iVar12 = iVar1 + -1;
          if (iVar1 == 0) {
            iVar12 = iVar13;
          }
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    (&local_1068,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,iVar12);
          FVar11.Data = local_10c0.Data.AllocatorInstance.Data;
        }
LAB_149cba818:
        if (FVar11.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar11.Data);
        }
      }
      this_01 = (TPersistentObjectPtr<FSoftObjectPath> *)&this_01[1].ObjectID;
    } while( true );
  }
LAB_149cba85a:
  pFVar9 = local_10d8;
  pUVar4 = local_10e0;
  pUVar3 = local_10e8;
  if (local_10e8 != (UPCGNode *)0x0) {
    if ((int)((longlong)local_1068.CurPos - (longlong)local_1068.Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_1068,L"/",1);
    }
    if (local_1068.End < local_1068.CurPos + 5) {
      TStringBuilderBase<wchar_t>::Extend(&local_1068,5);
    }
    pvVar8 = FGenericPlatformString::Memcpy(local_1068.CurPos,L"NODE:",10);
    local_1068.CurPos = (wchar_t *)((longlong)pvVar8 + 10);
    local_10d0 = (FName)pUVar3->_padding_;
    pFVar10 = ::FName::ToString(&local_10d0,&local_1090);
    iVar13 = (pFVar10->Data).ArrayNum;
    iVar14 = iVar13 + -1;
    if (iVar13 == 0) {
      iVar14 = 0;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (&local_1068,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,iVar14);
    if (local_1090.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1090.Data.AllocatorInstance.Data);
    }
    if (pUVar4 != (UPCGPin *)0x0) {
      if ((int)((longlong)local_1068.CurPos - (longlong)local_1068.Base >> 1) != 0) {
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_1068,L"/",1);
      }
      if (local_1068.End < local_1068.CurPos + 4) {
        TStringBuilderBase<wchar_t>::Extend(&local_1068,4);
      }
      pvVar8 = FGenericPlatformString::Memcpy(local_1068.CurPos,L"PIN:",8);
      local_1068.CurPos = (wchar_t *)((longlong)pvVar8 + 8);
      local_10c8 = (FName)pUVar4->_padding_;
      pFVar10 = ::FName::ToString(&local_10c8,&local_1080);
      iVar13 = (pFVar10->Data).ArrayNum;
      iVar14 = iVar13 + -1;
      if (iVar13 == 0) {
        iVar14 = 0;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (&local_1068,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,iVar14);
      if (local_1080.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1080.Data.AllocatorInstance.Data);
      }
    }
  }
  ::FString::AssignRange
            (pFVar9,local_1068.Base,
             (int)((longlong)local_1068.CurPos - (longlong)local_1068.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1068);
  return true;
LAB_149cba82b:
  FGCScopeGuard::~FGCScopeGuard(local_1107);
  goto LAB_149cba85a;
}

// GetCrc @ 149cc7560

FPCGCrc __thiscall FPCGStack::GetCrc(FPCGStack *this)

{
  int iVar1;
  FPCGCrc in_RDX;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  uint local_res8 [2];
  undefined8 local_e8;
  FSoftObjectPath local_e0;
  FArchiveCrc32 local_b8;
  
  FArchiveCrc32::FArchiveCrc32(&local_b8,0,(UObject *)0x0);
  iVar1 = (this->StackFrames).ArrayNum;
  pFVar2 = (this->StackFrames).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x30;
LAB_149cc75a4:
  do {
    while( true ) {
      if ((this->StackFrames).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FPCGStackFrame_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar2 == pFVar3) {
        *(uint *)in_RDX = local_b8.CRC;
        *(undefined1 *)((longlong)in_RDX + 4) = 1;
        FArchive::~FArchive((FArchive *)&local_b8);
        return in_RDX;
      }
      if (*(longlong *)(pFVar2 + 8) == 0) break;
      local_e8 = *(undefined8 *)pFVar2;
      FSoftObjectPath::FSoftObjectPath(&local_e0,(FSoftObjectPath *)(pFVar2 + 8));
      (**(code **)(local_b8._padding_ + 0x148))(&local_b8,&local_e8);
      if (local_e0.SubPathString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
LAB_149cc766b:
        pFVar2 = pFVar2 + 0x30;
      }
      else {
        FMemory::Free(local_e0.SubPathString.Data.AllocatorInstance.Data);
        pFVar2 = pFVar2 + 0x30;
      }
    }
    local_res8[0] = *(uint *)(pFVar2 + 0x28);
    if (*(uint **)local_b8._padding_ + 1 <= *(uint **)(local_b8._padding_ + 8)) {
      local_res8[0] = **(uint **)local_b8._padding_;
      *(longlong *)local_b8._padding_ = *(longlong *)local_b8._padding_ + 4;
      pFVar2 = pFVar2 + 0x30;
      goto LAB_149cc75a4;
    }
    if ((local_b8._padding_._2_1_ & 1) != 0) {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_b8,local_res8);
      goto LAB_149cc766b;
    }
    (**(code **)(local_b8._padding_ + 0x188))(&local_b8,local_res8,4);
    pFVar2 = pFVar2 + 0x30;
  } while( true );
}

// GetCurrentFrameNode @ 149cc76b0

UPCGNode * __thiscall FPCGStack::GetCurrentFrameNode(FPCGStack *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPCGNode *pUVar4;
  uint uVar5;
  
  iVar1 = (this->StackFrames).ArrayNum;
  if (iVar1 == 0) {
    return (UPCGNode *)0x0;
  }
  uVar5 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar5 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UPCGNode *)(*pcVar2)();
      return pUVar4;
    }
  }
  pUVar4 = FPCGStackFrame::GetObject_AnyThread<UPCGNode>
                     ((FPCGStackFrame *)
                      ((this->StackFrames).AllocatorInstance.Data +
                      (longlong)((this->StackFrames).ArrayNum + -1) * 0x30));
  return pUVar4;
}

// GetGraphForCurrentFrame @ 149cc8140

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGGraph * __thiscall FPCGStack::GetGraphForCurrentFrame(FPCGStack *this)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  UPCGGraph *pUVar6;
  UClass *pUVar7;
  FGCScopeGuard local_res8 [8];
  FGCScopeGuard local_res10 [8];
  
  if (0 < (this->StackFrames).ArrayNum) {
    FGCScopeGuard::FGCScopeGuard(local_res10);
    uVar1 = (this->StackFrames).ArrayNum;
    while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
      if (((this->StackFrames).ArrayNum <= (int)uVar1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pUVar6 = (UPCGGraph *)(*pcVar4)();
        return pUVar6;
      }
      pFVar3 = (this->StackFrames).AllocatorInstance.Data;
      FGCScopeGuard::FGCScopeGuard(local_res8);
      pUVar6 = (UPCGGraph *)
               TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)
                          (pFVar3 + (ulonglong)uVar1 * 0x30));
      if (pUVar6 != (UPCGGraph *)0x0) {
        pUVar7 = Z_Construct_UClass_UPCGGraph_NoRegister();
        iVar2 = (int)pUVar7->_padding_;
        if ((iVar2 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar7->_padding_)) {
          FGCScopeGuard::~FGCScopeGuard(local_res8);
          FGCScopeGuard::~FGCScopeGuard(local_res10);
          return pUVar6;
        }
      }
      FGCScopeGuard::~FGCScopeGuard(local_res8);
    }
    FGCScopeGuard::~FGCScopeGuard(local_res10);
  }
  return (UPCGGraph *)0x0;
}

// GetNearestDynamicSubgraphForCurrentFrame @ 149cca0f0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGGraph * __thiscall FPCGStack::GetNearestDynamicSubgraphForCurrentFrame(FPCGStack *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UPCGGraph *pUVar6;
  UClass *pUVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  FGCScopeGuard local_res8 [16];
  
  iVar1 = (this->StackFrames).ArrayNum;
  uVar11 = iVar1 - 1;
  lVar8 = (longlong)(int)uVar11;
  if (1 < lVar8) {
    uVar9 = iVar1 - 2;
    lVar10 = lVar8 * 0x30;
    do {
      uVar5 = 0;
      if ((int)uVar9 < (this->StackFrames).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar6 = (UPCGGraph *)(*pcVar3)();
        return pUVar6;
      }
      if (*(longlong *)((this->StackFrames).AllocatorInstance.Data + lVar10 + -0x28) == 0) {
        uVar9 = 0;
        if ((int)uVar11 < (this->StackFrames).ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar6 = (UPCGGraph *)(*pcVar3)();
          return pUVar6;
        }
        pFVar2 = (this->StackFrames).AllocatorInstance.Data;
        FGCScopeGuard::FGCScopeGuard(local_res8);
        pUVar6 = (UPCGGraph *)
                 TPersistentObjectPtr<FSoftObjectPath>::Get
                           ((TPersistentObjectPtr<FSoftObjectPath> *)
                            (pFVar2 + (longlong)(int)uVar11 * 0x30));
        if (pUVar6 != (UPCGGraph *)0x0) {
          pUVar7 = Z_Construct_UClass_UPCGGraph_NoRegister();
          iVar1 = (int)pUVar7->_padding_;
          if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar7->_padding_)) goto LAB_149cca239;
        }
        pUVar6 = (UPCGGraph *)0x0;
LAB_149cca239:
        FGCScopeGuard::~FGCScopeGuard(local_res8);
        return pUVar6;
      }
      uVar11 = uVar11 - 1;
      uVar9 = uVar9 - 1;
      lVar8 = lVar8 + -1;
      lVar10 = lVar10 + -0x30;
    } while (1 < lVar8);
  }
  return (UPCGGraph *)0x0;
}

// GetNearestNonInlinedGraphForCurrentFrame @ 149cca260

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGGraph * __thiscall FPCGStack::GetNearestNonInlinedGraphForCurrentFrame(FPCGStack *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UPCGGraph *pUVar5;
  UClass *pUVar6;
  uint uVar7;
  FGCScopeGuard local_res10 [8];
  
  pUVar5 = GetNearestDynamicSubgraphForCurrentFrame(this);
  if (pUVar5 == (UPCGGraph *)0x0) {
    if (0 < (this->StackFrames).ArrayNum) {
      FGCScopeGuard::FGCScopeGuard(local_res10);
      uVar7 = 0;
      if (0 < (this->StackFrames).ArrayNum) {
        do {
          uVar4 = 0;
          if ((int)uVar7 < (this->StackFrames).ArrayNum) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if (uVar4 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pUVar5 = (UPCGGraph *)(*pcVar2)();
              return pUVar5;
            }
          }
          pUVar5 = (UPCGGraph *)
                   TPersistentObjectPtr<FSoftObjectPath>::Get
                             ((TPersistentObjectPtr<FSoftObjectPath> *)
                              ((this->StackFrames).AllocatorInstance.Data +
                              (longlong)(int)uVar7 * 0x30));
          if (pUVar5 != (UPCGGraph *)0x0) {
            pUVar6 = Z_Construct_UClass_UPCGGraph_NoRegister();
            iVar1 = (int)pUVar6->_padding_;
            if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
                &pUVar6->_padding_)) {
              FGCScopeGuard::~FGCScopeGuard(local_res10);
              return pUVar5;
            }
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (this->StackFrames).ArrayNum);
      }
      FGCScopeGuard::~FGCScopeGuard(local_res10);
    }
    pUVar5 = (UPCGGraph *)0x0;
  }
  return pUVar5;
}

// GetNodeForCurrentFrame @ 149cca380

UPCGNode * __thiscall FPCGStack::GetNodeForCurrentFrame(FPCGStack *this)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  UPCGNode *pUVar6;
  UClass *pUVar7;
  FGCScopeGuard local_res8 [8];
  FGCScopeGuard local_res10 [8];
  
  if (0 < (this->StackFrames).ArrayNum) {
    FGCScopeGuard::FGCScopeGuard(local_res10);
    uVar1 = (this->StackFrames).ArrayNum;
    while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
      if (((this->StackFrames).ArrayNum <= (int)uVar1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pUVar6 = (UPCGNode *)(*pcVar4)();
        return pUVar6;
      }
      pFVar3 = (this->StackFrames).AllocatorInstance.Data;
      FGCScopeGuard::FGCScopeGuard(local_res8);
      pUVar6 = (UPCGNode *)
               TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)
                          (pFVar3 + (ulonglong)uVar1 * 0x30));
      if (pUVar6 != (UPCGNode *)0x0) {
        pUVar7 = Z_Construct_UClass_UPCGNode_NoRegister();
        iVar2 = (int)pUVar7->_padding_;
        if ((iVar2 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar7->_padding_)) {
          FGCScopeGuard::~FGCScopeGuard(local_res8);
          FGCScopeGuard::~FGCScopeGuard(local_res10);
          return pUVar6;
        }
      }
      FGCScopeGuard::~FGCScopeGuard(local_res8);
    }
    FGCScopeGuard::~FGCScopeGuard(local_res10);
  }
  return (UPCGNode *)0x0;
}

// GetNumGraphLevels @ 149cca4e0

uint __thiscall FPCGStack::GetNumGraphLevels(FPCGStack *this)

{
  int iVar1;
  int iVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  uint uVar5;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar6;
  FGCScopeGuard local_res8 [8];
  undefined1 local_res10 [8];
  
  uVar5 = 0;
  if (0 < (this->StackFrames).ArrayNum) {
    FGCScopeGuard::FGCScopeGuard(local_res8);
    iVar1 = (this->StackFrames).ArrayNum;
    this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)(this->StackFrames).AllocatorInstance.Data;
    pTVar6 = (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)this_00 + (longlong)iVar1 * 0x30);
    while( true ) {
      if ((this->StackFrames).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FPCGStackFrame_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (this_00 == pTVar6) break;
      pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
      if (pUVar3 != (UObject *)0x0) {
        pUVar4 = Z_Construct_UClass_UPCGGraph_NoRegister();
        iVar2 = (int)pUVar4->_padding_;
        if ((iVar2 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar4->_padding_)) {
          uVar5 = uVar5 + 1;
        }
      }
      this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)&this_00[1].ObjectID;
    }
    FGCScopeGuard::~FGCScopeGuard(local_res8);
  }
  return uVar5;
}

// GetRootComponent @ 149ccbd90

UPCGComponent * __thiscall FPCGStack::GetRootComponent(FPCGStack *this)

{
  int iVar1;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  code *pcVar2;
  bool bVar3;
  UPCGComponent *pUVar4;
  UClass *pUVar5;
  FGCScopeGuard local_res8 [32];
  
  if ((this->StackFrames).ArrayNum == 0) {
    return (UPCGComponent *)0x0;
  }
  if ((this->StackFrames).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UPCGComponent *)(*pcVar2)();
      return pUVar4;
    }
  }
  this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)(this->StackFrames).AllocatorInstance.Data;
  FGCScopeGuard::FGCScopeGuard(local_res8);
  pUVar4 = (UPCGComponent *)TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
  if (pUVar4 != (UPCGComponent *)0x0) {
    pUVar5 = Z_Construct_UClass_UPCGComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_149ccbe26;
  }
  pUVar4 = (UPCGComponent *)0x0;
LAB_149ccbe26:
  FGCScopeGuard::~FGCScopeGuard(local_res8);
  return pUVar4;
}

// GetRootGraph @ 149ccbe40

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGGraph * __thiscall FPCGStack::GetRootGraph(FPCGStack *this,int *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UPCGGraph *pUVar5;
  UClass *pUVar6;
  uint uVar7;
  FGCScopeGuard local_res8 [8];
  
  if (0 < (this->StackFrames).ArrayNum) {
    FGCScopeGuard::FGCScopeGuard(local_res8);
    uVar7 = 0;
    if (0 < (this->StackFrames).ArrayNum) {
      do {
        uVar4 = 0;
        if ((int)uVar7 < (this->StackFrames).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pUVar5 = (UPCGGraph *)(*pcVar2)();
          return pUVar5;
        }
        pUVar5 = (UPCGGraph *)
                 TPersistentObjectPtr<FSoftObjectPath>::Get
                           ((TPersistentObjectPtr<FSoftObjectPath> *)
                            ((this->StackFrames).AllocatorInstance.Data +
                            (longlong)(int)uVar7 * 0x30));
        if (pUVar5 != (UPCGGraph *)0x0) {
          pUVar6 = Z_Construct_UClass_UPCGGraph_NoRegister();
          iVar1 = (int)pUVar6->_padding_;
          if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar6->_padding_)) {
            if (param_1 != (int *)0x0) {
              *param_1 = uVar7;
            }
            FGCScopeGuard::~FGCScopeGuard(local_res8);
            return pUVar5;
          }
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (this->StackFrames).ArrayNum);
    }
    FGCScopeGuard::~FGCScopeGuard(local_res8);
  }
  return (UPCGGraph *)0x0;
}

// GetRootSource @ 149ccbf60

IPCGGraphExecutionSource * __thiscall FPCGStack::GetRootSource(FPCGStack *this)

{
  int iVar1;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  code *pcVar2;
  bool bVar3;
  IPCGGraphExecutionSource *pIVar4;
  UObject *this_01;
  UClass *pUVar5;
  FGCScopeGuard local_res8 [8];
  
  iVar1 = (this->StackFrames).ArrayNum;
  pIVar4 = (IPCGGraphExecutionSource *)0x0;
  if (iVar1 != 0) {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pIVar4 = (IPCGGraphExecutionSource *)(*pcVar2)();
        return pIVar4;
      }
    }
    this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)(this->StackFrames).AllocatorInstance.Data;
    FGCScopeGuard::FGCScopeGuard(local_res8);
    this_01 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    if (this_01 != (UObject *)0x0) {
      pUVar5 = Z_Construct_UClass_UPCGGraphExecutionSource_NoRegister();
      pIVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar5);
    }
    FGCScopeGuard::~FGCScopeGuard(local_res8);
  }
  return pIVar4;
}

// HasObject @ 149cccf00

bool __thiscall FPCGStack::HasObject(FPCGStack *this,UObject *param_1)

{
  int iVar1;
  UObject *pUVar2;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar3;
  FGCScopeGuard local_res8 [8];
  undefined1 local_res18 [8];
  
  if ((this->StackFrames).ArrayNum == 0) {
    return false;
  }
  FGCScopeGuard::FGCScopeGuard(local_res8);
  iVar1 = (this->StackFrames).ArrayNum;
  this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)(this->StackFrames).AllocatorInstance.Data;
  pTVar3 = (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)this_00 + (longlong)iVar1 * 0x30);
  while( true ) {
    if ((this->StackFrames).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGStackFrame_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (this_00 == pTVar3) break;
    pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    if (pUVar2 == param_1) goto LAB_149cccf7a;
    this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)&this_00[1].ObjectID;
  }
  this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)0x0;
LAB_149cccf7a:
  FGCScopeGuard::~FGCScopeGuard(local_res8);
  return this_00 != (TPersistentObjectPtr<FSoftObjectPath> *)0x0;
}

// PopFrame @ 149cce520

void __thiscall FPCGStack::PopFrame(FPCGStack *this)

{
  TArray<FPCGStackFrame,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  
  iVar6 = (this->StackFrames).ArrayNum;
  if (iVar6 == 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6828661919449088052>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGStackContext.cpp"
                       ,0x34,"!StackFrames.IsEmpty()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pTVar1 = &this->StackFrames;
    if ((iVar6 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar7 = (longlong)(this->StackFrames).ArrayNum;
    pFVar8 = (pTVar1->AllocatorInstance).Data;
    pvVar3 = *(void **)(pFVar8 + lVar7 * 0x30 + -0x18);
    *(undefined8 *)(pFVar8 + lVar7 * 0x30 + -0x18) = 0;
    *(undefined8 *)(pFVar8 + lVar7 * 0x30 + -0x10) = 0;
    iVar6 = (this->StackFrames).ArrayNum;
    pFVar8 = (pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x30;
    if (*(void **)(pFVar8 + -0x18) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar8 + -0x18));
    }
    iVar6 = (this->StackFrames).ArrayNum - iVar6;
    if (iVar6 != 0) {
      memmove(pFVar8 + -0x30,pFVar8,(longlong)iVar6 * 0x30);
    }
    piVar2 = &(this->StackFrames).ArrayNum;
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,&pTVar1->AllocatorInstance,(this->StackFrames).ArrayNum,
               &(this->StackFrames).ArrayMax);
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
      return;
    }
  }
  return;
}

