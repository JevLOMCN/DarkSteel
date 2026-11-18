// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147eea400

UClass * __cdecl UMaterialExpressionLayerStack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLayerStack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionLayerStack",
               &Z_Registration_Info_UClass_UMaterialExpressionLayerStack.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLayerStack,0x300,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLayerStack>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLayerStack>,local_res8,
               UMaterialExpressionMaterialAttributeLayers::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLayerStack.InnerSingleton;
}

// UMaterialExpressionLayerStack @ 147ef19a0

UMaterialExpressionLayerStack * __thiscall
UMaterialExpressionLayerStack::UMaterialExpressionLayerStack
          (UMaterialExpressionLayerStack *this,FVTableHelper *param_1)

{
  UMaterialExpressionMaterialAttributeLayers::UMaterialExpressionMaterialAttributeLayers
            ((UMaterialExpressionMaterialAttributeLayers *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionLayerStack__6B_;
  (this->LayerInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayerInputs).ArrayNum = 0;
  (this->LayerInputs).ArrayMax = 0;
  *(undefined8 *)&(this->AvailableLayers).Elements = 0;
  *(undefined8 *)&(this->AvailableLayers).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AvailableLayers).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AvailableLayers).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AvailableLayers).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AvailableLayers).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->AvailableLayers).Elements.field_0x30 = 0xffffffff;
  (this->AvailableLayers).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AvailableLayers).HashSize = 0;
  *(undefined8 *)&(this->AvailableBlends).Elements = 0;
  *(undefined8 *)&(this->AvailableBlends).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AvailableBlends).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AvailableBlends).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AvailableBlends).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AvailableBlends).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->AvailableBlends).Elements.field_0x30 = 0xffffffff;
  (this->AvailableBlends).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AvailableBlends).HashSize = 0;
  (this->SharedCache).Object = (FMaterialLayerStackFunctionsCache *)0x0;
  (this->SharedCache).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bAreAvailableLayersValid = false;
  return this;
}

// UMaterialExpressionLayerStack @ 147ef1a70

UMaterialExpressionLayerStack * __thiscall
UMaterialExpressionLayerStack::UMaterialExpressionLayerStack
          (UMaterialExpressionLayerStack *this,FObjectInitializer *param_1)

{
  UMaterialExpressionMaterialAttributeLayers::UMaterialExpressionMaterialAttributeLayers
            ((UMaterialExpressionMaterialAttributeLayers *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionLayerStack__6B_;
  (this->LayerInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayerInputs).ArrayNum = 0;
  (this->LayerInputs).ArrayMax = 0;
  *(undefined8 *)&(this->AvailableLayers).Elements = 0;
  *(undefined8 *)&(this->AvailableLayers).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AvailableLayers).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AvailableLayers).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AvailableLayers).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AvailableLayers).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->AvailableLayers).Elements.field_0x30 = 0xffffffff;
  (this->AvailableLayers).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AvailableLayers).HashSize = 0;
  *(undefined8 *)&(this->AvailableBlends).Elements = 0;
  *(undefined8 *)&(this->AvailableBlends).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AvailableBlends).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AvailableBlends).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AvailableBlends).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AvailableBlends).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->AvailableBlends).Elements.field_0x30 = 0xffffffff;
  (this->AvailableBlends).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AvailableBlends).HashSize = 0;
  (this->SharedCache).Object = (FMaterialLayerStackFunctionsCache *)0x0;
  (this->SharedCache).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bAreAvailableLayersValid = false;
  return this;
}

// ~UMaterialExpressionLayerStack @ 147ef2850

void __thiscall
UMaterialExpressionLayerStack::~UMaterialExpressionLayerStack(UMaterialExpressionLayerStack *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionLayerStack__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedCache).SharedReferenceCount.ReferenceController);
  (this->AvailableBlends).HashSize = 0;
  FVar1 = (this->AvailableBlends).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UMaterialFunctionInterface>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UMaterialFunctionInterface>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AvailableBlends).Elements);
  (this->AvailableLayers).HashSize = 0;
  FVar1 = (this->AvailableLayers).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UMaterialFunctionInterface>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UMaterialFunctionInterface>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AvailableLayers).Elements);
  pFVar2 = (this->LayerInputs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UMaterialExpressionMaterialAttributeLayers::~UMaterialExpressionMaterialAttributeLayers
            ((UMaterialExpressionMaterialAttributeLayers *)this);
  return;
}

// GetPathsFromAvailableFunctions @ 147efcf80

TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> * __cdecl
UMaterialExpressionLayerStack::GetPathsFromAvailableFunctions
          (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TSet<TObjectPtr<UMaterialFunctionInterface>,DefaultKeyFuncs<TObjectPtr<UMaterialFunctionInterface>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  TSet<TObjectPtr<UMaterialFunctionInterface>,DefaultKeyFuncs<TObjectPtr<UMaterialFunctionInterface>,0>,FDefaultSetAllocator>
  *pTVar6;
  bool bVar7;
  int iVar8;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTVar9;
  UObject *pUVar10;
  FString *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  ForAnyElementType this;
  uint uVar15;
  uint uVar16;
  FSoftObjectPath *pFVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  ForAnyElementType local_138;
  undefined8 local_130;
  FSoftObjectPath local_128;
  FSoftObjectPath local_108;
  TSet<TObjectPtr<UMaterialFunctionInterface>,DefaultKeyFuncs<TObjectPtr<UMaterialFunctionInterface>,0>,FDefaultSetAllocator>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TSet<TObjectPtr<UMaterialFunctionInterface>,DefaultKeyFuncs<TObjectPtr<UMaterialFunctionInterface>,0>,FDefaultSetAllocator>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  TStringView<wchar_t> local_68;
  FString local_58;
  
  puVar1 = &(param_1->Elements).field_0x10;
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130 = 0;
  iStack_e0 = 0;
  iVar8 = *(int *)&(param_1->Elements).field_0x28;
  uStack_dc = 1;
  local_c8 = 0;
  iStack_cc = iStack_e0;
  if (iVar8 != 0) {
    puVar19 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar16 = *puVar19;
    local_c8 = 0;
    iStack_e0 = 0;
    while (uVar16 == 0) {
      lVar12 = (longlong)iStack_e0;
      local_c8 = local_c8 + 0x20;
      iStack_e0 = iStack_e0 + 1;
      iStack_cc = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) goto LAB_147efd030;
      uVar16 = puVar19[lVar12 + 1];
    }
    uStack_dc = -uVar16 & uVar16;
    uVar2 = (ulonglong)uStack_dc * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    iStack_cc = local_c8 + -1 + local_res18;
    if (iVar8 < iStack_cc) {
      iStack_cc = iVar8;
    }
  }
LAB_147efd030:
  uVar16 = *(uint *)&(param_1->Elements).field_0x28;
  uVar15 = uVar16 & 0xffffffe0;
  iStack_c0 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_d0 = 0xffffffff;
  TStack_b0._padding_ = CONCAT44(uStack_dc,iStack_e0);
  TStack_b0.CurrentBitIndex = iStack_cc;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar16 >> 5;
  TStack_b0._28_4_ = iStack_cc;
  TStack_b0.BaseBitIndex = local_c8;
  uStack_90 = CONCAT44(uStack_bc,iStack_c0);
  local_e8 = param_1;
  local_d8 = puVar1;
  iStack_c4 = iStack_cc;
  local_b8 = param_1;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar8 < (int)uVar16)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar9;
  }
  uVar3 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar16 != uVar3) {
    puVar18 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_147efd140;
      uVar16 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    uVar16 = local_res20 + -1 + uVar15;
    if ((int)uVar3 < (int)uVar16) {
      uVar16 = uVar3;
    }
  }
LAB_147efd140:
  do {
    pTVar6 = local_b8;
    if (*(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34 !=
        (int)uStack_90) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UMaterialFunctionInterface>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    FVar5.Data = local_138.Data;
    if (((TStack_b0.CurrentBitIndex == uVar16) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    {
      local_138.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->AllocatorInstance).Data = FVar5.Data;
      __return_storage_ptr__->ArrayNum = (int)local_130;
      __return_storage_ptr__->ArrayMax = local_130._4_4_;
      local_130 = 0;
      DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)0x0,0);
      if (local_138.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data);
      }
      return __return_storage_ptr__;
    }
    pUVar10 = *(UObject **)
               (*(longlong *)&pTVar6->Elements + (longlong)TStack_b0.CurrentBitIndex * 0x10);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar10 != (UObject *)0x0) goto LAB_147efd1a9;
    }
    else if (pUVar10 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar10);
