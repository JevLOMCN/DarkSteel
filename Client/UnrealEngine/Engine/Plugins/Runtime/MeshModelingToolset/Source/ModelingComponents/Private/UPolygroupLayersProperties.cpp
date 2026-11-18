// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 12

// StaticClass @ 14caae990

UClass * __cdecl UPolygroupLayersProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolygroupLayersProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"PolygroupLayersProperties",
               &Z_Registration_Info_UClass_UPolygroupLayersProperties.InnerSingleton,
               StaticRegisterNativesUPolygroupLayersProperties,200,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UPolygroupLayersProperties>,
               InternalVTableHelperCtorCaller<UPolygroupLayersProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolygroupLayersProperties.InnerSingleton;
}

// UPolygroupLayersProperties @ 14cacec50

UPolygroupLayersProperties * __thiscall
UPolygroupLayersProperties::UPolygroupLayersProperties
          (UPolygroupLayersProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UPolygroupLayersProperties__6B_;
  ::FName::FName(&this->ActiveGroupLayer,"Default");
  (this->GroupLayersList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupLayersList).ArrayNum = 0;
  (this->GroupLayersList).ArrayMax = 0;
  return this;
}

// UPolygroupLayersProperties @ 14caceca0

UPolygroupLayersProperties * __thiscall
UPolygroupLayersProperties::UPolygroupLayersProperties
          (UPolygroupLayersProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UPolygroupLayersProperties__6B_;
  ::FName::FName(&this->ActiveGroupLayer,"Default");
  (this->GroupLayersList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupLayersList).ArrayNum = 0;
  (this->GroupLayersList).ArrayMax = 0;
  return this;
}

// ~UPolygroupLayersProperties @ 14cad2880

void __thiscall
UPolygroupLayersProperties::~UPolygroupLayersProperties(UPolygroupLayersProperties *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPolygroupLayersProperties__6B_;
  DestructItems<FString,int>
            ((FString *)(this->GroupLayersList).AllocatorInstance.Data,
             (this->GroupLayersList).ArrayNum);
  pFVar1 = (this->GroupLayersList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cb12ca0

UClass * __cdecl UPolygroupLayersProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolygroupLayersProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"PolygroupLayersProperties",
               &Z_Registration_Info_UClass_UPolygroupLayersProperties.InnerSingleton,
               StaticRegisterNativesUPolygroupLayersProperties,200,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UPolygroupLayersProperties>,
               InternalVTableHelperCtorCaller<UPolygroupLayersProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolygroupLayersProperties.InnerSingleton;
}

// GetSelectedLayer @ 14cb13820

FPolygroupLayer __thiscall
UPolygroupLayersProperties::GetSelectedLayer
          (UPolygroupLayersProperties *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FPolygroupLayer FVar5;
  FName *pFVar6;
  int iVar7;
  FDynamicMesh3 *in_R8;
  FName local_res8;
  
  if ((this->GroupLayersList).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar5 = (FPolygroupLayer)(*pcVar3)();
      return FVar5;
    }
  }
  pFVar2 = (this->GroupLayersList).AllocatorInstance.Data;
  iVar1 = *(int *)(pFVar2 + 8);
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  pFVar6 = ::FName::FName(&local_res8,iVar7,*(wchar_t **)pFVar2,FNAME_Add);
  if (this->ActiveGroupLayer != *pFVar6) {
    local_res8.Number = UE::Geometry::FindPolygroupLayerIndexByName(in_R8,this->ActiveGroupLayer);
    if (-1 < (int)local_res8.Number) {
      local_res8.ComparisonIndex.Value = local_res8.ComparisonIndex.Value & 0xffffff00;
      goto LAB_14cb138d6;
    }
  }
  local_res8.ComparisonIndex.Value._0_1_ = 1;
  local_res8.Number = 0xffffffff;
LAB_14cb138d6:
  param_1->_padding_ = CONCAT44(local_res8.Number,local_res8.ComparisonIndex.Value);
  return (FPolygroupLayer)param_1;
}

// HasSelectedPolygroup @ 14cb1af00

