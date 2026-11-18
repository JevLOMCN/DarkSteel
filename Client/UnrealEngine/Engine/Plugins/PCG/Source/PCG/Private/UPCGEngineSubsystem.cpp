// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// StaticClass @ 149f1e970

UClass * __cdecl UPCGEngineSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGEngineSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGEngineSubsystem",
               &Z_Registration_Info_UClass_UPCGEngineSubsystem.InnerSingleton,
               StaticRegisterNativesUPCGEngineSubsystem,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGEngineSubsystem>,
               InternalVTableHelperCtorCaller<UPCGEngineSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGEngineSubsystem.InnerSingleton;
}

// UPCGEngineSubsystem @ 149f321e0

UPCGEngineSubsystem * __thiscall
UPCGEngineSubsystem::UPCGEngineSubsystem(UPCGEngineSubsystem *this,FVTableHelper *param_1)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  *(undefined ***)&this->field_0x30 = &___7IPCGBaseSubsystem__6B_;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->field_0x48,NewObject);
  *(undefined ***)this = &_vftable__for__UEngineSubsystem__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IPCGBaseSubsystem__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__FTickableGameObject__;
  return this;
}

// UPCGEngineSubsystem @ 149f32250

UPCGEngineSubsystem * __thiscall UPCGEngineSubsystem::UPCGEngineSubsystem(UPCGEngineSubsystem *this)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this);
  *(undefined ***)&this->field_0x30 = &___7IPCGBaseSubsystem__6B_;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->field_0x48,NewObject);
  *(undefined ***)this = &_vftable__for__UEngineSubsystem__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IPCGBaseSubsystem__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__FTickableGameObject__;
  return this;
}

// ~UPCGEngineSubsystem @ 149f34690

void __thiscall UPCGEngineSubsystem::~UPCGEngineSubsystem(UPCGEngineSubsystem *this)

{
  *(undefined ***)this = &_vftable__for__UEngineSubsystem__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IPCGBaseSubsystem__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__FTickableGameObject__;
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->field_0x48);
  *(undefined ***)&this->field_0x30 = &___7IPCGBaseSubsystem__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x40);
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// Get @ 149f47070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGEngineSubsystem * __cdecl UPCGEngineSubsystem::Get(void)

{
  FObjectSubsystemCollection<UEngineSubsystem> *this;
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UPCGEngineSubsystem *pUVar5;
  
  if (GEngine == (UEngine *)0x0) {
    return (UPCGEngineSubsystem *)0x0;
  }
  this = &GEngine->EngineSubsystemCollection;
  pUVar3 = StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_149f470b3;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_149f470b3:
    pUVar4 = StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_149f470e3;
    }
  }
  pUVar3 = (UClass *)0x0;
LAB_149f470e3:
  pUVar5 = (UPCGEngineSubsystem *)
           FSubsystemCollectionBase::GetSubsystemInternal((FSubsystemCollectionBase *)this,pUVar3);
  return pUVar5;
}

// GetPrivateStaticClass @ 149f4cff0

UClass * __cdecl UPCGEngineSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGEngineSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGEngineSubsystem",
               &Z_Registration_Info_UClass_UPCGEngineSubsystem.InnerSingleton,
               StaticRegisterNativesUPCGEngineSubsystem,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGEngineSubsystem>,
               InternalVTableHelperCtorCaller<UPCGEngineSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGEngineSubsystem.InnerSingleton;
}

// GetStatId @ 149f4ef20

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall UPCGEngineSubsystem::GetStatId(UPCGEngineSubsystem *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_protected:_virtual_struct_TStatId___cdecl_UPCGEngineSubsystem::GetStatId(void)const_::_2_::FStat_FPCGEngineSubsystemTickFunction>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_FPCGEngineSubsystemTickFunction ==
          (FThreadSafeStaticStat<_protected:_virtual_struct_TStatId___cdecl_UPCGEngineSubsystem::GetStatId(void)const_::_2_::FStat_FPCGEngineSubsystemTickFunction>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"FPCGEngineSubsystemTickFunction");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_FPCGEngineSubsystemTickFunction,*pFVar1,
                   L"FPCGEngineSubsystemTickFunction","STATGROUP_Tickables","STATCAT_Advanced",
                   L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_FPCGEngineSubsystemTickFunction;
  if (StatPtr_FPCGEngineSubsystemTickFunction ==
      (FThreadSafeStaticStat<_protected:_virtual_struct_TStatId___cdecl_UPCGEngineSubsystem::GetStatId(void)const_::_2_::FStat_FPCGEngineSubsystemTickFunction>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FPCGEngineSubsystemTickFunction");
    FVar2 = (FThreadSafeStaticStat<_protected:_virtual_struct_TStatId___cdecl_UPCGEngineSubsystem::GetStatId(void)const_::_2_::FStat_FPCGEngineSubsystemTickFunction>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_FPCGEngineSubsystemTickFunction,
                         *pFVar1,L"FPCGEngineSubsystemTickFunction","STATGROUP_Tickables",
                         "STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// GetTickableTickType @ 149f4f530

ETickableTickType __thiscall UPCGEngineSubsystem::GetTickableTickType(UPCGEngineSubsystem *this)

{
  return Never;
}

// IsTickableInEditor @ 149f52cc0

bool __thiscall UPCGEngineSubsystem::IsTickableInEditor(UPCGEngineSubsystem *this)

{
  return true;
}

// StaticRegisterNativesUPCGEngineSubsystem @ 149f63930

void __cdecl UPCGEngineSubsystem::StaticRegisterNativesUPCGEngineSubsystem(void)

{
  return;
}

// Tick @ 149f64d50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGEngineSubsystem::Tick(UPCGEngineSubsystem *this,float param_1)

{
  double local_res8 [4];
  
  local_res8[0] =
       (double)(**(code **)(*(longlong *)&this[-1].field_0x38 + 0x18))(&this[-1].field_0x38);
  if (*(FPCGGraphExecutor **)&this[-1].field_0x40 != (FPCGGraphExecutor *)0x0) {
    FPCGGraphExecutor::Execute(*(FPCGGraphExecutor **)&this[-1].field_0x40,local_res8);
  }
  return;
}

// _getUObject @ 149f6f5c0

UObject * __thiscall UPCGEngineSubsystem::_getUObject(UPCGEngineSubsystem *this)

{
  return (UObject *)&this[-1].field_0x20;
}

