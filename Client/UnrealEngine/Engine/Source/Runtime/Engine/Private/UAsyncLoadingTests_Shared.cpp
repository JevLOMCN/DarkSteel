// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 14886e0b0

UClass * __cdecl UAsyncLoadingTests_Shared::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncLoadingTests_Shared.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncLoadingTests_Shared",
               &Z_Registration_Info_UClass_UAsyncLoadingTests_Shared.InnerSingleton,
               StaticRegisterNativesUAsyncLoadingTests_Shared,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAsyncLoadingTests_Shared>,
               InternalVTableHelperCtorCaller<UAsyncLoadingTests_Shared>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncLoadingTests_Shared.InnerSingleton;
}

// UAsyncLoadingTests_Shared @ 14887df00

UAsyncLoadingTests_Shared * __thiscall
UAsyncLoadingTests_Shared::UAsyncLoadingTests_Shared
          (UAsyncLoadingTests_Shared *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->SoftReference).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UAsyncLoadingTests_Shared__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SoftReference).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SoftReference).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SoftReference).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoftReference).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->HardReference).field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// UAsyncLoadingTests_Shared @ 14887df60

UAsyncLoadingTests_Shared * __thiscall
UAsyncLoadingTests_Shared::UAsyncLoadingTests_Shared
          (UAsyncLoadingTests_Shared *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->SoftReference).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UAsyncLoadingTests_Shared__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SoftReference).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SoftReference).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SoftReference).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoftReference).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->HardReference).field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// ~UAsyncLoadingTests_Shared @ 14887ee80

void __thiscall
UAsyncLoadingTests_Shared::~UAsyncLoadingTests_Shared(UAsyncLoadingTests_Shared *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAsyncLoadingTests_Shared__6B_;
  pvVar1 = *(void **)&(this->SoftReference).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14888f880

UClass * __cdecl UAsyncLoadingTests_Shared::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncLoadingTests_Shared.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncLoadingTests_Shared",
               &Z_Registration_Info_UClass_UAsyncLoadingTests_Shared.InnerSingleton,
               StaticRegisterNativesUAsyncLoadingTests_Shared,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAsyncLoadingTests_Shared>,
               InternalVTableHelperCtorCaller<UAsyncLoadingTests_Shared>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncLoadingTests_Shared.InnerSingleton;
}

// IsPostLoadThreadSafe @ 148895c50

bool __thiscall UAsyncLoadingTests_Shared::IsPostLoadThreadSafe(UAsyncLoadingTests_Shared *this)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((OnIsPostLoadThreadSafe._8_4_ != 0) && (OnIsPostLoadThreadSafe._0_8_ != 0)) {
    cVar1 = (**(code **)(*(longlong *)OnIsPostLoadThreadSafe._0_8_ + 0x38))();
    if (cVar1 != '\0') {
      plVar3 = (longlong *)0x0;
      if (OnIsPostLoadThreadSafe._8_4_ != 0) {
        plVar3 = (longlong *)OnIsPostLoadThreadSafe._0_8_;
      }
                    /* WARNING: Could not recover jumptable at 0x000148895c93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x60))(plVar3,this);
      return (bool)uVar2;
    }
  }
  return false;
}

// IsReadyForAsyncPostLoad @ 148895d10

bool __thiscall UAsyncLoadingTests_Shared::IsReadyForAsyncPostLoad(UAsyncLoadingTests_Shared *this)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((OnIsReadyForAsyncPostLoad._8_4_ != 0) && (OnIsReadyForAsyncPostLoad._0_8_ != 0)) {
    cVar1 = (**(code **)(*(longlong *)OnIsReadyForAsyncPostLoad._0_8_ + 0x38))();
    if (cVar1 != '\0') {
      plVar3 = (longlong *)0x0;
      if (OnIsReadyForAsyncPostLoad._8_4_ != 0) {
        plVar3 = (longlong *)OnIsReadyForAsyncPostLoad._0_8_;
      }
                    /* WARNING: Could not recover jumptable at 0x000148895d53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x60))(plVar3,this);
      return (bool)uVar2;
    }
  }
  return true;
}

// PostLoad @ 148896600

void __thiscall UAsyncLoadingTests_Shared::PostLoad(UAsyncLoadingTests_Shared *this)

{
  UObject::PostLoad((UObject *)this);
  if ((OnPostLoad._8_4_ != 0) && (OnPostLoad._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014889662e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)OnPostLoad._0_8_ + 0x68))(OnPostLoad._0_8_,this);
    return;
  }
  return;
}

// Serialize @ 148898290

void __thiscall
UAsyncLoadingTests_Shared::Serialize(UAsyncLoadingTests_Shared *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
  if ((OnSerialize._8_4_ != 0) && (OnSerialize._0_8_ != 0)) {
    (**(code **)(*(longlong *)OnSerialize._0_8_ + 0x68))(OnSerialize._0_8_,param_1,this);
  }
  return;
}

// Serialize @ 1488982e0

void __thiscall
UAsyncLoadingTests_Shared::Serialize
          (UAsyncLoadingTests_Shared *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  if ((OnSerialize._8_4_ != 0) && (OnSerialize._0_8_ != 0)) {
    (**(code **)(*(longlong *)OnSerialize._0_8_ + 0x68))(OnSerialize._0_8_,pFVar1,this);
  }
  return;
}

// StaticRegisterNativesUAsyncLoadingTests_Shared @ 14889bb20

void __cdecl UAsyncLoadingTests_Shared::StaticRegisterNativesUAsyncLoadingTests_Shared(void)

{
  return;
}