bool __thiscall UPolygroupLayersProperties::HasSelectedPolygroup(UPolygroupLayersProperties *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FName *pFVar6;
  int iVar7;
  FName local_res8;
  
  if ((this->GroupLayersList).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar2 = (this->GroupLayersList).AllocatorInstance.Data;
  iVar1 = *(int *)(pFVar2 + 8);
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  pFVar6 = ::FName::FName(&local_res8,iVar7,*(wchar_t **)pFVar2,FNAME_Add);
  return this->ActiveGroupLayer != *pFVar6;
}

// InitializeGroupLayers @ 14cb1f410

/* WARNING: Removing unreachable block (ram,0x00014cb1f55f) */

void __thiscall
UPolygroupLayersProperties::InitializeGroupLayers
          (UPolygroupLayersProperties *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FString *pFVar10;
  FName *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  undefined1 local_res18 [8];
  int local_res20;
  FString local_110;
  int local_100;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_f8;
  int iStack_f0;
  uint uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FName local_98;
  FString local_90;
  FString local_80 [2];
  undefined4 local_54;
  
  this_00 = &this->GroupLayersList;
  piVar1 = &(this->GroupLayersList).ArrayMax;
  pFVar13 = (this_00->AllocatorInstance).Data;
  iVar8 = (this->GroupLayersList).ArrayNum;
  if ((this->GroupLayersList).ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar13,iVar8);
    (this->GroupLayersList).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&this_00->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar13,iVar8);
    (this->GroupLayersList).ArrayNum = 0;
  }
  ::FString::FString(&local_110,L"Default");
  pFVar13 = (this_00->AllocatorInstance).Data;
  if (((pFVar13 <= (FScriptContainerElement *)&local_110) &&
      ((FScriptContainerElement *)&local_110 < pFVar13 + (longlong)*piVar1 * 0x10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (this->GroupLayersList).ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this_00->AllocatorInstance,piVar1);
  }
  (this->GroupLayersList).ArrayNum = iVar8 + 1;
  pFVar13 = (this_00->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
  *(undefined8 *)pFVar13 = 0;
  *(FScriptContainerElement **)pFVar13 = local_110.Data.AllocatorInstance.Data;
  *(int *)(pFVar13 + 8) = local_110.Data.ArrayNum;
  *(int *)(pFVar13 + 0xc) = local_110.Data.ArrayMax;
  local_110.Data.ArrayNum = 0;
  local_110.Data.ArrayMax = 0;
  local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar8 = *(int *)&(param_1->Elements).field_0x28;
  puVar2 = &(param_1->Elements).field_0x10;
  iVar15 = 0;
  uStack_ec = 1;
  iStack_dc = iVar15;
  iStack_f0 = iVar15;
  local_d8 = iVar15;
  if (iVar8 != 0) {
    puVar17 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar19 = *puVar17;
    local_d8 = 0;
    iStack_f0 = 0;
    while (uVar19 == 0) {
      lVar12 = (longlong)iStack_f0;
      local_d8 = local_d8 + 0x20;
      iStack_f0 = iStack_f0 + 1;
      iStack_dc = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0) goto LAB_14cb1f5f7;
      uVar19 = puVar17[lVar12 + 1];
    }
    uStack_ec = -uVar19 & uVar19;
    uVar3 = (ulonglong)uStack_ec * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    iStack_dc = local_d8 + -1 + local_res20;
    if (iVar8 < iStack_dc) {
      iStack_dc = iVar8;
    }
  }
LAB_14cb1f5f7:
  uStack_d4 = local_54;
  iStack_d0 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar19 = *(uint *)&(param_1->Elements).field_0x28;
  uStack_e0 = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uStack_ec,iStack_f0);
  uVar18 = uVar19 & 0xffffffe0;
  TStack_c0.CurrentBitIndex = iStack_dc;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar19 >> 5;
  TStack_c0._28_4_ = local_54;
  TStack_c0.BaseBitIndex = local_d8;
  uStack_a0 = CONCAT44(uStack_cc,iStack_d0);
  local_f8 = param_1;
  local_e8 = puVar2;
  local_c8 = param_1;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar19 < 0) || (iVar8 < (int)uVar19)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar19 != uVar4) {
    puVar16 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar2;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
    while (uVar19 == 0) {
      lVar12 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar19 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14cb1f710;
      uVar19 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_100 = (int)lVar12;
    uVar19 = local_100 + -1 + uVar18;
    if ((int)uVar4 < (int)uVar19) {
      uVar19 = uVar4;
    }
  }
LAB_14cb1f710:
  while( true ) {
    pTVar6 = local_c8;
    if (*(int *)&(local_c8->Elements).field_0x8 - *(int *)&(local_c8->Elements).field_0x34 !=
        (int)uStack_a0) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_c0.CurrentBitIndex == uVar19) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar6 == param_1))
    break;
    pFVar9 = (FScriptContainerElement *)
             ::FName::ToString((FName *)((longlong)TStack_c0.CurrentBitIndex * 0x10 +
                                        *(longlong *)&pTVar6->Elements),&local_90);
    pFVar13 = (this_00->AllocatorInstance).Data;
    if (((pFVar13 <= pFVar9) && (pFVar9 < pFVar13 + (longlong)*piVar1 * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (this->GroupLayersList).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&this_00->AllocatorInstance,piVar1);
    }
    (this->GroupLayersList).ArrayNum = iVar8 + 1;
    pFVar13 = (this_00->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar13 = 0;
    *(FScriptContainerElement **)pFVar13 =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar9->field_0x0)->AllocatorInstance).
         Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar9->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(int *)(pFVar13 + 8) = *(int *)&pFVar9[8].field_0x0;
    *(int *)(pFVar13 + 0xc) = *(int *)&pFVar9[0xc].field_0x0;
    *(undefined8 *)&pFVar9[8].field_0x0 = 0;
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  pFVar10 = ::FName::ToString(&this->ActiveGroupLayer,local_80);
  bVar7 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>(this_00,pFVar10);
  if (local_80[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80[0].Data.AllocatorInstance.Data);
  }
  if (!bVar7) {
    if (((this->GroupLayersList).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar13 = (this_00->AllocatorInstance).Data;
    iVar8 = *(int *)(pFVar13 + 8);
    iVar14 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar14 = iVar15;
    }
    pFVar11 = ::FName::FName(&local_98,iVar14,*(wchar_t **)pFVar13,FNAME_Add);
    this->ActiveGroupLayer = *pFVar11;
  }
  return;
}

