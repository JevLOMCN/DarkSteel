// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 147ba25d0

UClass * __cdecl UColorInputDeviceCurveProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UColorInputDeviceCurveProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ColorInputDeviceCurveProperty",
               &Z_Registration_Info_UClass_UColorInputDeviceCurveProperty.InnerSingleton,
               StaticRegisterNativesUColorInputDeviceCurveProperty,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UColorInputDeviceCurveProperty>,
               InternalVTableHelperCtorCaller<UColorInputDeviceCurveProperty>,local_res8,
               UInputDeviceProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UColorInputDeviceCurveProperty.InnerSingleton;
}

// UColorInputDeviceCurveProperty @ 147bbad10

UColorInputDeviceCurveProperty * __thiscall
UColorInputDeviceCurveProperty::UColorInputDeviceCurveProperty
          (UColorInputDeviceCurveProperty *this,FVTableHelper *param_1)

{
  FName local_res8 [4];
  
  UObject::UObject((UObject *)this,param_1);
  (this->ColorData).bEnable = true;
  (this->ColorData).bResetAfterCompletion = true;
  *(undefined4 *)&this->_padding_ = 0;
  (this->ColorData).DeviceColorCurve.field0_0x0.DebugPtr = (UCurveLinearColor *)0x0;
  *(undefined8 *)&this->DeviceOverrideData = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x20 = 0;
  this->_padding_ = (longlong)&___7UColorInputDeviceCurveProperty__6B_;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x28 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x2c = 0x80;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x34 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x40 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x48 = 0;
  ::FName::FName(local_res8,"InputDeviceLightColor");
  (this->InternalProperty)._padding_ = (longlong)local_res8[0];
  (this->InternalProperty).bEnable = true;
  (this->InternalProperty).Color.field0_0x0._s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  return this;
}

// UColorInputDeviceCurveProperty @ 147bbadb0

UColorInputDeviceCurveProperty * __thiscall
UColorInputDeviceCurveProperty::UColorInputDeviceCurveProperty
          (UColorInputDeviceCurveProperty *this,FObjectInitializer *param_1)

{
  FName local_res8 [4];
  
  UObject::UObject((UObject *)this,param_1);
  (this->ColorData).bEnable = true;
  (this->ColorData).bResetAfterCompletion = true;
  *(undefined4 *)&this->_padding_ = 0;
  (this->ColorData).DeviceColorCurve.field0_0x0.DebugPtr = (UCurveLinearColor *)0x0;
  *(undefined8 *)&this->DeviceOverrideData = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x20 = 0;
  this->_padding_ = (longlong)&___7UColorInputDeviceCurveProperty__6B_;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x28 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x2c = 0x80;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x34 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x40 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x48 = 0;
  ::FName::FName(local_res8,"InputDeviceLightColor");
  (this->InternalProperty)._padding_ = (longlong)local_res8[0];
  (this->InternalProperty).bEnable = true;
  (this->InternalProperty).Color.field0_0x0._s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  return this;
}

// ~UColorInputDeviceCurveProperty @ 147bbf130

void __thiscall
UColorInputDeviceCurveProperty::~UColorInputDeviceCurveProperty
          (UColorInputDeviceCurveProperty *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UColorInputDeviceCurveProperty__6B_;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DeviceOverrideData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FDeviceColorCurveData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FDeviceColorCurveData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FDeviceColorCurveData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DeviceOverrideData);
  this->_padding_ = (longlong)&___7UInputDeviceProperty__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// EvaluateDeviceProperty_Implementation @ 147bd8d70

void __thiscall
UColorInputDeviceCurveProperty::EvaluateDeviceProperty_Implementation
          (UColorInputDeviceCurveProperty *this,FPlatformUserId param_1,FInputDeviceId param_2,
          float param_3,float param_4)

