// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonInput
// Functions: 15

// StaticClass @ 14a76ed70

UClass * __cdecl UCommonInputBaseControllerData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonInputBaseControllerData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonInput",L"CommonInputBaseControllerData",
               &Z_Registration_Info_UClass_UCommonInputBaseControllerData.InnerSingleton,
               StaticRegisterNativesUCommonInputBaseControllerData,0xe8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCommonInputBaseControllerData>,
               InternalVTableHelperCtorCaller<UCommonInputBaseControllerData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonInputBaseControllerData.InnerSingleton;
}

// UCommonInputBaseControllerData @ 14a771a40

UCommonInputBaseControllerData * __thiscall
UCommonInputBaseControllerData::UCommonInputBaseControllerData
          (UCommonInputBaseControllerData *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCommonInputBaseControllerData__6B_;
  (this->GamepadName).ComparisonIndex = 0;
  (this->GamepadName).Number = 0;
  FText::FText(&this->GamepadDisplayName);
  FText::FText(&this->GamepadCategory);
  FText::FText(&this->GamepadPlatformName);
  puVar1 = &(this->ControllerTexture).SoftObjectPtr.field_0x18;
  (this->GamepadHardwareIdMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->ControllerTexture).SoftObjectPtr.field_0x20 = 0;
  (this->GamepadHardwareIdMapping).ArrayNum = 0;
  (this->GamepadHardwareIdMapping).ArrayMax = 0;
  *(undefined8 *)&(this->ControllerTexture).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ControllerTexture).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ControllerTexture).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->ControllerButtonMaskTexture).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->ControllerButtonMaskTexture).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->ControllerButtonMaskTexture).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ControllerButtonMaskTexture).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ControllerButtonMaskTexture).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->InputBrushDataMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputBrushDataMap).ArrayNum = 0;
  (this->InputBrushDataMap).ArrayMax = 0;
  (this->InputBrushKeySets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputBrushKeySets).ArrayNum = 0;
  (this->InputBrushKeySets).ArrayMax = 0;
  return this;
}

// UCommonInputBaseControllerData @ 14a771b10

UCommonInputBaseControllerData * __thiscall
UCommonInputBaseControllerData::UCommonInputBaseControllerData
          (UCommonInputBaseControllerData *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCommonInputBaseControllerData__6B_;
  (this->GamepadName).ComparisonIndex = 0;
  (this->GamepadName).Number = 0;
  FText::FText(&this->GamepadDisplayName);
  FText::FText(&this->GamepadCategory);
  FText::FText(&this->GamepadPlatformName);
  puVar1 = &(this->ControllerTexture).SoftObjectPtr.field_0x18;
  (this->GamepadHardwareIdMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->ControllerTexture).SoftObjectPtr.field_0x20 = 0;
  (this->GamepadHardwareIdMapping).ArrayNum = 0;
  (this->GamepadHardwareIdMapping).ArrayMax = 0;
  *(undefined8 *)&(this->ControllerTexture).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ControllerTexture).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ControllerTexture).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->ControllerButtonMaskTexture).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->ControllerButtonMaskTexture).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->ControllerButtonMaskTexture).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ControllerButtonMaskTexture).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ControllerButtonMaskTexture).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->InputBrushDataMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputBrushDataMap).ArrayNum = 0;
  (this->InputBrushDataMap).ArrayMax = 0;
  (this->InputBrushKeySets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputBrushKeySets).ArrayNum = 0;
  (this->InputBrushKeySets).ArrayMax = 0;
  return this;
}

// ~UCommonInputBaseControllerData @ 14a772520