// InitializeGroupLayers @ 14cb1f8f0

/* WARNING: Removing unreachable block (ram,0x00014cb1fa3a) */

void __thiscall
UPolygroupLayersProperties::InitializeGroupLayers
          (UPolygroupLayersProperties *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar5;
  FScriptContainerElement *pFVar6;
  FString *pFVar7;
  FName *pFVar8;
  FDynamicMeshAttributeSet *this_01;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FDynamicMeshAttributeSet *pFVar11;
  FName local_res8;
  FName local_res10;
  FString local_58;
  FString local_48;
  FString local_38;
  
  this_00 = &this->GroupLayersList;
  piVar1 = &(this->GroupLayersList).ArrayMax;
  pFVar9 = (this_00->AllocatorInstance).Data;
  iVar4 = (this->GroupLayersList).ArrayNum;
  if ((this->GroupLayersList).ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar9,iVar4);
    (this->GroupLayersList).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&this_00->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar9,iVar4);
    (this->GroupLayersList).ArrayNum = 0;
  }
  ::FString::FString(&local_58,L"Default");
  pFVar9 = (this_00->AllocatorInstance).Data;
  if (((pFVar9 <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 < pFVar9 + (longlong)*piVar1 * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (this->GroupLayersList).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this_00->AllocatorInstance,piVar1);
  }
  (this->GroupLayersList).ArrayNum = iVar4 + 1;
  pFVar9 = (this_00->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar9 = 0;
  *(FScriptContainerElement **)pFVar9 = local_58.Data.AllocatorInstance.Data;
  *(int *)(pFVar9 + 8) = local_58.Data.ArrayNum;
  *(int *)(pFVar9 + 0xc) = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar11 = (FDynamicMeshAttributeSet *)0x0;
  if ((param_1->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
    while( true ) {
      iVar4 = (**(code **)(((param_1->AttributeSet).Ptr)->_padding_ + 200))();
      iVar10 = (int)pFVar11;
      if (iVar4 <= iVar10) break;
      pFVar11 = (param_1->AttributeSet).Ptr;
      this_01 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar11 != (FDynamicMeshAttributeSet *)0x0) {
        this_01 = pFVar11;
      }
      pTVar5 = UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer(this_01,iVar10);
      local_res8.ComparisonIndex.Value = *(uint *)&pTVar5->field_0x8;
      local_res8.Number = *(uint *)&pTVar5->field_0xc;
      pFVar6 = (FScriptContainerElement *)::FName::ToString(&local_res8,&local_48);
      pFVar9 = (this_00->AllocatorInstance).Data;
      if (((pFVar9 <= pFVar6) && (pFVar6 < pFVar9 + (longlong)*piVar1 * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = (this->GroupLayersList).ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&this_00->AllocatorInstance,piVar1);
      }
      (this->GroupLayersList).ArrayNum = iVar4 + 1;
      pFVar9 = (this_00->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
      *(undefined8 *)pFVar9 = 0;
      *(FScriptContainerElement **)pFVar9 =
           (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x0)->AllocatorInstance).
           Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x0)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)(pFVar9 + 8) = *(int *)&pFVar6[8].field_0x0;
      *(int *)(pFVar9 + 0xc) = *(int *)&pFVar6[0xc].field_0x0;
      *(undefined8 *)&pFVar6[8].field_0x0 = 0;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      pFVar11 = (FDynamicMeshAttributeSet *)(ulonglong)(iVar10 + 1);
    }
  }
  pFVar7 = ::FName::ToString(&this->ActiveGroupLayer,&local_38);
  bVar3 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>(this_00,pFVar7);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    if (((this->GroupLayersList).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar9 = (this_00->AllocatorInstance).Data;
    iVar10 = *(int *)(pFVar9 + 8);
    iVar4 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar4 = 0;
    }
    pFVar8 = ::FName::FName(&local_res10,iVar4,*(wchar_t **)pFVar9,FNAME_Add);
    this->ActiveGroupLayer = *pFVar8;
  }
  return;
}