{
  UCurveLinearColor *pUVar1;
  code *pcVar2;
  bool bVar3;
  FColor FVar4;
  FDeviceColorCurveData *pFVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FLinearColor local_30;
  FLinearColor local_20;
  
  pFVar5 = UInputDeviceProperty::GetDeviceSpecificData<FDeviceColorCurveData>
                     ((UInputDeviceProperty *)this,param_1,param_2,&this->DeviceOverrideData);
  if (pFVar5 != (FDeviceColorCurveData *)0x0) {
    (this->InternalProperty).bEnable = pFVar5->bEnable;
    pUVar1 = (pFVar5->DeviceColorCurve).field0_0x0.DebugPtr;
    if (pUVar1 != (UCurveLinearColor *)0x0) {
      (**(code **)(pUVar1->_padding_ + 0x60))(&pUVar1->_padding_,&local_30,param_4);
      FVar4 = FLinearColor::ToFColorSRGB(&local_30);
      (this->InternalProperty).Color.field0_0x0 =
           *(FColor_u_0 *)CONCAT44(extraout_var,FVar4.field0_0x0);
      return;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_743917833502588806>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\InputDeviceProperties.cpp"
                       ,0x7a,"Data->DeviceColorCurve");
    if (!bVar3) {
      return;
    }
code_r0x000147bd8e3f:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar1 = (this->ColorData).DeviceColorCurve.field0_0x0.DebugPtr;
  (this->InternalProperty).bEnable = (this->ColorData).bEnable;
  if (pUVar1 == (UCurveLinearColor *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_743917833502588795>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\InputDeviceProperties.cpp"
                       ,0x85,"ColorData.DeviceColorCurve");
    if (bVar3) goto code_r0x000147bd8e3f;
  }
  else {
    (**(code **)(pUVar1->_padding_ + 0x60))(&pUVar1->_padding_,&local_20,param_4);
    FVar4 = FLinearColor::ToFColorSRGB(&local_20);
    (this->InternalProperty).Color.field0_0x0 =
         *(FColor_u_0 *)CONCAT44(extraout_var_00,FVar4.field0_0x0);
  }
  return;
}

// GetInternalDeviceProperty @ 147be0a70

FInputDeviceProperty * __thiscall
UColorInputDeviceCurveProperty::GetInternalDeviceProperty(UColorInputDeviceCurveProperty *this)

{
  return (FInputDeviceProperty *)&this->InternalProperty;
}

// GetPrivateStaticClass @ 147be4ba0

UClass * __cdecl UColorInputDeviceCurveProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UColorInputDeviceCurveProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ColorInputDeviceCurveProperty",
               &Z_Registration_Info_UClass_UColorInputDeviceCurveProperty.InnerSingleton,
               StaticRegisterNativesUColorInputDeviceCurveProperty,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UColorInputDeviceCurveProperty>,
               InternalVTableHelperCtorCaller<UColorInputDeviceCurveProperty>,local_res8,
               UInputDeviceProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UColorInputDeviceCurveProperty.InnerSingleton;
}

// RecalculateDuration @ 147bf9c60

float __thiscall
UColorInputDeviceCurveProperty::RecalculateDuration(UColorInputDeviceCurveProperty *this)