void __thiscall
UCommonInputBaseControllerData::~UCommonInputBaseControllerData
          (UCommonInputBaseControllerData *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ITextData *pIVar3;
  
  this->_padding_ = (longlong)&___7UCommonInputBaseControllerData__6B_;
  DestructItems<FCommonInputKeySetBrushConfiguration,int>
            ((FCommonInputKeySetBrushConfiguration *)
             (this->InputBrushKeySets).AllocatorInstance.Data,(this->InputBrushKeySets).ArrayNum);
  pFVar1 = (this->InputBrushKeySets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCommonInputKeyBrushConfiguration,int>
            ((FCommonInputKeyBrushConfiguration *)(this->InputBrushDataMap).AllocatorInstance.Data,
             (this->InputBrushDataMap).ArrayNum);
  pFVar1 = (this->InputBrushDataMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->ControllerButtonMaskTexture).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->ControllerTexture).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DestructItems<FInputDeviceIdentifierPair,int>
            ((FInputDeviceIdentifierPair *)(this->GamepadHardwareIdMapping).AllocatorInstance.Data,
             (this->GamepadHardwareIdMapping).ArrayNum);
  pFVar1 = (this->GamepadHardwareIdMapping).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar3 = (this->GamepadPlatformName).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar3 = (this->GamepadCategory).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar3 = (this->GamepadDisplayName).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14a772820

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
`UCommonInputBaseControllerData::GetRegisteredGamepads'::__l2::<lambda_1>::operator()
          (void *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
  *pTVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined8 local_a8;
  TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
  *local_a0;
  TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar8 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x408,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar8 + 1;
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
       FCommonInputDefaults::GamepadGeneric;
  pTVar9 = FDataDrivenPlatformInfoRegistry::GetAllPlatformInfos();
  iVar8 = *(int *)&pTVar9->field_0x28;
  uStack_8c = 1;
  iStack_90 = 0;
  local_78 = 0;
  puVar1 = &pTVar9->field_0x10;
  iStack_7c = iStack_90;
  if (iVar8 != 0) {
    puVar16 = *(uint **)&pTVar9->field_0x20;
    if (*(uint **)&pTVar9->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar13 = *puVar16;
    local_78 = 0;
    iStack_90 = 0;
    while (uVar13 == 0) {
      lVar11 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14a7728f0;
      uVar13 = puVar16[lVar11 + 1];
    }
    uStack_8c = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iStack_7c = local_78 + -1 + local_res18;
    if (iVar8 < iStack_7c) {
      iStack_7c = iVar8;
    }
  }
LAB_14a7728f0:
  uVar13 = *(uint *)&pTVar9->field_0x28;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  iStack_70 = *(int *)&pTVar9->field_0x8 - *(int *)&pTVar9->field_0x34;
  uStack_80 = 0xffffffff;
  uVar17 = uVar13 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_a0 = pTVar9;
  local_98 = pTVar9;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = pTVar9;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar8 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar10;
  }
  pTVar6 = local_a0;
  uVar3 = *(uint *)&pTVar9->field_0x28;
  if (uVar13 != uVar3) {
    puVar15 = *(undefined1 **)&pTVar9->field_0x20;
    if (*(undefined1 **)&pTVar9->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar17 = uVar17 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14a772a00;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    uVar13 = local_res20 + -1 + uVar17;
    if ((int)uVar3 < (int)uVar13) {
      uVar13 = uVar3;
    }
  }
LAB_14a772a00:
  while( true ) {
    pTVar9 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FDataDrivenPlatformInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_60.CurrentBitIndex == uVar13) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar6))
    break;
    puVar12 = (undefined8 *)((longlong)TStack_60.CurrentBitIndex * 0xa0 + *(longlong *)pTVar9);
    local_a8 = *puVar12;
    if (((*(char *)((longlong)puVar12 + 0x21) == '\0') && (*(char *)(puVar12 + 0xc) == '\0')) &&
       (*(char *)((longlong)puVar12 + 0x5f) != '\0')) {
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 <
           pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == __return_storage_ptr__->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
           local_a8;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return __return_storage_ptr__;
}

// operator() @ 14a772f00

bool __thiscall
`UCommonInputBaseControllerData::PreSave'::__l5::<lambda_1>::operator()
          (void *this,FCommonInputKeyBrushConfiguration *param_1,
          FCommonInputKeyBrushConfiguration *param_2)

{
  FName *pFVar1;
  FName *pFVar2;
  int iVar3;
  FName *pFVar4;
  longlong lVar5;
  int iVar6;
  
  pFVar2 = (FName *)**(longlong **)this;
  pFVar1 = pFVar2 + (longlong)(int)(*(longlong **)this)[1] * 3;
  if (pFVar2 != pFVar1) {
    pFVar4 = pFVar2;
    do {
      if (*pFVar4 == (param_1->Key).KeyName) {
        lVar5 = ((longlong)pFVar4 - (longlong)pFVar2) / 6 +
                ((longlong)pFVar4 - (longlong)pFVar2 >> 0x3f);
        iVar3 = (int)(lVar5 >> 2) - (int)(lVar5 >> 0x3f);
        goto LAB_14a772f4c;
      }
      pFVar4 = pFVar4 + 3;
    } while (pFVar4 != pFVar1);
  }
  iVar6 = -1;
  iVar3 = -1;
  if (pFVar2 != pFVar1) {
LAB_14a772f4c:
    iVar6 = iVar3;
    pFVar4 = pFVar2;
    do {
      if (*pFVar4 == (param_2->Key).KeyName) {
        return iVar6 < (int)(((longlong)pFVar4 - (longlong)pFVar2) / 0x18);
      }
      pFVar4 = pFVar4 + 3;
    } while (pFVar4 != pFVar1);
  }
  return iVar6 < -1;
}

// GetPrivateStaticClass @ 14a775ce0

UClass * __cdecl UCommonInputBaseControllerData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonInputBaseControllerData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonInput",L"CommonInputBaseControllerData",
               &Z_Registration_Info_UClass_UCommonInputBaseControllerData.InnerSingleton,
               StaticRegisterNativesUCommonInputBaseControllerData,0xe8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCommonInputBaseControllerData>,
               InternalVTableHelperCtorCaller<UCommonInputBaseControllerData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonInputBaseControllerData.InnerSingleton;
}

