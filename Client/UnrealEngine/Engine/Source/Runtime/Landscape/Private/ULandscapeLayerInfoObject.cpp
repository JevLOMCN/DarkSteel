// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 15

// StaticClass @ 145f67140

UClass * __cdecl ULandscapeLayerInfoObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeLayerInfoObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeLayerInfoObject",
               &Z_Registration_Info_UClass_ULandscapeLayerInfoObject.InnerSingleton,
               StaticRegisterNativesULandscapeLayerInfoObject,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULandscapeLayerInfoObject>,
               InternalVTableHelperCtorCaller<ULandscapeLayerInfoObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeLayerInfoObject.InnerSingleton;
}

// ULandscapeLayerInfoObject @ 145f7baa0

ULandscapeLayerInfoObject * __thiscall
ULandscapeLayerInfoObject::ULandscapeLayerInfoObject
          (ULandscapeLayerInfoObject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULandscapeLayerInfoObject__6B_;
  (this->LayerName).ComparisonIndex = 0;
  (this->LayerName).Number = 0;
  (this->PhysMaterial).field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
  this->Hardness = 0.0;
  this->BlendMethod = None;
  (this->BlendGroup).ComparisonIndex = 0;
  (this->BlendGroup).Number = 0;
  return this;
}

// ULandscapeLayerInfoObject @ 145f7bae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ULandscapeLayerInfoObject * __thiscall
ULandscapeLayerInfoObject::ULandscapeLayerInfoObject
          (ULandscapeLayerInfoObject *this,FObjectInitializer *param_1)

{
  ForAnyElementType FVar1;
  bool bVar2;
  UClass *this_00;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_88 [32];
  FString local_68;
  byte local_58;
  byte local_57;
  byte local_56;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_88;
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULandscapeLayerInfoObject__6B_;
  (this->LayerName).ComparisonIndex = 0;
  (this->LayerName).Number = 0;
  (this->PhysMaterial).field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
  this->BlendMethod = None;
  (this->BlendGroup).ComparisonIndex = 0;
  (this->BlendGroup).Number = 0;
  this->Hardness = 0.0;
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar2) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_68,(UObject *)0x0);
    iVar3 = local_68.Data.ArrayNum + -1;
    FVar1.Data = local_68.Data.AllocatorInstance.Data;
    if (local_68.Data.ArrayNum == 0) {
      iVar3 = 0;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    FSHA1::HashBuffer(FVar1.Data,(longlong)iVar3 * 2,&local_58);
    fVar4 = (float)local_58 * __real_3b808081;
    fVar5 = (float)local_57 * __real_3b808081;
    fVar6 = (float)local_56 * __real_3b808081;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    (this->LayerUsageDebugColor).field0_0x0._s_0.R = fVar4;
    (this->LayerUsageDebugColor).field0_0x0._s_0.G = fVar5;
    (this->LayerUsageDebugColor).field0_0x0._s_0.B = fVar6;
    (this->LayerUsageDebugColor).field0_0x0._s_0.A = 1.0;
    this_00 = Z_Construct_UClass_ULandscapeSettings_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    this->BlendMethod = (this_00->ClassDefaultObject).field0_0x0.DebugPtr[4].field_0x22;
  }
  return this;
}

// ~ULandscapeLayerInfoObject @ 145f7e3b0

void __thiscall
ULandscapeLayerInfoObject::~ULandscapeLayerInfoObject(ULandscapeLayerInfoObject *this)

{
  this->_padding_ = (longlong)&___7ULandscapeLayerInfoObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GenerateLayerUsageDebugColor @ 145f8da80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FLinearColor * __thiscall
ULandscapeLayerInfoObject::GenerateLayerUsageDebugColor
          (ULandscapeLayerInfoObject *this,FLinearColor *__return_storage_ptr__)

{
  float fVar1;
  ForAnyElementType FVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  FString local_38;
  byte local_28;
  byte local_27;
  byte local_26;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0);
  iVar3 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar2.Data = local_38.Data.AllocatorInstance.Data;
  }
  FSHA1::HashBuffer(FVar2.Data,(longlong)iVar3 * 2,&local_28);
  fVar1 = __real_3b808081;
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.R = (float)local_28 * fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.G = (float)local_27 * fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.B = (float)local_26 * fVar1;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 145f93a40

