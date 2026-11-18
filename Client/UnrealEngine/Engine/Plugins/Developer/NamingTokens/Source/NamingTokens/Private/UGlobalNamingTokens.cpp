// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokens
// Functions: 25

// StaticClass @ 14d0d19b0

UClass * __cdecl UGlobalNamingTokens::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGlobalNamingTokens.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NamingTokens",L"GlobalNamingTokens",
               &Z_Registration_Info_UClass_UGlobalNamingTokens.InnerSingleton,
               StaticRegisterNativesUGlobalNamingTokens,0x118,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGlobalNamingTokens>,
               InternalVTableHelperCtorCaller<UGlobalNamingTokens>,local_res8,
               UNamingTokens::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGlobalNamingTokens.InnerSingleton;
}

// UGlobalNamingTokens @ 14d0d4c00

UGlobalNamingTokens * __thiscall
UGlobalNamingTokens::UGlobalNamingTokens(UGlobalNamingTokens *this,FVTableHelper *param_1)

{
  UNamingTokens::UNamingTokens((UNamingTokens *)this,param_1);
  *(undefined ***)this = &___7UGlobalNamingTokens__6B_;
  return this;
}

// UGlobalNamingTokens @ 14d0d4c30

UGlobalNamingTokens * __thiscall UGlobalNamingTokens::UGlobalNamingTokens(UGlobalNamingTokens *this)

