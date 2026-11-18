// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// StaticStruct @ 14d537b70

UScriptStruct * __cdecl FCameraContextDataTableAllocationInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraContextDataTableAllocationInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraContextDataTableAllocationInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraContextDataTableAllocationInfo,
                         (UObject *)pUVar1,L"CameraContextDataTableAllocationInfo");
  }
  return Z_Registration_Info_UScriptStruct_FCameraContextDataTableAllocationInfo.OuterSingleton;
}

// operator= @ 14d544de0

FCameraContextDataTableAllocationInfo * __thiscall
FCameraContextDataTableAllocationInfo::operator=
          (FCameraContextDataTableAllocationInfo *this,
          FCameraContextDataTableAllocationInfo *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FCameraContextDataDefinition *pFVar4;
  
  if (this != param_1) {
    iVar2 = (this->DataDefinitions).ArrayMax;
    piVar1 = &(this->DataDefinitions).ArrayMax;
    pFVar4 = (FCameraContextDataDefinition *)(param_1->DataDefinitions).AllocatorInstance.Data;
    iVar3 = (param_1->DataDefinitions).ArrayNum;
    (this->DataDefinitions).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
    ConstructItems<FCameraContextDataDefinition,FCameraContextDataDefinition,int>
              ((this->DataDefinitions).AllocatorInstance.Data,pFVar4,iVar3);
  }
  return this;
}

// Combine @ 14d551140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCameraContextDataTableAllocationInfo::Combine
          (FCameraContextDataTableAllocationInfo *this,
          FCameraContextDataTableAllocationInfo *param_1)

{
  int *piVar1;
  uint uVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  uint *puVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStackY_f8 [32];
  undefined1 local_a8 [4];
  int local_a4;
  TPairInitializer<FCameraContextDataID_const_&,int_&&> local_a0;
  int *local_90;
  TSet<TTuple<FCameraContextDataID,int>,TDefaultMapHashableKeyFuncs<FCameraContextDataID,int,0>,FDefaultSetAllocator>
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
  for (iVar10 = 0; (-1 < iVar10 && (iVar10 < (this->DataDefinitions).ArrayNum)); iVar10 = iVar10 + 1
      ) {
    if ((iVar10 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_a0.Value =
         (int *)((this->DataDefinitions).AllocatorInstance.Data + (longlong)iVar10 * 0x20);
    local_90 = &local_a4;
    local_a4 = iVar10;
    TSet<TTuple<FCameraContextDataID,int>,TDefaultMapHashableKeyFuncs<FCameraContextDataID,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FCameraContextDataID_const_&,int_&&>_>
              (&local_88,&local_a0,(bool *)&local_a0.Value);
  }
  iVar10 = (param_1->DataDefinitions).ArrayNum;
  pFVar11 = (param_1->DataDefinitions).AllocatorInstance.Data;
  pFVar13 = pFVar11 + (longlong)iVar10 * 0x20;
  do {
    if ((param_1->DataDefinitions).ArrayNum != iVar10) {
      local_a8[0] = 0;
      `TCheckedPointerIterator<FCameraContextDataDefinition_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_a8);
    }
    if (pFVar11 == pFVar13) {
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FCameraContextDataID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FCameraContextDataID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      return;
    }
    if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
      FVar8 = (ForElementType<FSetElementId>)&local_88.Hash;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar8 = local_88.Hash.SecondaryData;
      }
      uVar2 = *(uint *)((longlong)FVar8 + (ulonglong)(local_88.HashSize - 1U & *(uint *)pFVar11) * 4
                       );
      while (uVar2 != 0xffffffff) {
        puVar9 = (uint *)((longlong)(int)uVar2 * 0x10 + local_88.Elements._0_8_);
        if (*puVar9 == *(uint *)pFVar11) {
          if (puVar9 != (uint *)0x0) {
            uVar2 = puVar9[1];
            if (uVar2 != 0xffffffff) {
              uVar7 = 0;
              if ((int)uVar2 < (this->DataDefinitions).ArrayNum) {
                uVar7 = ~uVar2 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar12 = (this->DataDefinitions).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x20
              ;
              if (((((*(uint *)pFVar12 != *(uint *)pFVar11) ||
                    (*(uint *)(pFVar12 + 4) != *(uint *)(pFVar11 + 4))) ||
                   (*(uint *)(pFVar12 + 8) != *(uint *)(pFVar11 + 8))) ||
                  ((*(longlong *)(pFVar12 + 0x10) != *(longlong *)(pFVar11 + 0x10) ||
                   (pFVar12[0x18] != pFVar11[0x18])))) &&
                 (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<2433812100963893274>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraContextDataTableAllocationInfo.cpp"
                                     ,0x1a,"KnownDataDefinition == OtherDataDefinition"), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              goto LAB_14d551369;
            }
          }
          break;
        }
        uVar2 = puVar9[2];
      }
    }
    pFVar12 = (this->DataDefinitions).AllocatorInstance.Data;
    if (((pFVar12 <= pFVar11) &&
        (pFVar11 < pFVar12 + (longlong)(this->DataDefinitions).ArrayMax * 0x20)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (this->DataDefinitions).ArrayNum;
    piVar1 = &(this->DataDefinitions).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,(ForAnyElementType *)this,piVar1);
    }
    (this->DataDefinitions).ArrayNum = iVar6 + 1;
    pFVar12 = (this->DataDefinitions).AllocatorInstance.Data + (longlong)iVar6 * 0x20;
    *(uint *)pFVar12 = *(uint *)pFVar11;
    *(uint *)(pFVar12 + 4) = *(uint *)(pFVar11 + 4);
    *(uint *)(pFVar12 + 8) = *(uint *)(pFVar11 + 8);
    pUVar3 = *(UObject **)(pFVar11 + 0x10);
    *(UObject **)(pFVar12 + 0x10) = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    pFVar12[0x18] = pFVar11[0x18];
LAB_14d551369:
    pFVar11 = pFVar11 + 0x20;
  } while( true );
}

