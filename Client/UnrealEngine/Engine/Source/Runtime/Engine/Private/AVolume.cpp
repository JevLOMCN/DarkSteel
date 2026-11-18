// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// AVolume @ 1489b3140

AVolume * __thiscall AVolume::AVolume(AVolume *this,FVTableHelper *param_1)

{
  ABrush::ABrush((ABrush *)this,param_1);
  *(undefined ***)this = &___7AVolume__6B_;
  return this;
}

// AVolume @ 1489b3170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AVolume * __thiscall AVolume::AVolume(AVolume *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  ulonglong uVar2;
  
  ABrush::ABrush((ABrush *)this,param_1);
  uVar2 = (ulonglong)_tls_index;
  *(undefined ***)this = &___7AVolume__6B_;
  pbVar1 = (byte *)(*(longlong *)&this->field_0x2d8 + 0x281);
  *pbVar1 = *pbVar1 | 4;
  pbVar1 = (byte *)(*(longlong *)&this->field_0x2d8 + 0x281);
  *pbVar1 = *pbVar1 | 8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar2 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&CollisionProfileName,L"OverlapAll");
      _Init_thread_footer(&::_TSS0);
    }
  }
  (**(code **)(**(longlong **)&this->field_0x2d8 + 0x788))
            (*(longlong **)&this->field_0x2d8,CollisionProfileName,1);
  UPrimitiveComponent::SetGenerateOverlapEvents(*(UPrimitiveComponent **)&this->field_0x2d8,true);
  AActor::SetReplicatingMovement((AActor *)this,false);
  AActor::SetCanBeDamaged((AActor *)this,false);
  return this;
}

// ~AVolume @ 1489b9170

void __thiscall AVolume::~AVolume(AVolume *this)

{
  *(undefined ***)this = &___7AVolume__6B_;
  ABrush::~ABrush((ABrush *)this);
  return;
}

// EncompassesPoint @ 1489d9360

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AVolume::EncompassesPoint(AVolume *this,TVector<double> *param_1,float param_2,float *param_3)

{
  int iVar1;
  longlong *plVar2;
  void *_Src;
  char cVar3;
  FName local_res8;
  FString local_38 [3];
  
  plVar2 = *(longlong **)&this->field_0x2d8;
  if (plVar2 == (longlong *)0x0) {
    if (4 < (byte)LogVolume._0_1_) {
      iVar1 = *(int *)&this->field_0x1f0;
      if (iVar1 < 2) {
        local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
        local_res8.Number = *(uint *)&this->field_0x1c;
        ::FName::ToString(&local_res8,local_38);
      }
      else {
        _Src = *(void **)&this->field_0x1e8;
        local_38[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38[0].Data.ArrayNum = iVar1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,0,(ForAnyElementType *)local_38,iVar1,&local_38[0].Data.ArrayMax);
        memcpy(local_38[0].Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVolume);
      if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x820))(plVar2,param_1,&local_res8,local_38);
    if (cVar3 == '\0') {
      if (param_3 != (float *)0x0) {
        *param_3 = -1.0;
        return false;
      }
    }
    else {
      if (param_3 != (float *)0x0) {
        *param_3 = SQRT((float)local_res8.ComparisonIndex.Value);
      }
      if ((0.0 <= (float)local_res8.ComparisonIndex.Value) &&
         ((float)local_res8.ComparisonIndex.Value <= param_2 * param_2)) {
        return true;
      }
    }
  }
  return false;
}

// GetBounds @ 1489e6800

/* WARNING: Enum "Type": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
AVolume::GetBounds(AVolume *this,TBoxSphereBounds<double,double> *__return_storage_ptr__)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)&this->field_0x2d8;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x598))(plVar1,__return_storage_ptr__,plVar1 + 0x3e);
    return __return_storage_ptr__;
  }
  if (1 < (byte)LogVolume._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVolume);
  }
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->SphereRadius = 0.0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1489eb5a0

UClass * __cdecl AVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Volume",&Z_Registration_Info_UClass_AVolume.InnerSingleton,
               StaticRegisterNativesAVolume,0x2f8,8,CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<AVolume>,
               InternalVTableHelperCtorCaller<AVolume>,local_res8,ABrush::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AVolume.InnerSingleton;
}

// IsLevelBoundsRelevant @ 1489f8d60

bool __thiscall AVolume::IsLevelBoundsRelevant(AVolume *this)

{
  return false;
}

// IsStaticBrush @ 1489f9a70

bool __thiscall AVolume::IsStaticBrush(AVolume *this)

{
  return false;
}

// IsVolumeBrush @ 1489fa410

bool __thiscall AVolume::IsVolumeBrush(AVolume *this)

{
  return true;
}

// StaticRegisterNativesAVolume @ 148a18730

void __cdecl AVolume::StaticRegisterNativesAVolume(void)

{
  return;
}