{
  int iVar1;
  
  UNamingTokens::UNamingTokens((UNamingTokens *)this);
  *(undefined ***)this = &___7UGlobalNamingTokens__6B_;
  iVar1 = GlobalNamespace.Data.ArrayNum + -1;
  if (GlobalNamespace.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AssignRange
            ((FString *)&this->field_0xf8,(wchar_t *)GlobalNamespace.Data.AllocatorInstance.Data,
             iVar1);
  return this;
}

// ~UGlobalNamingTokens @ 14d0d52b0

void __thiscall UGlobalNamingTokens::~UGlobalNamingTokens(UGlobalNamingTokens *this)

{
  *(undefined ***)this = &___7UGlobalNamingTokens__6B_;
  UNamingTokens::~UNamingTokens((UNamingTokens *)this);
  return;
}

// operator() @ 14d0d5610

FText * __thiscall
`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_10>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  UObject *this_00;
  UFunction *this_01;
  UClass *pUVar1;
  FString *pFVar2;
  long64 local_res8;
  FDateTime local_res10;
  FString local_28;
  FString local_18;
  
  this_00 = *(UObject **)this;
  this_01 = UObject::FindFunctionChecked(this_00,NAME_UNamingTokens_GetCurrentDateTime);
  pUVar1 = UField::GetOwnerClass((UField *)this_01);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res8 = 0;
    (**(code **)(*(longlong *)this_00 + 0x260))(this_00,this_01,&local_res8);
    local_res10.Ticks = local_res8;
  }
  else {
    (**(code **)(*(longlong *)this_00 + 0x2b8))(this_00,&local_res10);
  }
  FDateTime::ToFormattedString(&local_res10,&local_28,L"%a");
  pFVar2 = ::FString::ToUpper(&local_28,&local_18);
  FText::FromString(__return_storage_ptr__,pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14d0d56f0

FText * __thiscall
`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_11>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  UObject *this_00;
  UFunction *this_01;
  UClass *pUVar1;
  FString *pFVar2;
  long64 local_res8;
  FDateTime local_res10;
  FString local_28;
  FString local_18;
  
  this_00 = *(UObject **)this;
  this_01 = UObject::FindFunctionChecked(this_00,NAME_UNamingTokens_GetCurrentDateTime);
  pUVar1 = UField::GetOwnerClass((UField *)this_01);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res8 = 0;
    (**(code **)(*(longlong *)this_00 + 0x260))(this_00,this_01,&local_res8);
    local_res10.Ticks = local_res8;
  }
  else {
    (**(code **)(*(longlong *)this_00 + 0x2b8))(this_00,&local_res10);
  }
  FDateTime::ToFormattedString(&local_res10,&local_28,L"%a");
  pFVar2 = ::FString::ToLower(&local_28,&local_18);
  FText::FromString(__return_storage_ptr__,pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14d0d57d0

FText * __thiscall
`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_12>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  UObject *this_00;
  UFunction *this_01;
  UClass *pUVar1;
  long64 local_res8;
  FDateTime local_res10;
  FString local_18;
  
  this_00 = *(UObject **)this;
  this_01 = UObject::FindFunctionChecked(this_00,NAME_UNamingTokens_GetCurrentDateTime);
  pUVar1 = UField::GetOwnerClass((UField *)this_01);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res8 = 0;
    (**(code **)(*(longlong *)this_00 + 0x260))(this_00,this_01,&local_res8);
    local_res10.Ticks = local_res8;
  }
  else {
    (**(code **)(*(longlong *)this_00 + 0x2b8))(this_00,&local_res10);
  }
  FDateTime::GetDay(&local_res10);
  ::FString::PrintfImpl(&local_18,L"%02d");
  FText::FromString(__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14d0d58a0

FText * __thiscall
`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_13>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  UObject *this_00;
  UFunction *this_01;
  UClass *pUVar1;
  long64 local_res8;
  FDateTime local_res10;
  FString local_18;
  
  this_00 = *(UObject **)this;
  this_01 = UObject::FindFunctionChecked(this_00,NAME_UNamingTokens_GetCurrentDateTime);
  pUVar1 = UField::GetOwnerClass((UField *)this_01);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res8 = 0;
    (**(code **)(*(longlong *)this_00 + 0x260))(this_00,this_01,&local_res8);
    local_res10.Ticks = local_res8;
  }
  else {
    (**(code **)(*(longlong *)this_00 + 0x2b8))(this_00,&local_res10);
  }
  FDateTime::ToFormattedString(&local_res10,&local_18,L"%P");
  FText::FromString(__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14d0d5960

FText * __thiscall
`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_14>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  UObject *this_00;
  UFunction *this_01;
  UClass *pUVar1;
  long64 local_res8;
  FDateTime local_res10;
  FString local_18;
  
  this_00 = *(UObject **)this;
  this_01 = UObject::FindFunctionChecked(this_00,NAME_UNamingTokens_GetCurrentDateTime);
  pUVar1 = UField::GetOwnerClass((UField *)this_01);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res8 = 0;
    (**(code **)(*(longlong *)this_00 + 0x260))(this_00,this_01,&local_res8);
    local_res10.Ticks = local_res8;
  }
  else {
    (**(code **)(*(longlong *)this_00 + 0x2b8))(this_00,&local_res10);
  }
  FDateTime::ToFormattedString(&local_res10,&local_18,L"%p");
  FText::FromString(__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14d0d5a20

FText * __thiscall
`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_15>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  UObject *this_00;
  UFunction *this_01;
  UClass *pUVar1;
  long64 local_res8;
  FDateTime local_res10;
  FString local_18;
  
  this_00 = *(UObject **)this;
  this_01 = UObject::FindFunctionChecked(this_00,NAME_UNamingTokens_GetCurrentDateTime);
  pUVar1 = UField::GetOwnerClass((UField *)this_01);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res8 = 0;
    (**(code **)(*(longlong *)this_00 + 0x260))(this_00,this_01,&local_res8);
    local_res10.Ticks = local_res8;
  }
  else {
    (**(code **)(*(longlong *)this_00 + 0x2b8))(this_00,&local_res10);
  }
  FDateTime::GetHour12(&local_res10);
  ::FString::PrintfImpl(&local_18,L"%02d");
  FText::FromString(__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14d0d5af0

FText * __thiscall
`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_16>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  UObject *this_00;
  UFunction *this_01;
  UClass *pUVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  FString local_18;
  
  this_00 = *(UObject **)this;
  this_01 = UObject::FindFunctionChecked(this_00,NAME_UNamingTokens_GetCurrentDateTime);
  pUVar1 = UField::GetOwnerClass((UField *)this_01);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res8 = 0;
    (**(code **)(*(longlong *)this_00 + 0x260))(this_00,this_01,&local_res8);
    local_res10 = local_res8;
  }
  else {
    (**(code **)(*(longlong *)this_00 + 0x2b8))(this_00,&local_res10);
  }
  ::FString::PrintfImpl(&local_18,L"%02d");
  FText::FromString(__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14d0d5bf0

FText * __thiscall
`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_17>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  UObject *this_00;
  UFunction *this_01;
  UClass *pUVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  FString local_18;
  
  this_00 = *(UObject **)this;
  this_01 = UObject::FindFunctionChecked(this_00,NAME_UNamingTokens_GetCurrentDateTime);
  pUVar1 = UField::GetOwnerClass((UField *)this_01);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res8 = 0;
    (**(code **)(*(longlong *)this_00 + 0x260))(this_00,this_01,&local_res8);
    local_res10 = local_res8;
  }
  else {
    (**(code **)(*(longlong *)this_00 + 0x2b8))(this_00,&local_res10);
  }
  ::FString::PrintfImpl(&local_18,L"%02d");
  FText::FromString(__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14d0d5cf0

FText * __thiscall
`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_18>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  UObject *this_00;
  UFunction *this_01;
  UClass *pUVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  FString local_18;
  
  this_00 = *(UObject **)this;
  this_01 = UObject::FindFunctionChecked(this_00,NAME_UNamingTokens_GetCurrentDateTime);
  pUVar1 = UField::GetOwnerClass((UField *)this_01);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res8 = 0;
    (**(code **)(*(longlong *)this_00 + 0x260))(this_00,this_01,&local_res8);
    local_res10 = local_res8;
  }
  else {
    (**(code **)(*(longlong *)this_00 + 0x2b8))(this_00,&local_res10);
  }
  ::FString::PrintfImpl(&local_18,L"%02d");
  FText::FromString(__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14d0d5df0

FText * __thiscall
`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_19>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  UObject *this_00;
  UFunction *this_01;
  UClass *pUVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  FString local_18;
  
  this_00 = *(UObject **)this;
  this_01 = UObject::FindFunctionChecked(this_00,NAME_UNamingTokens_GetCurrentDateTime);
  pUVar1 = UField::GetOwnerClass((UField *)this_01);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res8 = 0;
    (**(code **)(*(longlong *)this_00 + 0x260))(this_00,this_01,&local_res8);
    local_res10 = local_res8;
  }
  else {
    (**(code **)(*(longlong *)this_00 + 0x2b8))(this_00,&local_res10);
  }
  ::FString::PrintfImpl(&local_18,L"%02d");
  FText::FromString(__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14d0d64f0

FText * __thiscall
`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_2>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  ForAnyElementType _Src;
  longlong lVar1;
  FString local_18;
  
  _Src.Data = FApp::SessionOwner.Data.AllocatorInstance.Data;
  lVar1 = (longlong)FApp::SessionOwner.Data.ArrayNum;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = FApp::SessionOwner.Data.ArrayNum;
  if (FApp::SessionOwner.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FApp::SessionOwner.Data.ArrayNum,0,(ForAnyElementType *)&local_18,
               FApp::SessionOwner.Data.ArrayNum,&local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src.Data,lVar1 * 2);
  }
  FText::FromString(__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14d0d65a0

FText * __thiscall
`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_3>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  UObject *this_00;
  UFunction *this_01;
  UClass *pUVar1;
  long64 local_res8;
  FDateTime local_res10;
  FString local_18;
  
  this_00 = *(UObject **)this;
  this_01 = UObject::FindFunctionChecked(this_00,NAME_UNamingTokens_GetCurrentDateTime);
  pUVar1 = UField::GetOwnerClass((UField *)this_01);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res8 = 0;
    (**(code **)(*(longlong *)this_00 + 0x260))(this_00,this_01,&local_res8);
    local_res10.Ticks = local_res8;
  }
  else {
    (**(code **)(*(longlong *)this_00 + 0x2b8))(this_00,&local_res10);
  }
  FDateTime::GetYear(&local_res10);
  ::FString::PrintfImpl(&local_18,L"%04d");
  FText::FromString(__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14d0d6670

FText * __thiscall
`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_4>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  UObject *this_00;
  UFunction *this_01;
  UClass *pUVar1;
  long64 local_res8;
  FDateTime local_res10;
  FString local_18;
  
  this_00 = *(UObject **)this;
  this_01 = UObject::FindFunctionChecked(this_00,NAME_UNamingTokens_GetCurrentDateTime);
  pUVar1 = UField::GetOwnerClass((UField *)this_01);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res8 = 0;
    (**(code **)(*(longlong *)this_00 + 0x260))(this_00,this_01,&local_res8);
    local_res10.Ticks = local_res8;
  }
  else {
    (**(code **)(*(longlong *)this_00 + 0x2b8))(this_00,&local_res10);
  }
  FDateTime::GetYear(&local_res10);
  ::FString::PrintfImpl(&local_18,L"%02d");
  FText::FromString(__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14d0d6750

FText * __thiscall
`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_5>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  UObject *this_00;
  UFunction *this_01;
  UClass *pUVar1;
  FString *pFVar2;
  FString *pFVar3;
  int iVar4;
  ForAnyElementType FVar5;
  int iVar6;
  long64 local_res8;
  FDateTime local_res10;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this_00 = *(UObject **)this;
  this_01 = UObject::FindFunctionChecked(this_00,NAME_UNamingTokens_GetCurrentDateTime);
  pUVar1 = UField::GetOwnerClass((UField *)this_01);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res8 = 0;
    (**(code **)(*(longlong *)this_00 + 0x260))(this_00,this_01,&local_res8);
    local_res10.Ticks = local_res8;
  }
  else {
    (**(code **)(*(longlong *)this_00 + 0x2b8))(this_00,&local_res10);
  }
  FDateTime::ToFormattedString(&local_res10,&local_78,L"%b");
  ::FString::RightChop(&local_78,&local_48,1);
  pFVar2 = ::FString::ToLower(&local_48,&local_28);
  iVar4 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (1 < iVar4) {
    iVar4 = 1;
  }
  iVar6 = 0;
  if (0 < iVar4) {
    iVar6 = iVar4;
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar5.Data = local_78.Data.AllocatorInstance.Data;
  }
  ::FString::ConstructFromPtrSize(&local_58,(wchar_t *)FVar5.Data,iVar6);
  pFVar3 = ::FString::ToUpper(&local_58,&local_38);
  ::FString::ConcatFF(&local_68,pFVar3,pFVar2);
  FText::FromString(__return_storage_ptr__,&local_68);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14d0d68d0

