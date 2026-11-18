// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// operator= @ 14d544e70

FCameraVariableTableAllocationInfo * __thiscall
FCameraVariableTableAllocationInfo::operator=
          (FCameraVariableTableAllocationInfo *this,FCameraVariableTableAllocationInfo *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FCameraVariableDefinition *pFVar4;
  
  if (this != param_1) {
    iVar2 = (this->VariableDefinitions).ArrayMax;
    piVar1 = &(this->VariableDefinitions).ArrayMax;
    pFVar4 = (FCameraVariableDefinition *)(param_1->VariableDefinitions).AllocatorInstance.Data;
    iVar3 = (param_1->VariableDefinitions).ArrayNum;
    (this->VariableDefinitions).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
    ConstructItems<FCameraVariableDefinition,FCameraVariableDefinition,int>
              ((this->VariableDefinitions).AllocatorInstance.Data,pFVar4,iVar3);
  }
  return this;
}

// StaticStruct @ 14d5702b0

UScriptStruct * __cdecl FCameraVariableTableAllocationInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraVariableTableAllocationInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraVariableTableAllocationInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo,
                         (UObject *)pUVar1,L"CameraVariableTableAllocationInfo");
  }
  return Z_Registration_Info_UScriptStruct_FCameraVariableTableAllocationInfo.OuterSingleton;
}

// Combine @ 14d59bf30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCameraVariableTableAllocationInfo::Combine
          (FCameraVariableTableAllocationInfo *this,FCameraVariableTableAllocationInfo *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  uint *puVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStackY_f8 [32];
  undefined1 local_a8 [4];
  int local_a4;
  TPairInitializer<FCameraVariableID_const_&,int_&&> local_a0;
  int *local_90;
  TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  for (iVar12 = 0; (-1 < iVar12 && (iVar12 < (this->VariableDefinitions).ArrayNum));
      iVar12 = iVar12 + 1) {
    if ((iVar12 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_a0.Value =
         (int *)((this->VariableDefinitions).AllocatorInstance.Data + (longlong)iVar12 * 0x18);
    local_90 = &local_a4;
    local_a4 = iVar12;
    TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FCameraVariableID_const_&,int_&&>_>
              (&local_88,&local_a0,(bool *)&local_a0.Value);
  }
  iVar12 = (param_1->VariableDefinitions).ArrayNum;
  pFVar13 = (param_1->VariableDefinitions).AllocatorInstance.Data;
  pFVar2 = pFVar13 + (longlong)iVar12 * 0x18;
  do {
    if ((param_1->VariableDefinitions).ArrayNum != iVar12) {
      local_a8[0] = 0;
      `TCheckedPointerIterator<FCameraVariableDefinition_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_a8);
    }
    if (pFVar13 == pFVar2) {
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FCameraVariableID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FCameraVariableID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      return;
    }
    if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
      FVar10 = (ForElementType<FSetElementId>)&local_88.Hash;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar10 = local_88.Hash.SecondaryData;
      }
      uVar3 = *(uint *)((longlong)FVar10 +
                       (ulonglong)(local_88.HashSize - 1U & *(uint *)pFVar13) * 4);
      while (uVar3 != 0xffffffff) {
        puVar11 = (uint *)((longlong)(int)uVar3 * 0x10 + local_88.Elements._0_8_);
        if (*puVar11 == *(uint *)pFVar13) {
          if (puVar11 != (uint *)0x0) {
            uVar3 = puVar11[1];
            if (uVar3 != 0xffffffff) {
              uVar9 = 0;
              if ((int)uVar3 < (this->VariableDefinitions).ArrayNum) {
                uVar9 = ~uVar3 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar4 = (this->VariableDefinitions).AllocatorInstance.Data +
                       (longlong)(int)uVar3 * 0x18;
              if ((((((*(uint *)pFVar4 != *(uint *)pFVar13) ||
                     (*(uint *)(pFVar4 + 4) != *(uint *)(pFVar13 + 4))) ||
                    (*(longlong *)(pFVar4 + 8) != *(longlong *)(pFVar13 + 8))) ||
                   ((pFVar4[0x10] != pFVar13[0x10] || (pFVar4[0x11] != pFVar13[0x11])))) ||
                  (pFVar4[0x12] != pFVar13[0x12])) &&
                 (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<5877222377284173850>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableTableAllocationInfo.cpp"
                                     ,0x1a,"KnownVariableDefinition == OtherVariableDefinition"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              goto LAB_14d59c162;
            }
          }
          break;
        }
        uVar3 = puVar11[2];
      }
    }
    pFVar4 = (this->VariableDefinitions).AllocatorInstance.Data;
    if (((pFVar4 <= pFVar13) &&
        (pFVar13 < pFVar4 + (longlong)(this->VariableDefinitions).ArrayMax * 0x18)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = (this->VariableDefinitions).ArrayNum;
    piVar1 = &(this->VariableDefinitions).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)this,piVar1);
    }
    (this->VariableDefinitions).ArrayNum = iVar8 + 1;
    pFVar4 = (this->VariableDefinitions).AllocatorInstance.Data + (longlong)iVar8 * 0x18;
    *(uint *)pFVar4 = *(uint *)pFVar13;
    *(uint *)(pFVar4 + 4) = *(uint *)(pFVar13 + 4);
    pUVar5 = *(UObject **)(pFVar13 + 8);
    *(UObject **)(pFVar4 + 8) = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    pFVar4[0x10] = pFVar13[0x10];
    pFVar4[0x11] = pFVar13[0x11];
    pFVar4[0x12] = pFVar13[0x12];
LAB_14d59c162:
    pFVar13 = pFVar13 + 0x18;
  } while( true );
}