UClass * __cdecl ULandscapeLayerInfoObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeLayerInfoObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeLayerInfoObject",
               &Z_Registration_Info_UClass_ULandscapeLayerInfoObject.InnerSingleton,
               StaticRegisterNativesULandscapeLayerInfoObject,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULandscapeLayerInfoObject>,
               InternalVTableHelperCtorCaller<ULandscapeLayerInfoObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeLayerInfoObject.InnerSingleton;
}

// Serialize @ 145fa1bf0

void __thiscall
ULandscapeLayerInfoObject::Serialize(ULandscapeLayerInfoObject *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x000145fa1c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  return;
}

// Serialize @ 145fa1c20

void __thiscall
ULandscapeLayerInfoObject::Serialize
          (ULandscapeLayerInfoObject *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FFortniteMainBranchObjectVersion::GUID);
  return;
}

// SetBlendGroup @ 145fa1d40

void __thiscall
ULandscapeLayerInfoObject::SetBlendGroup
          (ULandscapeLayerInfoObject *this,FName *param_1,bool param_2)

{
  if (*param_1 != this->BlendGroup) {
    this->BlendGroup = *param_1;
  }
  return;
}

// SetBlendMethod @ 145fa1d60

void __thiscall
ULandscapeLayerInfoObject::SetBlendMethod
          (ULandscapeLayerInfoObject *this,ELandscapeTargetLayerBlendMethod param_1,bool param_2)

{
  if (param_1 != this->BlendMethod) {
    this->BlendMethod = param_1;
  }
  return;
}

// SetHardness @ 145fa1d90

void __thiscall
ULandscapeLayerInfoObject::SetHardness
          (ULandscapeLayerInfoObject *this,float param_1,bool param_2,uint param_3)

{
  if (param_1 != this->Hardness) {
    this->Hardness = param_1;
  }
  return;
}

// SetLayerName @ 145fa1db0

void __thiscall
ULandscapeLayerInfoObject::SetLayerName(ULandscapeLayerInfoObject *this,FName *param_1,bool param_2)

{
  if (*param_1 != this->LayerName) {
    this->LayerName = *param_1;
  }
  return;
}

// SetLayerUsageDebugColor @ 145fa1dd0

void __thiscall
ULandscapeLayerInfoObject::SetLayerUsageDebugColor
          (ULandscapeLayerInfoObject *this,FLinearColor *param_1,bool param_2,uint param_3)

{
  undefined8 uVar1;
  
  (this->LayerUsageDebugColor).field0_0x0._s_0.A = 1.0;
  if (((((this->LayerUsageDebugColor).field0_0x0._s_0.R != (param_1->field0_0x0)._s_0.R) ||
       ((this->LayerUsageDebugColor).field0_0x0._s_0.G != (param_1->field0_0x0)._s_0.G)) ||
      ((this->LayerUsageDebugColor).field0_0x0._s_0.B != (param_1->field0_0x0)._s_0.B)) ||
     (__real_3f800000 != (param_1->field0_0x0)._s_0.A)) {
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    *(undefined8 *)&(this->LayerUsageDebugColor).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
    *(undefined8 *)((longlong)&(this->LayerUsageDebugColor).field0_0x0 + 8) = uVar1;
  }
  return;
}

// SetPhysicalMaterial @ 145fa22e0

void __thiscall
ULandscapeLayerInfoObject::SetPhysicalMaterial
          (ULandscapeLayerInfoObject *this,TObjectPtr<UPhysicalMaterial> param_1,bool param_2)

{
  UPhysicalMaterial *pUVar1;
  
  pUVar1 = *(UPhysicalMaterial **)param_1.field0_0x0;
  if (pUVar1 != (this->PhysMaterial).field0_0x0.DebugPtr) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UPhysicalMaterial *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
                    /* WARNING: Load size is inaccurate */
    (this->PhysMaterial).field0_0x0 = *param_1.field0_0x0;
  }
  return;
}

// StaticRegisterNativesULandscapeLayerInfoObject @ 145fa47c0

void __cdecl ULandscapeLayerInfoObject::StaticRegisterNativesULandscapeLayerInfoObject(void)

{
  return;
}