{
  undefined1 *puVar1;
  TMap<FName,FDeviceColorCurveData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceColorCurveData,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  UCurveLinearColor *this_00;
  UCurveBase *this_01;
  code *pcVar6;
  TMap<FName,FDeviceColorCurveData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceColorCurveData,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  float fVar15;
  undefined1 local_res8 [8];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_b8;
  int local_b4;
  TMap<FName,FDeviceColorCurveData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceColorCurveData,0>_>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TMap<FName,FDeviceColorCurveData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceColorCurveData,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  local_res20[0] = 0.0;
  this_00 = (this->ColorData).DeviceColorCurve.field0_0x0.DebugPtr;
  local_res10[0] = 0.0;
  if (this_00 != (UCurveLinearColor *)0x0) {
    UCurveBase::GetTimeRange((UCurveBase *)this_00,local_res20,local_res10);
  }
  iVar4 = *(int *)&(this->DeviceOverrideData).field_0x28;
  puVar1 = &(this->DeviceOverrideData).field_0x10;
  iStack_a8 = 0;
  pTVar2 = &this->DeviceOverrideData;
  uStack_a4 = 1;
  local_90 = 0;
  iStack_94 = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(this->DeviceOverrideData).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_147bf9d1e;
      uVar12 = puVar14[lVar9 + 1];
    }
    uStack_a4 = -uVar12 & uVar12;
    uVar3 = (ulonglong)uStack_a4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_b4 = (int)lVar9;
    iStack_94 = local_90 + -1 + local_b4;
    if (iVar4 < iStack_94) {
      iStack_94 = iVar4;
    }
  }
LAB_147bf9d1e:
  uVar12 = *(uint *)&(this->DeviceOverrideData).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  iStack_88 = *(int *)&(this->DeviceOverrideData).field_0x8 -
              *(int *)&(this->DeviceOverrideData).field_0x34;
  uStack_98 = 0xffffffff;
  TStack_78._padding_ = CONCAT44(uStack_a4,iStack_a8);
  TStack_78.CurrentBitIndex = iStack_94;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_78._28_4_ = iStack_94;
  TStack_78.BaseBitIndex = local_90;
  uStack_58 = CONCAT44(uStack_84,iStack_88);
  local_b0 = pTVar2;
  local_a0 = puVar1;
  iStack_8c = iStack_94;
  local_80 = pTVar2;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    fVar15 = (float)(*pcVar6)();
    return fVar15;
  }
  uVar5 = *(uint *)&(this->DeviceOverrideData).field_0x28;
  if (uVar12 != uVar5) {
    puVar13 = *(undefined1 **)&(this->DeviceOverrideData).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_147bf9e20;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_147bf9e20:
  while( true ) {
    pTVar7 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FDeviceColorCurveData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_78.CurrentBitIndex == uVar12) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    this_01 = *(UCurveBase **)
               ((longlong)TStack_78.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)pTVar7);
    if (this_01 != (UCurveBase *)0x0) {
      local_b8 = 0.0;
      local_res18[0] = 0.0;
      UCurveBase::GetTimeRange(this_01,&local_b8,local_res18);
      if (local_res10[0] < local_res18[0]) {
        local_res10[0] = local_res18[0];
      }
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  *(float *)&this->_padding_ = local_res10[0];
  return local_res10[0];
}

// ResetDeviceProperty_Implementation @ 147bfdbe0

void __thiscall
UColorInputDeviceCurveProperty::ResetDeviceProperty_Implementation
          (UColorInputDeviceCurveProperty *this,FPlatformUserId param_1,FInputDeviceId param_2,
          bool param_3)

{
  longlong lVar1;
  FDeviceColorCurveData *pFVar2;
  char cVar3;
  
  cVar3 = (this->ColorData).bResetAfterCompletion;
  pFVar2 = UInputDeviceProperty::GetDeviceSpecificData<FDeviceColorCurveData>
                     ((UInputDeviceProperty *)this,param_1,param_2,&this->DeviceOverrideData);
  if (pFVar2 != (FDeviceColorCurveData *)0x0) {
    cVar3 = pFVar2->bResetAfterCompletion;
  }
  if (cVar3 != '\0' || param_3) {
    lVar1 = this->_padding_;
    (this->InternalProperty).bEnable = false;
    (**(code **)(lVar1 + 0x2c0))(this,param_1.InternalId,param_2.InternalId);
  }
  return;
}

// StaticRegisterNativesUColorInputDeviceCurveProperty @ 147c03530

void __cdecl
UColorInputDeviceCurveProperty::StaticRegisterNativesUColorInputDeviceCurveProperty(void)

{
  return;
}

