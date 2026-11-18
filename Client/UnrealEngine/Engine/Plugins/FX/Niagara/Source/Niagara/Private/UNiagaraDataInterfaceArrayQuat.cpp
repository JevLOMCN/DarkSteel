// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticClass @ 14907baf0

UClass * __cdecl UNiagaraDataInterfaceArrayQuat::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayQuat.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceArrayQuat",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayQuat.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceArrayQuat,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceArrayQuat>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceArrayQuat>,local_res8,
               UNiagaraDataInterfaceArray::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayQuat.InnerSingleton;
}

// UNiagaraDataInterfaceArrayQuat @ 1490b3a70

UNiagaraDataInterfaceArrayQuat * __thiscall
UNiagaraDataInterfaceArrayQuat::UNiagaraDataInterfaceArrayQuat
          (UNiagaraDataInterfaceArrayQuat *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase
            ((UNiagaraDataInterfaceRWBase *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  (this->InternalQuatData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalQuatData).ArrayNum = 0;
  (this->InternalQuatData).ArrayMax = 0;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// UNiagaraDataInterfaceArrayQuat @ 1490b3ac0

UNiagaraDataInterfaceArrayQuat * __thiscall
UNiagaraDataInterfaceArrayQuat::UNiagaraDataInterfaceArrayQuat
          (UNiagaraDataInterfaceArrayQuat *this,FObjectInitializer *param_1)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase
            ((UNiagaraDataInterfaceRWBase *)this,pFVar1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  (this->InternalQuatData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalQuatData).ArrayNum = 0;
  (this->InternalQuatData).ArrayMax = 0;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// ~UNiagaraDataInterfaceArrayQuat @ 1490b8f50

void __thiscall
UNiagaraDataInterfaceArrayQuat::~UNiagaraDataInterfaceArrayQuat
          (UNiagaraDataInterfaceArrayQuat *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  pFVar1 = (this->InternalQuatData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterfaceArray::~UNiagaraDataInterfaceArray((UNiagaraDataInterfaceArray *)this);
  return;
}

// GetPrivateStaticClass @ 1491094e0

UClass * __cdecl UNiagaraDataInterfaceArrayQuat::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayQuat.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceArrayQuat",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayQuat.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceArrayQuat,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceArrayQuat>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceArrayQuat>,local_res8,
               UNiagaraDataInterfaceArray::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayQuat.InnerSingleton;
}

// PostInitProperties @ 149120340

void __thiscall
UNiagaraDataInterfaceArrayQuat::PostInitProperties(UNiagaraDataInterfaceArrayQuat *this)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  
  puVar4 = ::operator_new(0xc0);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = 0;
    puVar4[2] = this;
    *(undefined2 *)(puVar4 + 3) = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[8] = 0;
    *puVar4 = &___7__FNDIArrayProxyImpl_U__TQuat_M_Math_UE__VUNiagaraDataInterfaceArrayQuat____6B_;
    *(undefined4 *)(puVar4 + 9) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x4c) = 0x80;
    *(undefined4 *)(puVar4 + 10) = 0xffffffff;
    *(undefined4 *)((longlong)puVar4 + 0x54) = 0;
    puVar4[0xc] = 0;
    *(undefined4 *)(puVar4 + 0xd) = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x12] = 0;
    *(undefined4 *)(puVar4 + 0x13) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x9c) = 0x80;
    *(undefined4 *)(puVar4 + 0x14) = 0xffffffff;
    *(undefined4 *)((longlong)puVar4 + 0xa4) = 0;
    puVar4[0x16] = 0;
    *(undefined4 *)(puVar4 + 0x17) = 0;
    lVar1 = puVar4[2];
    if ((*(char *)(lVar1 + 0x48) == '\x03') || (*(char *)(lVar1 + 0x48) == '\x01')) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    *(undefined1 *)(puVar4 + 3) = uVar3;
    if (((*(char *)(lVar1 + 0x48) == '\x03') || (*(char *)(lVar1 + 0x48) == '\x02')) &&
       ((*(uint *)(lVar1 + 0x30) >> 1 & 1) != 0)) {
      *(undefined1 *)((longlong)puVar4 + 0x19) = 1;
    }
    else {
      *(undefined1 *)((longlong)puVar4 + 0x19) = 0;
    }
  }
  puVar2 = (undefined8 *)this->_padding_;
  if ((puVar2 != puVar4) && (this->_padding_ = (longlong)puVar4, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  UNiagaraDataInterfaceArray::PostInitProperties((UNiagaraDataInterfaceArray *)this);
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceArrayQuat @ 149139f30

void __cdecl
UNiagaraDataInterfaceArrayQuat::StaticRegisterNativesUNiagaraDataInterfaceArrayQuat(void)

{
  return;
}