LAB_147efd1a9:
      local_78 = 0;
      uStack_70 = 0;
      pUVar10 = (UObject *)(**(code **)(*(longlong *)pUVar10 + 0x2c8))(pUVar10);
      if (pUVar10 != (UObject *)0x0) {
        local_108.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_108.AssetPath.PackageName.Number = 0;
        local_108.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_108.AssetPath.AssetName.Number = 0;
        local_108.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.SubPathString.Data.ArrayNum = 0;
        local_108.SubPathString.Data.ArrayMax = 0;
        FSoftObjectPath::SetPath(&local_108,pUVar10);
        pFVar11 = FSoftObjectPath::ToString(&local_108,&local_58);
        local_128.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_128.AssetPath.PackageName.Number = 0;
        local_128.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_128.AssetPath.AssetName.Number = 0;
        local_128.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.SubPathString.Data.ArrayNum = 0;
        local_128.SubPathString.Data.ArrayMax = 0;
        local_88 = (pFVar11->Data).AllocatorInstance.Data;
        iVar8 = (pFVar11->Data).ArrayNum;
        iStack_80 = iVar8 + -1;
        if (iVar8 == 0) {
          iStack_80 = 0;
        }
        local_68._12_4_ = uStack_7c;
        local_68.Size = iStack_80;
        local_68.DataPtr = (wchar_t *)local_88;
        FSoftObjectPath::SetPath(&local_128,&local_68);
        FVar5.Data = local_138.Data;
        pFVar17 = (FSoftObjectPath *)(local_138.Data + (longlong)(int)local_130 * 0x20);
        this.Data = local_138.Data;
        if ((FSoftObjectPath *)local_138.Data != pFVar17) {
          do {
            bVar7 = FSoftObjectPath::operator==((FSoftObjectPath *)this.Data,&local_128);
            if (bVar7) {
              if ((int)((longlong)this.Data - (longlong)FVar5.Data >> 5) != -1) goto LAB_147efd353;
              break;
            }
            this.Data = this.Data + 0x20;
          } while ((FSoftObjectPath *)this.Data != pFVar17);
        }
        iVar8 = (int)local_130;
        if ((local_138.Data <= &local_128) &&
           (&local_128 < (FSoftObjectPath *)(local_138.Data + (longlong)local_130._4_4_ * 0x20))) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar9;
          }
          iVar8 = (int)local_130;
        }
        if (iVar8 == local_130._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&local_138,(int *)((longlong)&local_130 + 4));
        }
        local_130 = CONCAT44(local_130._4_4_,iVar8 + 1);
        pFVar13 = local_138.Data + (longlong)iVar8 * 0x20;
        *(FName *)&pFVar13->field_0x0 = local_128.AssetPath.PackageName;
        *(FName *)(pFVar13 + 8) = local_128.AssetPath.AssetName;
        *(undefined8 *)(pFVar13 + 0x10) = 0;
        *(FScriptContainerElement **)(pFVar13 + 0x10) =
             local_128.SubPathString.Data.AllocatorInstance.Data;
        local_128.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar13 + 0x18) = local_128.SubPathString.Data.ArrayNum;
        *(int *)(pFVar13 + 0x1c) = local_128.SubPathString.Data.ArrayMax;
        local_128.SubPathString.Data.ArrayNum = 0;
        local_128.SubPathString.Data.ArrayMax = 0;
LAB_147efd353:
        if (local_128.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.SubPathString.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_108.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.SubPathString.Data.AllocatorInstance.Data);
        }
      }
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  } while( true );
}

// GetPrivateStaticClass @ 147efd920

UClass * __cdecl UMaterialExpressionLayerStack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLayerStack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionLayerStack",
               &Z_Registration_Info_UClass_UMaterialExpressionLayerStack.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLayerStack,0x300,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLayerStack>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLayerStack>,local_res8,
               UMaterialExpressionMaterialAttributeLayers::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLayerStack.InnerSingleton;
}

// PostLoad @ 147f055b0

void __thiscall UMaterialExpressionLayerStack::PostLoad(UMaterialExpressionLayerStack *this)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStackX_8 [8];
  
  UMaterialExpression::PostLoad((UMaterialExpression *)this);
  puVar3 = (undefined8 *)this->_padding_;
  iVar2 = (int)this->_padding_;
  puVar1 = puVar3 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMaterialFunctionInterface>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (puVar3 == puVar1) break;
    if ((UObject *)*puVar3 != (UObject *)0x0) {
      UObject::ConditionalPostLoad((UObject *)*puVar3);
    }
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined8 *)this->_padding_;
  iVar2 = (int)this->_padding_;
  puVar1 = puVar3 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMaterialFunctionInterface>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (puVar3 == puVar1) break;
    if ((UObject *)*puVar3 != (UObject *)0x0) {
      UObject::ConditionalPostLoad((UObject *)*puVar3);
    }
    puVar3 = puVar3 + 1;
  }
  return;
}

// PreSave @ 147f05780

void __thiscall
UMaterialExpressionLayerStack::PreSave
          (UMaterialExpressionLayerStack *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// StaticRegisterNativesUMaterialExpressionLayerStack @ 147f08560

void __cdecl UMaterialExpressionLayerStack::StaticRegisterNativesUMaterialExpressionLayerStack(void)

{
  return;
}

