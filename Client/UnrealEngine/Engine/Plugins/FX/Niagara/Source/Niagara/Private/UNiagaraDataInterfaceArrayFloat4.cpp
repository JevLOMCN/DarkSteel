// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticClass @ 14907afc0

UClass * __cdecl UNiagaraDataInterfaceArrayFloat4::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFloat4.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceArrayFloat4",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFloat4.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceArrayFloat4,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceArrayFloat4>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceArrayFloat4>,local_res8,
               UNiagaraDataInterfaceArray::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFloat4.InnerSingleton;
}

// UNiagaraDataInterfaceArrayFloat4 @ 1490b35f0

UNiagaraDataInterfaceArrayFloat4 * __thiscall
UNiagaraDataInterfaceArrayFloat4::UNiagaraDataInterfaceArrayFloat4
          (UNiagaraDataInterfaceArrayFloat4 *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase
            ((UNiagaraDataInterfaceRWBase *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  (this->InternalFloatData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalFloatData).ArrayNum = 0;
  (this->InternalFloatData).ArrayMax = 0;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// UNiagaraDataInterfaceArrayFloat4 @ 1490b3640

UNiagaraDataInterfaceArrayFloat4 * __thiscall
UNiagaraDataInterfaceArrayFloat4::UNiagaraDataInterfaceArrayFloat4
          (UNiagaraDataInterfaceArrayFloat4 *this,FObjectInitializer *param_1)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase
            ((UNiagaraDataInterfaceRWBase *)this,pFVar1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  (this->InternalFloatData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalFloatData).ArrayNum = 0;
  (this->InternalFloatData).ArrayMax = 0;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// ~UNiagaraDataInterfaceArrayFloat4 @ 1490b8db0

void __thiscall
UNiagaraDataInterfaceArrayFloat4::~UNiagaraDataInterfaceArrayFloat4
          (UNiagaraDataInterfaceArrayFloat4 *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  pFVar1 = (this->InternalFloatData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterfaceArray::~UNiagaraDataInterfaceArray((UNiagaraDataInterfaceArray *)this);
  return;
}

// GetPrivateStaticClass @ 149108fa0

UClass * __cdecl UNiagaraDataInterfaceArrayFloat4::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFloat4.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceArrayFloat4",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFloat4.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceArrayFloat4,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceArrayFloat4>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceArrayFloat4>,local_res8,
               UNiagaraDataInterfaceArray::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFloat4.InnerSingleton;
}

// PostInitProperties @ 14911fce0

void __thiscall
UNiagaraDataInterfaceArrayFloat4::PostInitProperties(UNiagaraDataInterfaceArrayFloat4 *this)

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
    *puVar4 = &
              ___7__FNDIArrayProxyImpl_U__TVector4_M_Math_UE__VUNiagaraDataInterfaceArrayFloat4____6B_
    ;
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

// StaticRegisterNativesUNiagaraDataInterfaceArrayFloat4 @ 149139e90

void __cdecl
UNiagaraDataInterfaceArrayFloat4::StaticRegisterNativesUNiagaraDataInterfaceArrayFloat4(void)

{
  return;
}