FText * __thiscall
`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_6>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  UObject *this_00;
  UFunction *this_01;
  UClass *pUVar1;
  FString *pFVar2;
  long64 local_res8;
  FDateTime local_res10;
  FString local_28;
  FString local_18;
  
  this_00 = *(UObject **)this;
  this_01 = UObject::FindFunctionChecked(this_00,NAME_UNamingTokens_GetCurrentDateTime);
  pUVar1 = UField::GetOwnerClass((UField *)this_01);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res8 = 0;
    (**(code **)(*(longlong *)this_00 + 0x260))(this_00,this_01,&local_res8);
    local_res10.Ticks = local_res8;
  }
  else {
    (**(code **)(*(longlong *)this_00 + 0x2b8))(this_00,&local_res10);
  }
  FDateTime::ToFormattedString(&local_res10,&local_28,L"%b");
  pFVar2 = ::FString::ToUpper(&local_28,&local_18);
  FText::FromString(__return_storage_ptr__,pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14d0d69b0

FText * __thiscall
`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_7>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  UObject *this_00;
  UFunction *this_01;
  UClass *pUVar1;
  FString *pFVar2;
  long64 local_res8;
  FDateTime local_res10;
  FString local_28;
  FString local_18;
  
  this_00 = *(UObject **)this;
  this_01 = UObject::FindFunctionChecked(this_00,NAME_UNamingTokens_GetCurrentDateTime);
  pUVar1 = UField::GetOwnerClass((UField *)this_01);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res8 = 0;
    (**(code **)(*(longlong *)this_00 + 0x260))(this_00,this_01,&local_res8);
    local_res10.Ticks = local_res8;
  }
  else {
    (**(code **)(*(longlong *)this_00 + 0x2b8))(this_00,&local_res10);
  }
  FDateTime::ToFormattedString(&local_res10,&local_28,L"%b");
  pFVar2 = ::FString::ToLower(&local_28,&local_18);
  FText::FromString(__return_storage_ptr__,pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14d0d6a90

FText * __thiscall
`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_8>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  UObject *this_00;
  UFunction *this_01;
  UClass *pUVar1;
  long64 local_res8;
  FDateTime local_res10;
  FString local_18;
  
  this_00 = *(UObject **)this;
  this_01 = UObject::FindFunctionChecked(this_00,NAME_UNamingTokens_GetCurrentDateTime);
  pUVar1 = UField::GetOwnerClass((UField *)this_01);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res8 = 0;
    (**(code **)(*(longlong *)this_00 + 0x260))(this_00,this_01,&local_res8);
    local_res10.Ticks = local_res8;
  }
  else {
    (**(code **)(*(longlong *)this_00 + 0x2b8))(this_00,&local_res10);
  }
  FDateTime::GetMonth(&local_res10);
  ::FString::PrintfImpl(&local_18,L"%02d");
  FText::FromString(__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14d0d6b60

FText * __thiscall
`UGlobalNamingTokens::OnCreateDefaultTokens'::__l2::<lambda_9>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  UObject *this_00;
  UFunction *this_01;
  UClass *pUVar1;
  FString *pFVar2;
  FString *pFVar3;
  int iVar4;
  ForAnyElementType FVar5;
  int iVar6;
  long64 local_res8;
  FDateTime local_res10;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this_00 = *(UObject **)this;
  this_01 = UObject::FindFunctionChecked(this_00,NAME_UNamingTokens_GetCurrentDateTime);
  pUVar1 = UField::GetOwnerClass((UField *)this_01);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res8 = 0;
    (**(code **)(*(longlong *)this_00 + 0x260))(this_00,this_01,&local_res8);
    local_res10.Ticks = local_res8;
  }
  else {
    (**(code **)(*(longlong *)this_00 + 0x2b8))(this_00,&local_res10);
  }
  FDateTime::ToFormattedString(&local_res10,&local_78,L"%a");
  ::FString::RightChop(&local_78,&local_48,1);
  pFVar2 = ::FString::ToLower(&local_48,&local_28);
  iVar4 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (1 < iVar4) {
    iVar4 = 1;
  }
  iVar6 = 0;
  if (0 < iVar4) {
    iVar6 = iVar4;
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar5.Data = local_78.Data.AllocatorInstance.Data;
  }
  ::FString::ConstructFromPtrSize(&local_58,(wchar_t *)FVar5.Data,iVar6);
  pFVar3 = ::FString::ToUpper(&local_58,&local_38);
  ::FString::ConcatFF(&local_68,pFVar3,pFVar2);
  FText::FromString(__return_storage_ptr__,&local_68);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d0e0210

UClass * __cdecl UGlobalNamingTokens::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGlobalNamingTokens.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NamingTokens",L"GlobalNamingTokens",
               &Z_Registration_Info_UClass_UGlobalNamingTokens.InnerSingleton,
               StaticRegisterNativesUGlobalNamingTokens,0x118,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGlobalNamingTokens>,
               InternalVTableHelperCtorCaller<UGlobalNamingTokens>,local_res8,
               UNamingTokens::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGlobalNamingTokens.InnerSingleton;
}

// OnCreateDefaultTokens @ 14d0e1450

void __thiscall
UGlobalNamingTokens::OnCreateDefaultTokens
          (UGlobalNamingTokens *this,TArray<FNamingTokenData,TSizedDefaultAllocator<32>_> *param_1)