// GetRegisteredGamepads @ 14a776130

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
UCommonInputBaseControllerData::GetRegisteredGamepads(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `UCommonInputBaseControllerData::GetRegisteredGamepads'::__l2::<lambda_1>::operator()
                (local_res8,&RegisteredGamepads);
      atexit(`UCommonInputBaseControllerData::GetRegisteredGamepads'::__l2::
             _dynamic_atexit_destructor_for__RegisteredGamepads__);
      _Init_thread_footer(&::_TSS0);
      return &RegisteredGamepads;
    }
  }
  return &RegisteredGamepads;
}

// NeedsLoadForServer @ 14a777af0

bool __thiscall
UCommonInputBaseControllerData::NeedsLoadForServer(UCommonInputBaseControllerData *this)

{
  UClass *this_00;
  
  this_00 = Z_Construct_UClass_UUserInterfaceSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
    return (bool)(this_00->ClassDefaultObject).field0_0x0.DebugPtr[0xf].field_0x24;
  }
  return (bool)(this_00->ClassDefaultObject).field0_0x0.DebugPtr[0xf].field_0x24;
}

// PostLoad @ 14a777d90

void __thiscall UCommonInputBaseControllerData::PostLoad(UCommonInputBaseControllerData *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UCommonInputBaseControllerData **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// PreSave @ 14a777e30

void __thiscall
UCommonInputBaseControllerData::PreSave
          (UCommonInputBaseControllerData *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  TArray<FKey,TSizedDefaultAllocator<32>_> *local_res10;
  TArray<FKey,TSizedDefaultAllocator<32>_> local_38;
  
  local_res10 = (TArray<FKey,TSizedDefaultAllocator<32>_> *)
                ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)((longlong)local_res10 + 0x9c) = *(int *)((longlong)local_res10 + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)&local_res10);
  if (((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data[0x41] ==
      (FScriptContainerElement)0x0) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    EKeys::GetAllKeys(&local_38);
    local_res10 = &local_38;
    AlgoImpl::
    IntroSortInternal<FCommonInputKeyBrushConfiguration,int,FIdentityFunctor,TDereferenceWrapper<FCommonInputKeyBrushConfiguration,_UCommonInputBaseControllerData::PreSave_::__l5::<lambda_1>_>_>
              ((FCommonInputKeyBrushConfiguration *)(this->InputBrushDataMap).AllocatorInstance.Data
               ,(this->InputBrushDataMap).ArrayNum,local_res10._0_1_,(<lambda_1> *)&local_res10);
    iVar6 = (this->InputBrushDataMap).ArrayNum;
    lVar2 = (longlong)iVar6;
    if (iVar6 != 0) {
      pFVar1 = (this->InputBrushDataMap).AllocatorInstance.Data;
      iVar8 = 0;
      bVar9 = *(longlong *)(pFVar1 + 0x58) != 0;
      lVar4 = 0;
      iVar6 = 0;
      do {
        lVar4 = lVar4 + 1;
        iVar7 = iVar6 + 1;
        if (lVar4 < lVar2) {
          pFVar3 = pFVar1 + lVar4 * 0xd0 + 0x58;
          do {
            if (bVar9 != (*(longlong *)pFVar3 != 0)) break;
            iVar7 = iVar7 + 1;
            lVar4 = lVar4 + 1;
            pFVar3 = pFVar3 + 0xd0;
          } while (lVar4 < lVar2);
        }
        iVar5 = iVar7 - iVar6;
        if (bVar9 == false) {
          DestructItems<FCommonInputKeyBrushConfiguration,int>
                    ((FCommonInputKeyBrushConfiguration *)(pFVar1 + (longlong)iVar6 * 0xd0),iVar5);
        }
        else {
          if (iVar8 != iVar6) {
            memmove(pFVar1 + (longlong)iVar8 * 0xd0,pFVar1 + (longlong)iVar6 * 0xd0,
                    (longlong)iVar5 * 0xd0);
          }
          iVar8 = iVar8 + iVar5;
        }
        bVar9 = (bool)(bVar9 ^ 1);
        iVar6 = iVar7;
      } while (lVar4 < lVar2);
      (this->InputBrushDataMap).ArrayNum = iVar8;
    }
    DestructItems<FKey,int>((FKey *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
    if ((FKey *)local_38.AllocatorInstance.Data != (FKey *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return;
}

// StaticRegisterNativesUCommonInputBaseControllerData @ 14a7791d0

void __cdecl
UCommonInputBaseControllerData::StaticRegisterNativesUCommonInputBaseControllerData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UCommonInputBaseControllerData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TryGetInputBrush @ 14a779630

bool __thiscall
UCommonInputBaseControllerData::TryGetInputBrush
          (UCommonInputBaseControllerData *this,FSlateBrush *param_1,FKey *param_2)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar2 = (FName *)(this->InputBrushDataMap).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->InputBrushDataMap).ArrayNum * 0x1a;
  if (pFVar2 != pFVar1) {
    do {
      if (*pFVar2 == param_2->KeyName) {
        FSlateBrush::operator=(param_1,(FSlateBrush *)(pFVar2 + 4));
        return true;
      }
      pFVar2 = pFVar2 + 0x1a;
    } while (pFVar2 != pFVar1);
  }
  return false;
}

// TryGetInputBrush @ 14a779690

bool __thiscall
UCommonInputBaseControllerData::TryGetInputBrush
          (UCommonInputBaseControllerData *this,FSlateBrush *param_1,
          TArray<FKey,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FCommonInputKeySetBrushConfiguration *pFVar4;
  FCommonInputKeySetBrushConfiguration *pFVar5;
  TArray<FKey,TSizedDefaultAllocator<32>_> *local_res18 [2];
  
  if (param_2->ArrayNum != 0) {
    if (param_2->ArrayNum != 1) {
      pFVar4 = (FCommonInputKeySetBrushConfiguration *)
               (this->InputBrushKeySets).AllocatorInstance.Data;
      pFVar5 = pFVar4 + (this->InputBrushKeySets).ArrayNum;
      local_res18[0] = param_2;
      while( true ) {
        if (pFVar4 == pFVar5) {
          return false;
        }
        bVar1 = `CommonUIUtils::TryGetInputBrushFromKeySets'::__l2::<lambda_1>::operator()
                          (local_res18,pFVar4);
        if (bVar1) break;
        pFVar4 = pFVar4 + 1;
      }
      if (pFVar4 == (FCommonInputKeySetBrushConfiguration *)0x0) {
        return false;
      }
      FSlateBrush::operator=(param_1,&pFVar4->KeyBrush);
      return true;
    }
    pFVar3 = (this->InputBrushDataMap).AllocatorInstance.Data;
    pFVar2 = pFVar3 + (longlong)(this->InputBrushDataMap).ArrayNum * 0xd0;
    if (pFVar3 != pFVar2) {
      do {
        if (*(longlong *)pFVar3 == *(longlong *)(param_2->AllocatorInstance).Data) {
          FSlateBrush::operator=(param_1,(FSlateBrush *)(pFVar3 + 0x20));
          return true;
        }
        pFVar3 = pFVar3 + 0xd0;
      } while (pFVar3 != pFVar2);
      return false;
    }
  }
  return false;
}

// execGetRegisteredGamepads @ 14a77a0c0

void __cdecl
UCommonInputBaseControllerData::execGetRegisteredGamepads
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  ForAnyElementType _Src;
  ulonglong uVar2;
  int iVar3;
  undefined1 local_res10 [8];
  
  uVar2 = (ulonglong)_tls_index;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar2 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    `UCommonInputBaseControllerData::GetRegisteredGamepads'::__l2::<lambda_1>::operator()
              (local_res10,&RegisteredGamepads);
    atexit(`UCommonInputBaseControllerData::GetRegisteredGamepads'::__l2::
           _dynamic_atexit_destructor_for__RegisteredGamepads__);
    _Init_thread_footer(&::_TSS0);
  }
  _Src.Data = RegisteredGamepads.AllocatorInstance.Data;
  if (param_3 != &RegisteredGamepads) {
    piVar1 = (int *)((longlong)param_3 + 0xc);
    iVar3 = RegisteredGamepads.ArrayNum;
    *(int *)((longlong)param_3 + 8) = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,*piVar1,param_3,iVar3,piVar1);
    if (iVar3 != 0) {
      memcpy(*(void **)param_3,_Src.Data,(longlong)iVar3 << 3);
    }
  }
  return;
}