// SetSelectedFromPolygroupIndex @ 14cb37770

void __thiscall
UPolygroupLayersProperties::SetSelectedFromPolygroupIndex
          (UPolygroupLayersProperties *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FName local_res18;
  FName local_res20;
  
  iVar7 = (this->GroupLayersList).ArrayNum;
  if (-1 < param_1) {
    uVar8 = param_1 + 1;
    uVar6 = 0;
    if ((int)uVar8 < iVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->GroupLayersList).AllocatorInstance.Data;
    iVar1 = *(int *)(pFVar2 + (longlong)(int)uVar8 * 0x10 + 8);
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    pFVar5 = ::FName::FName(&local_res20,iVar7,*(wchar_t **)(pFVar2 + (longlong)(int)uVar8 * 0x10),
                            FNAME_Add);
    this->ActiveGroupLayer = *pFVar5;
    return;
  }
  if (iVar7 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->GroupLayersList).AllocatorInstance.Data;
  iVar7 = *(int *)(pFVar2 + 8);
  uVar6 = iVar7 - 1;
  if (iVar7 == 0) {
    uVar6 = 0;
  }
  pFVar5 = ::FName::FName(&local_res18,uVar6,*(wchar_t **)pFVar2,FNAME_Add);
  this->ActiveGroupLayer = *pFVar5;
  return;
}

// StaticRegisterNativesUPolygroupLayersProperties @ 14cb3ebf0

void __cdecl UPolygroupLayersProperties::StaticRegisterNativesUPolygroupLayersProperties(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UPolygroupLayersProperties_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetGroupLayersFunc @ 14cb50d70

void __cdecl
UPolygroupLayersProperties::execGetGroupLayersFunc(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  int iVar2;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)&param_1[4].field_0x20;
  pFVar1 = *(FString **)&param_1[4].field_0x18;
  local_10 = CONCAT44(local_10._4_4_,iVar2);
  if (iVar2 == 0) {
    local_10 = 0;
    local_10._0_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,&local_18,iVar2,(int *)((longlong)&local_10 + 4));
    ConstructItems<FString,FString,int>(local_18.Data,pFVar1,iVar2);
  }
  iVar2 = (int)local_10;
  if (param_3 != &local_18) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    iVar2 = 0;
    *(int *)((longlong)param_3 + 8) = (int)local_10;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FString,int>((FString *)local_18.Data,iVar2);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

