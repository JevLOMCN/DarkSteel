// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// AddAttributeToAllData @ 1497eb0f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGDataCollectionDesc::AddAttributeToAllData
          (FPCGDataCollectionDesc *this,FPCGKernelAttributeKey *param_1,UPCGDataBinding *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  void *pvVar2;
  FPCGDataDesc *this_00;
  FPCGDataDesc *pFVar3;
  undefined1 local_res8 [8];
  undefined1 local_88 [32];
  FPCGAttributePropertySelector local_68;
  
  iVar1 = (this->DataDescs).ArrayNum;
  this_00 = (FPCGDataDesc *)(this->DataDescs).AllocatorInstance.Data;
  pFVar3 = this_00 + iVar1;
  while( true ) {
    if ((this->DataDescs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGDataDesc,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar3) break;
    local_88._0_8_ = (param_1->Identifier).Name;
    local_88[8] = (param_1->Identifier).MetadataDomain.Flag;
    local_88._9_3_ = *(undefined3 *)&(param_1->Identifier).MetadataDomain.field_0x1;
    local_88._12_4_ = (param_1->Identifier).MetadataDomain.CustomFlag;
    local_88[0x18] = param_1->Type;
    local_88._16_8_ = (param_1->Identifier).MetadataDomain.DebugName;
    FPCGAttributePropertySelector::FPCGAttributePropertySelector
              (&local_68,(FPCGAttributePropertySelector *)&param_1->Name);
    local_68._padding_ = (longlong)&___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
    FPCGDataDesc::AddAttribute(this_00,(FPCGKernelAttributeKey *)local_88,param_2,param_3);
    this_00 = this_00 + 1;
  }
  DestructItems<FString,int>
            (*(FString **)&(param_1->Name).field_0x28,*(int *)&(param_1->Name).field_0x30);
  pvVar2 = *(void **)&(param_1->Name).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return;
}

// AllocatePropertiesForAllData @ 1497ee660

void __thiscall
FPCGDataCollectionDesc::AllocatePropertiesForAllData
          (FPCGDataCollectionDesc *this,EPCGPointNativeProperties param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->DataDescs).ArrayNum;
  pFVar2 = (this->DataDescs).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x68;
  while( true ) {
    if ((this->DataDescs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGDataDesc,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    *(EPCGPointNativeProperties *)(pFVar2 + 0x40) =
         *(EPCGPointNativeProperties *)(pFVar2 + 0x40) | param_1;
    pFVar2 = pFVar2 + 0x68;
  }
  return;
}

// ComputeTotalElementCount @ 1497f6000

uint __thiscall FPCGDataCollectionDesc::ComputeTotalElementCount(FPCGDataCollectionDesc *this)

{
  FScriptContainerElement FVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  
  iVar2 = (this->DataDescs).ArrayNum;
  uVar5 = 0;
  pFVar3 = (this->DataDescs).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar2 * 0x68;
  do {
    while( true ) {
      if ((this->DataDescs).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FPCGDataDesc_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar3 == pFVar4) {
        return uVar5;
      }
      FVar1 = pFVar3[0x28];
      if (FVar1 != (FScriptContainerElement)0x0) break;
LAB_1497f608a:
      uVar5 = uVar5 + *(int *)(pFVar3 + 0x18);
      pFVar3 = pFVar3 + 0x68;
    }
    if (FVar1 == (FScriptContainerElement)0x1) {
      uVar5 = uVar5 + *(int *)(pFVar3 + 0x1c) * *(int *)(pFVar3 + 0x18);
      pFVar3 = pFVar3 + 0x68;
    }
    else if (FVar1 == (FScriptContainerElement)0x2) {
      uVar5 = uVar5 + *(int *)(pFVar3 + 0x20) * *(int *)(pFVar3 + 0x1c) * *(int *)(pFVar3 + 0x18);
      pFVar3 = pFVar3 + 0x68;
    }
    else {
      if (FVar1 != (FScriptContainerElement)0x3) goto LAB_1497f608a;
      uVar5 = uVar5 + *(int *)(pFVar3 + 0x24) * *(int *)(pFVar3 + 0x20) * *(int *)(pFVar3 + 0x1c) *
                      *(int *)(pFVar3 + 0x18);
      pFVar3 = pFVar3 + 0x68;
    }
  } while( true );
}

// ContainsAttributeOnAnyData @ 1497f6210

bool __thiscall
FPCGDataCollectionDesc::ContainsAttributeOnAnyData
          (FPCGDataCollectionDesc *this,FPCGAttributeIdentifier *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  char cStack_20;
  int iStack_1c;
  
  pFVar5 = (this->DataDescs).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)(this->DataDescs).ArrayNum * 0x68;
  for (; pFVar5 != pFVar6; pFVar5 = pFVar5 + 0x68) {
    lVar3 = *(longlong *)(pFVar5 + 0x30);
    uVar1 = (param_1->MetadataDomain).Flag;
    uVar2 = (param_1->MetadataDomain).CustomFlag;
    lVar4 = (longlong)*(int *)(pFVar5 + 0x38) * 0x78 + lVar3;
    if (lVar3 != lVar4) {
      do {
        if (((*(FName *)(lVar3 + 8) == param_1->Name) && (*(char *)(lVar3 + 0x10) == uVar1)) &&
           (*(int *)(lVar3 + 0x14) == uVar2)) goto LAB_1497f6286;
        lVar3 = lVar3 + 0x78;
      } while (lVar3 != lVar4);
    }
  }
  pFVar5 = (FScriptContainerElement *)0x0;
LAB_1497f6286:
  return pFVar5 != (FScriptContainerElement *)0x0;
}

// GetAttributeDesc @ 14980fc90

bool __thiscall
FPCGDataCollectionDesc::GetAttributeDesc
          (FPCGDataCollectionDesc *this,FPCGAttributeIdentifier *param_1,
          FPCGKernelAttributeDesc *param_2,bool *param_3,bool *param_4)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  FName *pFVar9;
  char cVar10;
  int *piVar11;
  ulonglong uVar12;
  byte bVar13;
  FScriptContainerElement *pFVar14;
  int *piVar15;
  undefined1 local_47 [3];
  uint local_44;
  FScriptContainerElement *local_40;
  
  cVar10 = -1;
  bVar8 = true;
  *param_4 = false;
  local_44 = (this->DataDescs).ArrayNum;
  uVar12 = (ulonglong)(int)local_44;
  pFVar14 = (this->DataDescs).AllocatorInstance.Data;
  local_40 = pFVar14 + uVar12 * 0x68;
  while( true ) {
    pFVar5 = local_40;
    if ((this->DataDescs).ArrayNum != (int)uVar12) {
      local_47[0] = 0;
      `TCheckedPointerIterator<FPCGDataDesc_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_47);
    }
    if (pFVar14 == pFVar5) break;
    iVar2 = *(int *)(pFVar14 + 0x38);
    bVar13 = 0;
    piVar11 = *(int **)(pFVar14 + 0x30);
    if ((iVar2 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    piVar15 = piVar11 + (longlong)iVar2 * 0x1e;
    if (piVar11 != piVar15) {
      pFVar9 = (FName *)(piVar11 + 2);
      bVar13 = 0;
      do {
        if (((*pFVar9 == param_1->Name) &&
            ((EPCGMetadataDomainFlag)pFVar9[1].ComparisonIndex.Value ==
             (param_1->MetadataDomain).Flag)) &&
           (pFVar9[1].Number == (param_1->MetadataDomain).CustomFlag)) {
          cVar1 = (char)pFVar9[3].ComparisonIndex.Value;
          if (cVar1 == -1) {
            bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_498753438025252176>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataDescription.cpp"
                               ,0x2b0,
                               "AttributeDesc.GetAttributeKey().GetType() != EPCGKernelAttributeType::Invalid"
                              );
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
          }
          else {
            bVar13 = 1;
            if (cVar10 == -1) {
              param_2->AttributeId = *piVar11;
              FVar4 = pFVar9[1];
              (param_2->AttributeKey).Identifier.Name = *pFVar9;
              *(FName *)&(param_2->AttributeKey).Identifier.MetadataDomain = FVar4;
              (param_2->AttributeKey).Identifier.MetadataDomain.DebugName = pFVar9[2];
              (param_2->AttributeKey).Type =
                   (EPCGKernelAttributeType)pFVar9[3].ComparisonIndex.Value;
              *(uint *)&(param_2->AttributeKey).Name.field_0x8 = pFVar9[5].ComparisonIndex.Value;
              *(undefined8 *)&(param_2->AttributeKey).Name.field_0xc =
                   *(undefined8 *)&pFVar9[5].Number;
              *(undefined8 *)&(param_2->AttributeKey).Name.field_0x14 =
                   *(undefined8 *)&pFVar9[6].Number;
              *(undefined8 *)&(param_2->AttributeKey).Name.field_0x1c =
                   *(undefined8 *)&pFVar9[7].Number;
              TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                        ((TArray<FString,TSizedDefaultAllocator<32>_> *)
                         &(param_2->AttributeKey).Name.field_0x28,
                         (TArray<FString,TSizedDefaultAllocator<32>_> *)(pFVar9 + 9));
              (param_2->AttributeKey).Name.field_0x38 = (char)pFVar9[0xb].ComparisonIndex.Value;
              TArray<int,TSizedDefaultAllocator<32>_>::operator=
                        (&param_2->UniqueStringKeys,
                         (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar9 + 0xc));
              cVar10 = (char)pFVar9[3].ComparisonIndex.Value;
            }
            else if (cVar10 != cVar1) {
              *param_3 = true;
              return true;
            }
          }
        }
        piVar11 = piVar11 + 0x1e;
        pFVar9 = pFVar9 + 0xf;
      } while (piVar11 != piVar15);
    }
    bVar8 = (bool)(bVar8 & bVar13);
    pFVar14 = pFVar14 + 0x68;
    uVar12 = (ulonglong)local_44;
  }
  *param_3 = false;
  *param_4 = bVar8;
  return cVar10 != -1;
}

// GetNumStringKeyValues @ 149816630

int __thiscall
FPCGDataCollectionDesc::GetNumStringKeyValues(FPCGDataCollectionDesc *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  
  pFVar10 = (this->DataDescs).AllocatorInstance.Data;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar1 = (this->DataDescs).ArrayNum;
  uVar5 = (ulonglong)(int)uVar1;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  pFVar9 = pFVar10 + uVar5 * 0x68;
  while( true ) {
    if ((this->DataDescs).ArrayNum != (int)uVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPCGDataDesc_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar9) {
      iVar4 = local_50.ArrayNum;
      if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.AllocatorInstance.Data);
      }
      return iVar4;
    }
    iVar4 = *(int *)(pFVar10 + 0x38);
    piVar7 = *(int **)(pFVar10 + 0x30);
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    piVar6 = piVar7 + (longlong)iVar4 * 0x1e;
    if (piVar7 != piVar6) break;
LAB_1498166de:
    uVar5 = (ulonglong)uVar1;
    pFVar10 = pFVar10 + 0x68;
  }
LAB_1498166d0:
  if (*piVar7 != param_1) goto code_r0x0001498166d5;
  piVar8 = *(int **)(piVar7 + 0x1a);
  iVar4 = piVar7[0x1c];
  piVar6 = piVar8 + iVar4;
  while( true ) {
    if (piVar7[0x1c] != iVar4) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (piVar8 == piVar6) break;
    local_res20[0] = *piVar8;
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(&local_50,local_res20);
    piVar8 = piVar8 + 1;
  }
  goto LAB_1498166de;
code_r0x0001498166d5:
  piVar7 = piVar7 + 0x1e;
  if (piVar7 == piVar6) goto LAB_1498166de;
  goto LAB_1498166d0;
}

// GetUniqueStringKeyValues @ 14981c240

void __thiscall
FPCGDataCollectionDesc::GetUniqueStringKeyValues
          (FPCGDataCollectionDesc *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2
          )

{
  int iVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  ulonglong uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  int local_48;
  uint local_44;
  FScriptContainerElement *local_40;
  
  pFVar9 = (this->DataDescs).AllocatorInstance.Data;
  local_44 = (this->DataDescs).ArrayNum;
  uVar5 = (ulonglong)(int)local_44;
  local_40 = pFVar9 + uVar5 * 0x68;
  while( true ) {
    pFVar3 = local_40;
    if ((this->DataDescs).ArrayNum != (int)uVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPCGDataDesc_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar3) {
      return;
    }
    iVar1 = *(int *)(pFVar9 + 0x38);
    piVar7 = *(int **)(pFVar9 + 0x30);
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    piVar6 = piVar7 + (longlong)iVar1 * 0x1e;
    if (piVar7 != piVar6) break;
LAB_14981c2de:
    pFVar9 = pFVar9 + 0x68;
    uVar5 = (ulonglong)local_44;
  }
LAB_14981c2d0:
  if (*piVar7 != param_1) goto code_r0x00014981c2d5;
  piVar8 = *(int **)(piVar7 + 0x1a);
  iVar1 = piVar7[0x1c];
  piVar6 = piVar8 + iVar1;
  while( true ) {
    if (piVar7[0x1c] != iVar1) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (piVar8 == piVar6) break;
    local_48 = *piVar8;
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(param_2,&local_48);
    piVar8 = piVar8 + 1;
  }
  goto LAB_14981c2de;
code_r0x00014981c2d5:
  piVar7 = piVar7 + 0x1e;
  if (piVar7 == piVar6) goto LAB_14981c2de;
  goto LAB_14981c2d0;
}

// MakeShared @ 1498214a0

TSharedPtr<FPCGDataCollectionDesc,1> * __cdecl
FPCGDataCollectionDesc::MakeShared(TSharedPtr<FPCGDataCollectionDesc,1> *__return_storage_ptr__)

{
  FPCGDataCollectionDesc *pFVar1;
  TRawPtrProxy<FPCGDataCollectionDesc> local_res8 [4];
  
  pFVar1 = ::operator_new(0x10);
  local_res8[0].Object = (FPCGDataCollectionDesc *)0x0;
  if (pFVar1 != (FPCGDataCollectionDesc *)0x0) {
    (pFVar1->DataDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->DataDescs).ArrayNum = 0;
    (pFVar1->DataDescs).ArrayMax = 0;
    local_res8[0].Object = pFVar1;
  }
  TSharedPtr<FPCGDataCollectionDesc,1>::TSharedPtr<FPCGDataCollectionDesc,1><FPCGDataCollectionDesc>
            (__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// MakeSharedFrom @ 1498214f0

TSharedPtr<FPCGDataCollectionDesc,1> * __cdecl
FPCGDataCollectionDesc::MakeSharedFrom
          (TSharedPtr<FPCGDataCollectionDesc,1> *__return_storage_ptr__,
          TSharedPtr<FPCGDataCollectionDesc_const_,1> *param_1)

{
  int iVar1;
  FPCGDataCollectionDesc *pFVar2;
  FPCGDataCollectionDesc *pFVar3;
  FPCGDataDesc *pFVar4;
  code *pcVar5;
  int *piVar6;
  bool bVar7;
  TSharedPtr<FPCGDataCollectionDesc,1> *pTVar8;
  bool bVar9;
  TRawPtrProxy<FPCGDataCollectionDesc> local_res8;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId649,"FPCGDataCollectionDesc::MakeSharedFrom",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataDescription.cpp"
               ,0x289);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId649);
  }
  local_res8.Object = ::operator_new(0x10);
  if (local_res8.Object != (FPCGDataCollectionDesc *)0x0) {
    ((local_res8.Object)->DataDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ((local_res8.Object)->DataDescs).ArrayNum = 0;
    ((local_res8.Object)->DataDescs).ArrayMax = 0;
  }
  TSharedPtr<FPCGDataCollectionDesc,1>::TSharedPtr<FPCGDataCollectionDesc,1><FPCGDataCollectionDesc>
            (__return_storage_ptr__,&local_res8);
  pFVar2 = param_1->Object;
  if (pFVar2 != (FPCGDataCollectionDesc *)0x0) {
    if ((__return_storage_ptr__->Object == (FPCGDataCollectionDesc *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FPCGDataCollectionDesc,1> *)(*pcVar5)();
      return pTVar8;
    }
    pFVar3 = __return_storage_ptr__->Object;
    if (pFVar3 != pFVar2) {
      DestructItems<FPCGDataDesc,int>
                ((FPCGDataDesc *)(pFVar3->DataDescs).AllocatorInstance.Data,
                 (pFVar3->DataDescs).ArrayNum);
      iVar1 = (pFVar2->DataDescs).ArrayNum;
      piVar6 = &(pFVar3->DataDescs).ArrayMax;
      pFVar4 = (FPCGDataDesc *)(pFVar2->DataDescs).AllocatorInstance.Data;
      (pFVar3->DataDescs).ArrayNum = iVar1;
      if ((iVar1 == 0) && (*piVar6 == 0)) {
        *piVar6 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,iVar1,*piVar6,(ForAnyElementType *)pFVar3,iVar1,piVar6);
        ConstructItems<FPCGDataDesc,FPCGDataDesc,int>
                  ((pFVar3->DataDescs).AllocatorInstance.Data,pFVar4,iVar1);
      }
    }
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