{
  ITextData *pIVar1;
  FNamingTokenData *pFVar2;
  code *pcVar3;
  TRefCountPtr<ITextData> TVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_e88 [8];
  FDelegateAllocation local_e80;
  undefined1 local_e70 [8];
  FDelegateAllocation local_e68;
  undefined1 local_e58 [8];
  FDelegateAllocation local_e50;
  undefined1 local_e40 [8];
  FDelegateAllocation local_e38;
  undefined1 local_e28 [8];
  FDelegateAllocation local_e20;
  undefined1 local_e10 [8];
  FDelegateAllocation local_e08;
  undefined1 local_df8 [8];
  FDelegateAllocation local_df0;
  undefined1 local_de0 [8];
  FDelegateAllocation local_dd8;
  undefined1 local_dc8 [8];
  FDelegateAllocation local_dc0;
  undefined1 local_db0 [8];
  FDelegateAllocation local_da8;
  undefined1 local_d98 [8];
  FDelegateAllocation local_d90;
  undefined1 local_d80 [8];
  FDelegateAllocation local_d78;
  undefined1 local_d68 [8];
  FDelegateAllocation local_d60;
  undefined1 local_d50 [8];
  FDelegateAllocation local_d48;
  undefined1 local_d38 [8];
  FDelegateAllocation local_d30;
  ForAnyElementType local_d20;
  undefined8 local_d18;
  FText local_d10;
  FText local_d00;
  undefined8 local_cf0;
  undefined1 local_ce8 [8];
  ForAnyElementType FStack_ce0;
  int local_cd8;
  ForAnyElementType local_cd0;
  undefined8 local_cc8;
  FText local_cc0;
  FText local_cb0;
  undefined8 local_ca0;
  undefined1 local_c98 [8];
  ForAnyElementType FStack_c90;
  int local_c88;
  ForAnyElementType local_c80;
  undefined8 local_c78;
  FText local_c70;
  FText local_c60;
  undefined8 local_c50;
  undefined1 local_c48 [8];
  ForAnyElementType FStack_c40;
  int local_c38;
  ForAnyElementType local_c30;
  undefined8 local_c28;
  FText local_c20;
  FText local_c10;
  undefined8 local_c00;
  undefined1 local_bf8 [8];
  ForAnyElementType FStack_bf0;
  int local_be8;
  undefined1 local_be0 [8];
  FDelegateAllocation local_bd8;
  undefined1 local_bc8 [8];
  FDelegateAllocation local_bc0;
  undefined1 local_bb0 [8];
  FDelegateAllocation local_ba8;
  undefined1 local_b98 [8];
  FDelegateAllocation local_b90;
  FString local_b80;
  FString local_b70;
  FString local_b60;
  FString local_b50;
  FNamingTokenData local_b40;
  FString local_af0;
  FString local_ae0;
  FString local_ad0;
  FString local_ac0;
  FString local_ab0;
  FString local_aa0;
  FString local_a90;
  FString local_a80;
  FString local_a70;
  FString local_a60;
  FString local_a50;
  FString local_a40;
  FString local_a30;
  FString local_a20;
  FString local_a10;
  FDestructionSentinel local_a00;
  FDestructionSentinel local_9e8;
  FDestructionSentinel local_9d0;
  FDestructionSentinel local_9b8;
  FDestructionSentinel local_9a0;
  FDestructionSentinel local_988;
  FDestructionSentinel local_970;
  FDestructionSentinel local_958;
  FDestructionSentinel local_940;
  FDestructionSentinel local_928;
  FDestructionSentinel local_910;
  FDestructionSentinel local_8f8;
  FDestructionSentinel local_8e0;
  FDestructionSentinel local_8c8;
  FDestructionSentinel local_8b0;
  FDestructionSentinel local_898;
  FDestructionSentinel local_880;
  FDestructionSentinel local_868;
  FDestructionSentinel local_850;
  FDestructionSentinel local_838;
  FDelegateAllocation *local_820;
  FDestructionSentinel local_818;
  FDelegateAllocation *local_800;
  FDestructionSentinel local_7f8;
  FDelegateAllocation *local_7e0;
  FDestructionSentinel local_7d8;
  FDelegateAllocation *local_7c0;
  FDestructionSentinel local_7b8;
  FDelegateAllocation *local_7a0;
  FDestructionSentinel local_798;
  FDelegateAllocation *local_780;
  FDestructionSentinel local_778;
  FDelegateAllocation *local_760;
  FDestructionSentinel local_758;
  FDelegateAllocation *local_740;
  FDestructionSentinel local_738;
  FDelegateAllocation *local_720;
  FDestructionSentinel local_718;
  FDelegateAllocation *local_700;
  FDestructionSentinel local_6f8;
  FDelegateAllocation *local_6e0;
  FDestructionSentinel local_6d8;
  FDelegateAllocation *local_6c0;
  FDestructionSentinel local_6b8;
  FDelegateAllocation *local_6a0;
  FDestructionSentinel local_698;
  FDelegateAllocation *local_680;
  FDestructionSentinel local_678;
  FDelegateAllocation *local_660;
  FDestructionSentinel local_658;
  FDelegateAllocation *local_640;
  FDestructionSentinel local_638;
  FDelegateAllocation *local_620;
  FDestructionSentinel local_618;
  FDelegateAllocation *local_600;
  FDestructionSentinel local_5f8;
  FDelegateAllocation *local_5e0;
  FText local_5d8;
  FText local_5c8;
  FText local_5b8;
  FText local_5a8;
  FText local_598;
  FText local_588;
  FText local_578;
  FText local_568;
  FText local_558;
  FText local_548;
  FText local_538;
  FText local_528;
  FText local_518;
  FText local_508;
  FText local_4f8;
  FText local_4e8;
  FText local_4d8;
  FText local_4c8;
  FText local_4b8;
  FNamingTokenData local_4a8;
  FNamingTokenData local_458;
  FNamingTokenData local_408;
  FNamingTokenData local_3b8;
  FNamingTokenData local_368;
  FNamingTokenData local_318;
  FNamingTokenData local_2c8;
  FNamingTokenData local_278;
  FNamingTokenData local_228;
  FNamingTokenData local_1d8;
  FNamingTokenData local_188;
  FNamingTokenData local_138;
  FNamingTokenData local_e8;
  FNamingTokenData local_98;
  
  ::FString::FString(&local_b80,L"project");
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_558,L"GlobalNamingTokens",L"ProjectName",L"Project Name");
  local_df8 = (undefined1  [8])0x0;
  local_df0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_df0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_df8,
             (FWriteAccessScope *)&local_7f8);
  local_7e0 = &local_df0;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_df0);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_7f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7f8.Accessor,&local_7f8);
  }
  local_d20.Data = (FScriptContainerElement *)0x0;
  local_d18 = 0;
  FText::FText(&local_d10);
  FText::FText(&local_d00);
  TVar4.Reference = local_d10.TextData.Reference;
  local_ce8 = (undefined1  [8])0x0;
  FStack_ce0.Data = (FScriptContainerElement *)0x0;
  local_cf0 = 0;
  local_cd8 = 0;
  pIVar1 = (pFVar8->TextData).Reference;
  if (local_d10.TextData.Reference != pIVar1) {
    local_d10.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (TVar4.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar4.Reference + 0x10))(TVar4.Reference);
    }
  }
  FVar5.Data = local_b80.Data.AllocatorInstance.Data;
  local_d10.Flags = pFVar8->Flags;
  iVar7 = local_b80.Data.ArrayNum;
  local_d18 = CONCAT44(local_d18._4_4_,iVar7);
  if ((iVar7 == 0) && (local_d18._4_4_ == 0)) {
    local_d18 = local_b80.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar7,local_d18._4_4_,&local_d20,iVar7,(int *)((longlong)&local_d18 + 4));
    if (iVar7 != 0) {
      memcpy(local_d20.Data,FVar5.Data,(longlong)iVar7 * 2);
    }
  }
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_ce8,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_df8);
  pFVar11 = (param_1->AllocatorInstance).Data;
  if ((pFVar11 <= (FScriptContainerElement *)&local_d20) &&
     ((FScriptContainerElement *)&local_d20 < pFVar11 + (longlong)param_1->ArrayMax * 0x50)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar11 = (param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x50;
  *(undefined8 *)pFVar11 = 0;
  *(FScriptContainerElement **)pFVar11 = local_d20.Data;
  local_d20.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)(pFVar11 + 8) = (undefined4)local_d18;
  *(int *)(pFVar11 + 0xc) = local_d18._4_4_;
  local_d18 = 0;
  FText::FText((FText *)(pFVar11 + 0x10),&local_d10);
  FText::FText((FText *)(pFVar11 + 0x20),&local_d00);
  *(undefined8 *)(pFVar11 + 0x30) = local_cf0;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar11 + 0x38),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ce8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ce8,
             (FWriteAccessScope *)&local_8b0);
  if ((local_cd8 != 0) && (FStack_ce0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_ce0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_ce0,0,0,0x10);
    local_cd8 = 0;
  }
  if (local_8b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8b0.Accessor,&local_8b0);
  }
  if (FStack_ce0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_ce0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ce8);
  if (local_d00.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d00.TextData.Reference + 0x10))();
  }
  if (local_d10.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d10.TextData.Reference + 0x10))();
  }
  if (local_d20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d20.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_df8,
             (FWriteAccessScope *)&local_898);
  if ((local_df0.DelegateSize != 0) &&
     (local_df0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_df0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_df0,0,0,0x10);
    local_df0.DelegateSize = 0;
  }
  if (local_898.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_898.Accessor,&local_898);
  }
  if (local_df0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_df0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_df8);
  if (local_558.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_558.TextData.Reference + 0x10))();
  }
  if (local_b80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b80.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_b70,L"user");
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_548,L"GlobalNamingTokens",L"UserName",L"User Name");
  local_e28 = (undefined1  [8])0x0;
  local_e20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_e20.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e28,
             (FWriteAccessScope *)&local_7d8);
  local_7c0 = &local_e20;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_e20);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  if (local_7d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7d8.Accessor,&local_7d8);
  }
  local_cd0.Data = (FScriptContainerElement *)0x0;
  local_cc8 = 0;
  FText::FText(&local_cc0);
  FText::FText(&local_cb0);
  TVar4.Reference = local_cc0.TextData.Reference;
  local_c98 = (undefined1  [8])0x0;
  FStack_c90.Data = (FScriptContainerElement *)0x0;
  local_ca0 = 0;
  local_c88 = 0;
  pIVar1 = (pFVar8->TextData).Reference;
  if (local_cc0.TextData.Reference != pIVar1) {
    local_cc0.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
    }
    if (TVar4.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar4.Reference + 0x10))(TVar4.Reference);
    }
  }
  FVar5.Data = local_b70.Data.AllocatorInstance.Data;
  local_cc0.Flags = pFVar8->Flags;
  iVar7 = local_b70.Data.ArrayNum;
  local_cc8 = CONCAT44(local_cc8._4_4_,iVar7);
  if ((iVar7 == 0) && (local_cc8._4_4_ == 0)) {
    local_cc8 = local_b70.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar7,local_cc8._4_4_,&local_cd0,iVar7,(int *)((longlong)&local_cc8 + 4));
    if (iVar7 != 0) {
      memcpy(local_cd0.Data,FVar5.Data,(longlong)iVar7 * 2);
    }
  }
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_c98,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_e28);
  pFVar11 = (param_1->AllocatorInstance).Data;
  if ((pFVar11 <= (FScriptContainerElement *)&local_cd0) &&
     ((FScriptContainerElement *)&local_cd0 < pFVar11 + (longlong)param_1->ArrayMax * 0x50)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar11 = (param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x50;
  *(undefined8 *)pFVar11 = 0;
  *(FScriptContainerElement **)pFVar11 = local_cd0.Data;
  local_cd0.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)(pFVar11 + 8) = (undefined4)local_cc8;
  *(int *)(pFVar11 + 0xc) = local_cc8._4_4_;
  local_cc8 = 0;
  FText::FText((FText *)(pFVar11 + 0x10),&local_cc0);
  FText::FText((FText *)(pFVar11 + 0x20),&local_cb0);
  *(undefined8 *)(pFVar11 + 0x30) = local_ca0;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar11 + 0x38),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c98);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c98,
             (FWriteAccessScope *)&local_880);
  if ((local_c88 != 0) && (FStack_c90.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_c90.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_c90,0,0,0x10);
    local_c88 = 0;
  }
  if (local_880.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_880.Accessor,&local_880);
  }
  if (FStack_c90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c90.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c98);
  if (local_cb0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_cb0.TextData.Reference + 0x10))();
  }
  if (local_cc0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_cc0.TextData.Reference + 0x10))();
  }
  if (local_cd0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cd0.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e28,
             (FWriteAccessScope *)&local_868);
  if ((local_e20.DelegateSize != 0) &&
     (local_e20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_e20.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_e20,0,0,0x10);
    local_e20.DelegateSize = 0;
  }
  if (local_868.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_868.Accessor,&local_868);
  }
  if (local_e20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_e20.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e28);
  if (local_548.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_548.TextData.Reference + 0x10))();
  }
  if (local_b70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b70.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_b50,L"yyyy");
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_538,L"GlobalNamingTokens",L"Year4Digit",L"Year (4 digit)");
  local_e40 = (undefined1  [8])0x0;
  local_e38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_e38.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e40,
             (FWriteAccessScope *)&local_7b8);
  local_7a0 = &local_e38;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_e38);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar9[3] = this;
  }
  if (local_7b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7b8.Accessor,&local_7b8);
  }
  local_c80.Data = (FScriptContainerElement *)0x0;
  local_c78 = 0;
  FText::FText(&local_c70);
  FText::FText(&local_c60);
  TVar4.Reference = local_c70.TextData.Reference;
  local_c48 = (undefined1  [8])0x0;
  FStack_c40.Data = (FScriptContainerElement *)0x0;
  local_c50 = 0;
  local_c38 = 0;
  pIVar1 = (pFVar8->TextData).Reference;
  if (local_c70.TextData.Reference != pIVar1) {
    local_c70.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
    }
    if (TVar4.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar4.Reference + 0x10))(TVar4.Reference);
    }
  }
  FVar5.Data = local_b50.Data.AllocatorInstance.Data;
  local_c70.Flags = pFVar8->Flags;
  iVar7 = local_b50.Data.ArrayNum;
  local_c78 = CONCAT44(local_c78._4_4_,iVar7);
  if ((iVar7 == 0) && (local_c78._4_4_ == 0)) {
    local_c78 = local_b50.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar7,local_c78._4_4_,&local_c80,iVar7,(int *)((longlong)&local_c78 + 4));
    if (iVar7 != 0) {
      memcpy(local_c80.Data,FVar5.Data,(longlong)iVar7 * 2);
    }
  }
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_c48,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_e40);
  pFVar11 = (param_1->AllocatorInstance).Data;
  if ((pFVar11 <= (FScriptContainerElement *)&local_c80) &&
     ((FScriptContainerElement *)&local_c80 < pFVar11 + (longlong)param_1->ArrayMax * 0x50)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar11 = (param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x50;
  *(undefined8 *)pFVar11 = 0;
  *(FScriptContainerElement **)pFVar11 = local_c80.Data;
  local_c80.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)(pFVar11 + 8) = (undefined4)local_c78;
  *(int *)(pFVar11 + 0xc) = local_c78._4_4_;
  local_c78 = 0;
  FText::FText((FText *)(pFVar11 + 0x10),&local_c70);
  FText::FText((FText *)(pFVar11 + 0x20),&local_c60);
  *(undefined8 *)(pFVar11 + 0x30) = local_c50;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar11 + 0x38),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c48,
             (FWriteAccessScope *)&local_850);
  if ((local_c38 != 0) && (FStack_c40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_c40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_c40,0,0,0x10);
    local_c38 = 0;
  }
  if (local_850.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_850.Accessor,&local_850);
  }
  if (FStack_c40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c48);
  if (local_c60.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c60.TextData.Reference + 0x10))();
  }
  if (local_c70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c70.TextData.Reference + 0x10))();
  }
  if (local_c80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c80.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e40,
             (FWriteAccessScope *)&local_a00);
  if ((local_e38.DelegateSize != 0) &&
     (local_e38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_e38.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_e38,0,0,0x10);
    local_e38.DelegateSize = 0;
  }
  if (local_a00.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a00.Accessor,&local_a00);
  }
  if (local_e38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_e38.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e40);
  if (local_538.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_538.TextData.Reference + 0x10))();
  }
  if (local_b50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b50.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_b60,L"yy");
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_528,L"GlobalNamingTokens",L"Year2Digit",L"Year (2 digit)");
  local_e58 = (undefined1  [8])0x0;
  local_e50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_e50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e58,
             (FWriteAccessScope *)&local_798);
  local_780 = &local_e50;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_e50);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar9[3] = this;
  }
  if (local_798.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_798.Accessor,&local_798);
  }
  local_c30.Data = (FScriptContainerElement *)0x0;
  local_c28 = 0;
  FText::FText(&local_c20);
  FText::FText(&local_c10);
  TVar4.Reference = local_c20.TextData.Reference;
  local_bf8 = (undefined1  [8])0x0;
  FStack_bf0.Data = (FScriptContainerElement *)0x0;
  local_c00 = 0;
  local_be8 = 0;
  pIVar1 = (pFVar8->TextData).Reference;
  if (local_c20.TextData.Reference != pIVar1) {
    local_c20.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res20);
    }
    if (TVar4.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar4.Reference + 0x10))(TVar4.Reference);
    }
  }
  FVar5.Data = local_b60.Data.AllocatorInstance.Data;
  local_c20.Flags = pFVar8->Flags;
  iVar7 = local_b60.Data.ArrayNum;
  local_c28 = CONCAT44(local_c28._4_4_,iVar7);
  if ((iVar7 == 0) && (local_c28._4_4_ == 0)) {
    local_c28 = local_b60.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar7,local_c28._4_4_,&local_c30,iVar7,(int *)((longlong)&local_c28 + 4));
    if (iVar7 != 0) {
      memcpy(local_c30.Data,FVar5.Data,(longlong)iVar7 * 2);
    }
  }
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_bf8,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_e58);
  pFVar11 = (param_1->AllocatorInstance).Data;
  if ((pFVar11 <= (FScriptContainerElement *)&local_c30) &&
     ((FScriptContainerElement *)&local_c30 < pFVar11 + (longlong)param_1->ArrayMax * 0x50)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar11 = (param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x50;
  *(undefined8 *)pFVar11 = 0;
  *(FScriptContainerElement **)pFVar11 = local_c30.Data;
  local_c30.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)(pFVar11 + 8) = (undefined4)local_c28;
  *(int *)(pFVar11 + 0xc) = local_c28._4_4_;
  local_c28 = 0;
  FText::FText((FText *)(pFVar11 + 0x10),&local_c20);
  FText::FText((FText *)(pFVar11 + 0x20),&local_c10);
  *(undefined8 *)(pFVar11 + 0x30) = local_c00;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar11 + 0x38),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_bf8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_bf8,
             (FWriteAccessScope *)&local_9e8);
  if ((local_be8 != 0) && (FStack_bf0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_bf0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_bf0,0,0,0x10);
    local_be8 = 0;
  }
  if (local_9e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_9e8.Accessor,&local_9e8);
  }
  if (FStack_bf0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_bf0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_bf8);
  if (local_c10.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c10.TextData.Reference + 0x10))();
  }
  if (local_c20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c20.TextData.Reference + 0x10))();
  }
  if (local_c30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c30.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e58,
             (FWriteAccessScope *)&local_9d0);
  if ((local_e50.DelegateSize != 0) &&
     (local_e50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_e50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_e50,0,0,0x10);
    local_e50.DelegateSize = 0;
  }
  if (local_9d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_9d0.Accessor,&local_9d0);
  }
  if (local_e50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_e50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e58);
  if (local_528.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_528.TextData.Reference + 0x10))();
  }
  if (local_b60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b60.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a10,L"Mmm");
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_518,L"GlobalNamingTokens",L"MonthPascalCase",
                      L"3-character Month (Pascal Case)");
  local_de0 = (undefined1  [8])0x0;
  local_dd8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_dd8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_de0,
             (FWriteAccessScope *)&local_758);
  local_740 = &local_dd8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_dd8);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_5>_>
               ::_vftable_;
    puVar9[3] = this;
  }
  if (local_758.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_758.Accessor,&local_758);
  }
  FNamingTokenData::FNamingTokenData
            (&local_b40,&local_a10,pFVar8,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_de0);
  pFVar2 = (FNamingTokenData *)(param_1->AllocatorInstance).Data;
  if ((pFVar2 <= &local_b40) && (&local_b40 < pFVar2 + param_1->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar11 = (param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x50;
  *(undefined8 *)pFVar11 = 0;
  *(FScriptContainerElement **)pFVar11 = local_b40.TokenKey.Data.AllocatorInstance.Data;
  local_b40.TokenKey.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar11 + 8) = local_b40.TokenKey.Data.ArrayNum;
  *(int *)(pFVar11 + 0xc) = local_b40.TokenKey.Data.ArrayMax;
  local_b40.TokenKey.Data.ArrayNum = 0;
  local_b40.TokenKey.Data.ArrayMax = 0;
  FText::FText((FText *)(pFVar11 + 0x10),&local_b40.DisplayName);
  FText::FText((FText *)(pFVar11 + 0x20),&local_b40.Description);
  *(FName *)(pFVar11 + 0x30) = local_b40.FunctionName;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar11 + 0x38),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_b40.TokenProcessorNative);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_b40.TokenProcessorNative);
  if (local_b40.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b40.Description.TextData.Reference + 0x10))();
  }
  if (local_b40.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b40.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_b40.TokenKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b40.TokenKey.Data.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_de0,
             (FWriteAccessScope *)&local_9b8);
  if ((local_dd8.DelegateSize != 0) &&
     (local_dd8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_dd8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_dd8,0,0,0x10);
    local_dd8.DelegateSize = 0;
  }
  if (local_9b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_9b8.Accessor,&local_9b8);
  }
  if (local_dd8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_dd8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_de0);
  if (local_518.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_518.TextData.Reference + 0x10))();
  }
  if (local_a10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a10.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a30,L"MMM");
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_508,L"GlobalNamingTokens",L"MonthUpperCase",
                      L"3-character Month (UPPERCASE)");
  local_e88 = (undefined1  [8])0x0;
  local_e80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_e80.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e88,
             (FWriteAccessScope *)&local_738);
  local_720 = &local_e80;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_e80);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_6>_>
               ::_vftable_;
    puVar9[3] = this;
  }
  if (local_738.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_738.Accessor,&local_738);
  }
  FNamingTokenData::FNamingTokenData
            (&local_4a8,&local_a30,pFVar8,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_e88);
  pFVar2 = (FNamingTokenData *)(param_1->AllocatorInstance).Data;
  if ((pFVar2 <= &local_4a8) && (&local_4a8 < pFVar2 + param_1->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  FNamingTokenData::FNamingTokenData
            ((FNamingTokenData *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x50),
             &local_4a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4a8.TokenProcessorNative);
  if (local_4a8.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4a8.Description.TextData.Reference + 0x10))();
  }
  if (local_4a8.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4a8.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_4a8.TokenKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.TokenKey.Data.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e88,
             (FWriteAccessScope *)&local_9a0);
  if ((local_e80.DelegateSize != 0) &&
     (local_e80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_e80.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_e80,0,0,0x10);
    local_e80.DelegateSize = 0;
  }
  if (local_9a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_9a0.Accessor,&local_9a0);
  }
  if (local_e80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_e80.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e88);
  if (local_508.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_508.TextData.Reference + 0x10))();
  }
  if (local_a30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a30.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a20,L"mmm");
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_568,L"GlobalNamingTokens",L"MonthLowerCase",
                      L"3-character Month (lowercase)");
  local_e70 = (undefined1  [8])0x0;
  local_e68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_e68.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e70,
             (FWriteAccessScope *)&local_718);
  local_700 = &local_e68;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_e68);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_7>_>
               ::_vftable_;
    puVar9[3] = this;
  }
  if (local_718.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_718.Accessor,&local_718);
  }
  FNamingTokenData::FNamingTokenData
            (&local_458,&local_a20,pFVar8,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_e70);
  pFVar2 = (FNamingTokenData *)(param_1->AllocatorInstance).Data;
  if ((pFVar2 <= &local_458) && (&local_458 < pFVar2 + param_1->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  FNamingTokenData::FNamingTokenData
            ((FNamingTokenData *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x50),
             &local_458);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_458.TokenProcessorNative);
  if (local_458.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_458.Description.TextData.Reference + 0x10))();
  }
  if (local_458.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_458.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_458.TokenKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.TokenKey.Data.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e70,
             (FWriteAccessScope *)&local_988);
  if ((local_e68.DelegateSize != 0) &&
     (local_e68.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_e68.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_e68,0,0,0x10);
    local_e68.DelegateSize = 0;
  }
  if (local_988.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_988.Accessor,&local_988);
  }
  if (local_e68.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_e68.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e70);
  if (local_568.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_568.TextData.Reference + 0x10))();
  }
  if (local_a20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a20.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a40,L"mm");
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_4b8,L"GlobalNamingTokens",L"Month2Digit",L"Month (2 digit)");
  local_d68 = (undefined1  [8])0x0;
  local_d60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d68,
             (FWriteAccessScope *)&local_6f8);
  local_6e0 = &local_d60;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_d60);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_8>_>
               ::_vftable_;
    puVar9[3] = this;
  }
  if (local_6f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6f8.Accessor,&local_6f8);
  }
  FNamingTokenData::FNamingTokenData
            (&local_408,&local_a40,pFVar8,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_d68);
  pFVar2 = (FNamingTokenData *)(param_1->AllocatorInstance).Data;
  if ((pFVar2 <= &local_408) && (&local_408 < pFVar2 + param_1->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  FNamingTokenData::FNamingTokenData
            ((FNamingTokenData *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x50),
             &local_408);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_408.TokenProcessorNative);
  if (local_408.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_408.Description.TextData.Reference + 0x10))();
  }
  if (local_408.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_408.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_408.TokenKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.TokenKey.Data.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d68,
             (FWriteAccessScope *)&local_970);
  if ((local_d60.DelegateSize != 0) &&
     (local_d60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d60,0,0,0x10);
    local_d60.DelegateSize = 0;
  }
  if (local_970.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_970.Accessor,&local_970);
  }
  if (local_d60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d68);
  if (local_4b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4b8.TextData.Reference + 0x10))();
  }
  if (local_a40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a40.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a50,L"Ddd");
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_5d8,L"GlobalNamingTokens",L"DayPascalCase",
                      L"3-character Day (Pascal Case)");
  local_d38 = (undefined1  [8])0x0;
  local_d30.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d30.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d38,
             (FWriteAccessScope *)&local_6d8);
  local_6c0 = &local_d30;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_d30);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_9>_>
               ::_vftable_;
    puVar9[3] = this;
  }
  if (local_6d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6d8.Accessor,&local_6d8);
  }
  FNamingTokenData::FNamingTokenData
            (&local_3b8,&local_a50,pFVar8,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_d38);
  pFVar2 = (FNamingTokenData *)(param_1->AllocatorInstance).Data;
  if ((pFVar2 <= &local_3b8) && (&local_3b8 < pFVar2 + param_1->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  FNamingTokenData::FNamingTokenData
            ((FNamingTokenData *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x50),
             &local_3b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3b8.TokenProcessorNative);
  if (local_3b8.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3b8.Description.TextData.Reference + 0x10))();
  }
  if (local_3b8.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3b8.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_3b8.TokenKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.TokenKey.Data.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d38,
             (FWriteAccessScope *)&local_958);
  if ((local_d30.DelegateSize != 0) &&
     (local_d30.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d30.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d30,0,0,0x10);
    local_d30.DelegateSize = 0;
  }
  if (local_958.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_958.Accessor,&local_958);
  }
  if (local_d30.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d30.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d38);
  if (local_5d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_5d8.TextData.Reference + 0x10))();
  }
  if (local_a50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a50.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a60,L"DDD");
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_5c8,L"GlobalNamingTokens",L"DayUpperCase",
                      L"3-character Day (UPPERCASE)");
  local_d50 = (undefined1  [8])0x0;
  local_d48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d48.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d50,
             (FWriteAccessScope *)&local_5f8);
  local_5e0 = &local_d48;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_d48);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_10>_>
               ::_vftable_;
    puVar9[3] = this;
  }
  if (local_5f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5f8.Accessor,&local_5f8);
  }
  FNamingTokenData::FNamingTokenData
            (&local_368,&local_a60,pFVar8,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_d50);
  pFVar2 = (FNamingTokenData *)(param_1->AllocatorInstance).Data;
  if ((pFVar2 <= &local_368) && (&local_368 < pFVar2 + param_1->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  FNamingTokenData::FNamingTokenData
            ((FNamingTokenData *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x50),
             &local_368);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_368.TokenProcessorNative);
  if (local_368.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_368.Description.TextData.Reference + 0x10))();
  }
  if (local_368.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_368.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_368.TokenKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.TokenKey.Data.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d50,
             (FWriteAccessScope *)&local_940);
  if ((local_d48.DelegateSize != 0) &&
     (local_d48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d48.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d48,0,0,0x10);
    local_d48.DelegateSize = 0;
  }
  if (local_940.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_940.Accessor,&local_940);
  }
  if (local_d48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d48.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d50);
  if (local_5c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_5c8.TextData.Reference + 0x10))();
  }
  if (local_a60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a60.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a70,L"ddd");
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_5b8,L"GlobalNamingTokens",L"DayLowerCase",
                      L"3-character Day (lowercase)");
  local_d80 = (undefined1  [8])0x0;
  local_d78.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d78.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d80,
             (FWriteAccessScope *)&local_818);
  local_800 = &local_d78;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_d78);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_11>_>
               ::_vftable_;
    puVar9[3] = this;
  }
  if (local_818.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_818.Accessor,&local_818);
  }
  FNamingTokenData::FNamingTokenData
            (&local_318,&local_a70,pFVar8,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_d80);
  pFVar2 = (FNamingTokenData *)(param_1->AllocatorInstance).Data;
  if ((pFVar2 <= &local_318) && (&local_318 < pFVar2 + param_1->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  FNamingTokenData::FNamingTokenData
            ((FNamingTokenData *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x50),
             &local_318);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_318.TokenProcessorNative);
  if (local_318.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_318.Description.TextData.Reference + 0x10))();
  }
  if (local_318.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_318.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_318.TokenKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.TokenKey.Data.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d80,
             (FWriteAccessScope *)&local_928);
  if ((local_d78.DelegateSize != 0) &&
     (local_d78.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d78.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d78,0,0,0x10);
    local_d78.DelegateSize = 0;
  }
  if (local_928.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_928.Accessor,&local_928);
  }
  if (local_d78.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d78.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d80);
  if (local_5b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_5b8.TextData.Reference + 0x10))();
  }
  if (local_a70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a70.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a80,L"dd");
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_5a8,L"GlobalNamingTokens",L"Day2Digit",L"Day (2 digit)");
  local_d98 = (undefined1  [8])0x0;
  local_d90.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d90.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d98,
             (FWriteAccessScope *)&local_838);
  local_820 = &local_d90;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_d90);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_12>_>
               ::_vftable_;
    puVar9[3] = this;
  }
  if (local_838.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_838.Accessor,&local_838);
  }
  FNamingTokenData::FNamingTokenData
            (&local_2c8,&local_a80,pFVar8,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_d98);
  pFVar2 = (FNamingTokenData *)(param_1->AllocatorInstance).Data;
  if ((pFVar2 <= &local_2c8) && (&local_2c8 < pFVar2 + param_1->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  FNamingTokenData::FNamingTokenData
            ((FNamingTokenData *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x50),
             &local_2c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2c8.TokenProcessorNative);
  if (local_2c8.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2c8.Description.TextData.Reference + 0x10))();
  }
  if (local_2c8.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2c8.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_2c8.TokenKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.TokenKey.Data.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d98,
             (FWriteAccessScope *)&local_910);
  if ((local_d90.DelegateSize != 0) &&
     (local_d90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d90.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d90,0,0,0x10);
    local_d90.DelegateSize = 0;
  }
  if (local_910.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_910.Accessor,&local_910);
  }
  if (local_d90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d90.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d98);
  if (local_5a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_5a8.TextData.Reference + 0x10))();
  }
  if (local_a80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a80.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_ac0,L"ampm");
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_598,L"GlobalNamingTokens",L"AMPMLowerCase",L"am or pm (lowercase)");
  local_e10 = (undefined1  [8])0x0;
  local_e08.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_e08.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e10,
             (FWriteAccessScope *)&local_778);
  local_760 = &local_e08;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_e08);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_13>_>
               ::_vftable_;
    puVar9[3] = this;
  }
  if (local_778.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_778.Accessor,&local_778);
  }
  FNamingTokenData::FNamingTokenData
            (&local_278,&local_ac0,pFVar8,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_e10);
  pFVar2 = (FNamingTokenData *)(param_1->AllocatorInstance).Data;
  if ((pFVar2 <= &local_278) && (&local_278 < pFVar2 + param_1->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  FNamingTokenData::FNamingTokenData
            ((FNamingTokenData *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x50),
             &local_278);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_278.TokenProcessorNative);
  if (local_278.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_278.Description.TextData.Reference + 0x10))();
  }
  if (local_278.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_278.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_278.TokenKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.TokenKey.Data.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e10,
             (FWriteAccessScope *)&local_8f8);
  if ((local_e08.DelegateSize != 0) &&
     (local_e08.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_e08.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_e08,0,0,0x10);
    local_e08.DelegateSize = 0;
  }
  if (local_8f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8f8.Accessor,&local_8f8);
  }
  if (local_e08.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_e08.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e10);
  if (local_598.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_598.TextData.Reference + 0x10))();
  }
  if (local_ac0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ac0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_ad0,L"AMPM");
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_588,L"GlobalNamingTokens",L"AMPMUpperCase",L"AM or PM (UPPERCASE)");
  local_db0 = (undefined1  [8])0x0;
  local_da8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_da8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_db0,
             (FWriteAccessScope *)&local_6b8);
  local_6a0 = &local_da8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_da8);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_14>_>
               ::_vftable_;
    puVar9[3] = this;
  }
  if (local_6b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6b8.Accessor,&local_6b8);
  }
  FNamingTokenData::FNamingTokenData
            (&local_228,&local_ad0,pFVar8,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_db0);
  pFVar2 = (FNamingTokenData *)(param_1->AllocatorInstance).Data;
  if ((pFVar2 <= &local_228) && (&local_228 < pFVar2 + param_1->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  FNamingTokenData::FNamingTokenData
            ((FNamingTokenData *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x50),
             &local_228);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_228.TokenProcessorNative);
  if (local_228.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_228.Description.TextData.Reference + 0x10))();
  }
  if (local_228.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_228.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_228.TokenKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.TokenKey.Data.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_db0,
             (FWriteAccessScope *)&local_8e0);
  if ((local_da8.DelegateSize != 0) &&
     (local_da8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_da8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_da8,0,0,0x10);
    local_da8.DelegateSize = 0;
  }
  if (local_8e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8e0.Accessor,&local_8e0);
  }
  if (local_da8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_da8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_db0);
  if (local_588.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_588.TextData.Reference + 0x10))();
  }
  if (local_ad0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ad0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_af0,L"12h");
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_4c8,L"GlobalNamingTokens",L"Hour12",L"Hour (12)");
  local_dc8 = (undefined1  [8])0x0;
  local_dc0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_dc0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_dc8,
             (FWriteAccessScope *)&local_698);
  local_680 = &local_dc0;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_dc0);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_15>_>
               ::_vftable_;
    puVar9[3] = this;
  }
  if (local_698.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_698.Accessor,&local_698);
  }
  FNamingTokenData::FNamingTokenData
            (&local_1d8,&local_af0,pFVar8,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_dc8);
  pFVar2 = (FNamingTokenData *)(param_1->AllocatorInstance).Data;
  if ((pFVar2 <= &local_1d8) && (&local_1d8 < pFVar2 + param_1->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  FNamingTokenData::FNamingTokenData
            ((FNamingTokenData *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x50),
             &local_1d8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1d8.TokenProcessorNative);
  if (local_1d8.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1d8.Description.TextData.Reference + 0x10))();
  }
  if (local_1d8.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1d8.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_1d8.TokenKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.TokenKey.Data.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_dc8,
             (FWriteAccessScope *)&local_8c8);
  if ((local_dc0.DelegateSize != 0) &&
     (local_dc0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_dc0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_dc0,0,0,0x10);
    local_dc0.DelegateSize = 0;
  }
  if (local_8c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8c8.Accessor,&local_8c8);
  }
  if (local_dc0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_dc0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_dc8);
  if (local_4c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4c8.TextData.Reference + 0x10))();
  }
  if (local_af0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_af0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a90,L"24h");
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_4d8,L"GlobalNamingTokens",L"Hour24",L"Hour (24)");
  local_b98 = (undefined1  [8])0x0;
  local_b90.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b90.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b98,
             (FWriteAccessScope *)&local_678);
  local_660 = &local_b90;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_b90);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_16>_>
               ::_vftable_;
    puVar9[3] = this;
  }
  if (local_678.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_678.Accessor,&local_678);
  }
  FNamingTokenData::FNamingTokenData
            (&local_188,&local_a90,pFVar8,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_b98);
  pFVar2 = (FNamingTokenData *)(param_1->AllocatorInstance).Data;
  if ((pFVar2 <= &local_188) && (&local_188 < pFVar2 + param_1->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  FNamingTokenData::FNamingTokenData
            ((FNamingTokenData *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x50),
             &local_188);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_188.TokenProcessorNative);
  if (local_188.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_188.Description.TextData.Reference + 0x10))();
  }
  if (local_188.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_188.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_188.TokenKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.TokenKey.Data.AllocatorInstance.Data);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b98);
  if (local_4d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4d8.TextData.Reference + 0x10))();
  }
  if (local_a90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a90.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_ae0,L"min");
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_4e8,L"GlobalNamingTokens",L"Minute",L"Minute");
  local_be0 = (undefined1  [8])0x0;
  local_bd8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_bd8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_be0,
             (FWriteAccessScope *)&local_658);
  local_640 = &local_bd8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_bd8);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_17>_>
               ::_vftable_;
    puVar9[3] = this;
  }
  if (local_658.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_658.Accessor,&local_658);
  }
  FNamingTokenData::FNamingTokenData
            (&local_138,&local_ae0,pFVar8,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_be0);
  pFVar2 = (FNamingTokenData *)(param_1->AllocatorInstance).Data;
  if ((pFVar2 <= &local_138) && (&local_138 < pFVar2 + param_1->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  FNamingTokenData::FNamingTokenData
            ((FNamingTokenData *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x50),
             &local_138);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_138.TokenProcessorNative);
  if (local_138.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.Description.TextData.Reference + 0x10))();
  }
  if (local_138.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_138.TokenKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.TokenKey.Data.AllocatorInstance.Data);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_be0);
  if (local_4e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4e8.TextData.Reference + 0x10))();
  }
  if (local_ae0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ae0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_aa0,L"sec");
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_4f8,L"GlobalNamingTokens",L"Second",L"Second");
  local_bc8 = (undefined1  [8])0x0;
  local_bc0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_bc0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_bc8,
             (FWriteAccessScope *)&local_638);
  local_620 = &local_bc0;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_bc0);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_18>_>
               ::_vftable_;
    puVar9[3] = this;
  }
  if (local_638.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_638.Accessor,&local_638);
  }
  FNamingTokenData::FNamingTokenData
            (&local_e8,&local_aa0,pFVar8,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_bc8);
  pFVar2 = (FNamingTokenData *)(param_1->AllocatorInstance).Data;
  if ((pFVar2 <= &local_e8) && (&local_e8 < pFVar2 + param_1->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  FNamingTokenData::FNamingTokenData
            ((FNamingTokenData *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x50),
             &local_e8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_e8.TokenProcessorNative);
  if (local_e8.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.Description.TextData.Reference + 0x10))();
  }
  if (local_e8.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_e8.TokenKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.TokenKey.Data.AllocatorInstance.Data);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_bc8);
  if (local_4f8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4f8.TextData.Reference + 0x10))();
  }
  if (local_aa0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_aa0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_ab0,L"ms");
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_578,L"GlobalNamingTokens",L"Millisecond",L"Millisecond");
  local_bb0 = (undefined1  [8])0x0;
  local_ba8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_ba8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_bb0,
             (FWriteAccessScope *)&local_618);
  local_600 = &local_ba8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_ba8);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UGlobalNamingTokens::OnCreateDefaultTokens'::`2'::<lambda_19>_>
               ::_vftable_;
    puVar9[3] = this;
  }
  if (local_618.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_618.Accessor,&local_618);
  }
  FNamingTokenData::FNamingTokenData
            (&local_98,&local_ab0,pFVar8,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_bb0);
  pFVar2 = (FNamingTokenData *)(param_1->AllocatorInstance).Data;
  if ((pFVar2 <= &local_98) && (&local_98 < pFVar2 + param_1->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  FNamingTokenData::FNamingTokenData
            ((FNamingTokenData *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x50),
             &local_98);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_98.TokenProcessorNative);
  if (local_98.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.Description.TextData.Reference + 0x10))();
  }
  if (local_98.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_98.TokenKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.TokenKey.Data.AllocatorInstance.Data);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_bb0);
  if (local_578.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_578.TextData.Reference + 0x10))();
  }
  if (local_ab0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ab0.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUGlobalNamingTokens @ 14d0e5cb0

void __cdecl UGlobalNamingTokens::StaticRegisterNativesUGlobalNamingTokens(void)

{
  return;
}

