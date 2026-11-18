// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 10

// StaticClass @ 148fe2a90

UClass * __cdecl UNiagaraBakerOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraBakerOutput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraBakerOutput",
               &Z_Registration_Info_UClass_UNiagaraBakerOutput.InnerSingleton,
               StaticRegisterNativesUNiagaraBakerOutput,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraBakerOutput>,
               InternalVTableHelperCtorCaller<UNiagaraBakerOutput>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraBakerOutput.InnerSingleton;
}

// UNiagaraBakerOutput @ 149023620

UNiagaraBakerOutput * __thiscall
UNiagaraBakerOutput::UNiagaraBakerOutput(UNiagaraBakerOutput *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraBakerOutput__6B_;
  (this->OutputName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputName).Data.ArrayNum = 0;
  (this->OutputName).Data.ArrayMax = 0;
  return this;
}

// UNiagaraBakerOutput @ 149023660

UNiagaraBakerOutput * __thiscall
UNiagaraBakerOutput::UNiagaraBakerOutput(UNiagaraBakerOutput *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraBakerOutput__6B_;
  (this->OutputName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputName).Data.ArrayNum = 0;
  (this->OutputName).Data.ArrayMax = 0;
  return this;
}

// ~UNiagaraBakerOutput @ 149026440

void __thiscall UNiagaraBakerOutput::~UNiagaraBakerOutput(UNiagaraBakerOutput *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraBakerOutput__6B_;
  pFVar1 = (this->OutputName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// Equals @ 14903fd70

bool __thiscall UNiagaraBakerOutput::Equals(UNiagaraBakerOutput *this,UNiagaraBakerOutput *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (this->OutputName).Data.ArrayNum;
  iVar1 = (param_1->OutputName).Data.ArrayNum;
  if (iVar2 != iVar1) {
    return iVar2 + iVar1 == 1;
  }
  if (1 < iVar2) {
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->OutputName).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->OutputName).Data.AllocatorInstance.Data);
    return iVar2 == 0;
  }
  return true;
}

// GetPrivateStaticClass @ 149047d10

UClass * __cdecl UNiagaraBakerOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraBakerOutput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraBakerOutput",
               &Z_Registration_Info_UClass_UNiagaraBakerOutput.InnerSingleton,
               StaticRegisterNativesUNiagaraBakerOutput,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraBakerOutput>,
               InternalVTableHelperCtorCaller<UNiagaraBakerOutput>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraBakerOutput.InnerSingleton;
}

// MakeOutputName @ 14905b450

FString * __thiscall
UNiagaraBakerOutput::MakeOutputName(UNiagaraBakerOutput *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FString *pFVar2;
  wchar_t wVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FName local_res10;
  FString local_38;
  
  local_res10 = (FName)this->_padding_;
  pFVar2 = ::FName::ToString(&local_res10,&local_38);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar1 = (pFVar2->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  ::FString::Reserve(__return_storage_ptr__,iVar4);
  iVar4 = (pFVar2->Data).ArrayNum;
  pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar4 * 2 + -2;
  if (iVar4 == 0) {
    pFVar6 = pFVar5 + (longlong)iVar4 * 2;
  }
  while( true ) {
    if ((pFVar2->Data).ArrayNum != iVar4) {
      `TCheckedPointerIterator<wchar_t,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (pFVar5 == pFVar6) break;
    wVar3 = *(wchar_t *)pFVar5;
    if ((((wVar3 == L' ') || (wVar3 == L',')) || (wVar3 == L':')) || (wVar3 == L';')) {
      wVar3 = L'_';
    }
    ::FString::AppendChar(__return_storage_ptr__,wVar3);
    pFVar5 = pFVar5 + 2;
  }
  pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return __return_storage_ptr__;
}

// PostInitProperties @ 14905dd00

void __thiscall UNiagaraBakerOutput::PostInitProperties(UNiagaraBakerOutput *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  FString *pFVar3;
  void *local_18 [2];
  
  UObject::PostInitProperties((UObject *)this);
  puVar2 = (undefined8 *)(**(code **)(this->_padding_ + 0x2b8))(this,local_18);
  pFVar3 = &this->OutputName;
  if (pFVar3 != (FString *)puVar2) {
    pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar2;
    *puVar2 = 0;
    (this->OutputName).Data.ArrayNum = *(int *)(puVar2 + 1);
    (this->OutputName).Data.ArrayMax = *(int *)((longlong)puVar2 + 0xc);
    puVar2[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// SanitizeOutputName @ 149064f30

FString * __cdecl
UNiagaraBakerOutput::SanitizeOutputName(FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  wchar_t wVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::Reserve(__return_storage_ptr__,iVar3);
  iVar3 = (param_1->Data).ArrayNum;
  pFVar4 = (param_1->Data).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar3 * 2 + -2;
  if (iVar3 == 0) {
    pFVar5 = pFVar4 + (longlong)iVar3 * 2;
  }
  while( true ) {
    if ((param_1->Data).ArrayNum != iVar3) {
      `TCheckedPointerIterator<wchar_t,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (pFVar4 == pFVar5) break;
    wVar2 = *(wchar_t *)pFVar4;
    if ((((wVar2 == L' ') || (wVar2 == L',')) || (wVar2 == L':')) || (wVar2 == L';')) {
      wVar2 = L'_';
    }
    ::FString::AppendChar(__return_storage_ptr__,wVar2);
    pFVar4 = pFVar4 + 2;
  }
  pFVar4 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUNiagaraBakerOutput @ 14906a450

void __cdecl UNiagaraBakerOutput::StaticRegisterNativesUNiagaraBakerOutput(void)

{
  return;
}

