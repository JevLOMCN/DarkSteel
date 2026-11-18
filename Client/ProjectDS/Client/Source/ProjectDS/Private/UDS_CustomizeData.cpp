// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b479840

UClass * __cdecl UDS_CustomizeData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CustomizeData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CustomizeData",
               &Z_Registration_Info_UClass_UDS_CustomizeData.InnerSingleton,
               StaticRegisterNativesUDS_CustomizeData,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CustomizeData>,
               InternalVTableHelperCtorCaller<UDS_CustomizeData>,local_res8,
               UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CustomizeData.InnerSingleton;
}

// UDS_CustomizeData @ 14b47d530

UDS_CustomizeData * __thiscall
UDS_CustomizeData::UDS_CustomizeData(UDS_CustomizeData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_CustomizeData__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->CharacterCustomInfo).CharID = 1;
  (this->CharacterCustomInfo).HairType.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharacterCustomInfo).HairType.Data.ArrayNum = 0;
  (this->CharacterCustomInfo).HairType.Data.ArrayMax = 0;
  (this->CharacterCustomInfo).HeadType.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharacterCustomInfo).HeadType.Data.ArrayNum = 0;
  (this->CharacterCustomInfo).HeadType.Data.ArrayMax = 0;
  return this;
}

// ~UDS_CustomizeData @ 14b47dd90

void __thiscall UDS_CustomizeData::~UDS_CustomizeData(UDS_CustomizeData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_CustomizeData__6B_;
  pFVar1 = (this->CharacterCustomInfo).HeadType.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CharacterCustomInfo).HairType.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UDS_DataBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b47eff0

UClass * __cdecl UDS_CustomizeData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CustomizeData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CustomizeData",
               &Z_Registration_Info_UClass_UDS_CustomizeData.InnerSingleton,
               StaticRegisterNativesUDS_CustomizeData,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CustomizeData>,
               InternalVTableHelperCtorCaller<UDS_CustomizeData>,local_res8,
               UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CustomizeData.InnerSingleton;
}

// StaticRegisterNativesUDS_CustomizeData @ 14b47f5b0

void __cdecl UDS_CustomizeData::StaticRegisterNativesUDS_CustomizeData(void)

{
  return;
}

// UDS_CustomizeData @ 14ba329a0

UDS_CustomizeData * __thiscall
UDS_CustomizeData::UDS_CustomizeData(UDS_CustomizeData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_CustomizeData__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->CharacterCustomInfo).CharID = 1;
  (this->CharacterCustomInfo).HairType.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharacterCustomInfo).HairType.Data.ArrayNum = 0;
  (this->CharacterCustomInfo).HairType.Data.ArrayMax = 0;
  (this->CharacterCustomInfo).HeadType.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharacterCustomInfo).HeadType.Data.ArrayNum = 0;
  (this->CharacterCustomInfo).HeadType.Data.ArrayMax = 0;
  return this;
}

// GetData @ 14ba48190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_CustomizeData,FWeakObjectPtr> __cdecl
UDS_CustomizeData::GetData(ulong64 param_1,ulong64 param_2,bool param_3)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *pUVar3;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> TVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined7 in_register_00000081;
  char in_R9B;
  undefined1 auStack_f8 [32];
  FWeakObjectPtr local_d8;
  UObject *local_d0;
  FWeakObjectPtr local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (in_R9B == '\0') {
    TDS_DataSetGetter<UDS_CustomizeDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_CustomizeDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CustomizeDataSet,FWeakObjectPtr> *)&local_c8,(void *)0x0)
    ;
    if (bVar2) goto LAB_14ba4841f;
    pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
    TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
LAB_14ba4822b:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_CustomizeData_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14ba4822b;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_d8.ObjectIndex = 0;
    local_d8.ObjectSerialNumber = 0;
    local_d0 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_d0);
    bVar2 = TWeakObjectPtr<UDS_CustomizeData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CustomizeData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
    if (!bVar2) {
      *(FWeakObjectPtr *)param_1 = local_d8;
      return (TWeakObjectPtr<UDS_CustomizeData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
    }
  }
  else {
    TDS_DataSetGetter<UDS_CustomizeDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_CustomizeDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CustomizeDataSet,FWeakObjectPtr> *)&local_c8,(void *)0x0)
    ;
    if (!bVar2) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
      TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
LAB_14ba482f5:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_CustomizeData_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14ba482f5;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      local_d8.ObjectIndex = 0;
      local_d8.ObjectSerialNumber = 0;
      local_d0 = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_d0);
      bVar2 = TWeakObjectPtr<UDS_CustomizeData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_CustomizeData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
      if (!bVar2) {
        *(FWeakObjectPtr *)param_1 = local_d8;
        return (TWeakObjectPtr<UDS_CustomizeData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pUVar5 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar5,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UDS_CustomizeData_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar6);
      local_b8._8_8_ = pUVar5;
      pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar7 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (pUVar5 != (UObject *)0x0) {
        pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
        local_d0 = pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        bVar2 = UDS_DataSetBase::AddData
                          (pUVar3,CONCAT71(in_register_00000081,param_3),
                           (TObjectPtr<UDS_DataBase>)&local_d0);
        if (bVar2) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          *(undefined8 *)param_1 = 0;
          local_d0 = pUVar5;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          goto LAB_14ba48426;
        }
      }
    }
  }
LAB_14ba4841f:
  *(undefined8 *)param_1 = 0;
  local_d0 = (UObject *)0x0;
LAB_14ba48426:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_d0);
  return (TWeakObjectPtr<UDS_CustomizeData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// SetCharID @ 14ba6aa40

void __thiscall UDS_CustomizeData::SetCharID(UDS_CustomizeData *this,int param_1)

{
  (this->CharacterCustomInfo).CharID = param_1;
  return;
}

// SetCustomInfo @ 14ba6c3e0

void __thiscall
UDS_CustomizeData::SetCustomInfo
          (UDS_CustomizeData *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  uchar *puVar4;
  CharacterCustomHead *pCVar5;
  FString local_98;
  FString local_88;
  FString local_78;
  CharacterCustomInfo local_68;
  
  client_msg::CharacterCustomInfo::CharacterCustomInfo(&local_68,(Arena *)0x0);
  local_68._padding_ = (longlong)&___7CharacterCustomInfo_client_msg__6B_;
  pbVar3 = param_1;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  ::FString::FString(&local_78,(char *)pbVar3);
  DS_JsonStringToProtoMessage<client_msg::CharacterCustomInfo>(&local_68,&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  (this->CharacterCustomInfo).CharID = local_68._impl_.gender_;
  (this->CharacterCustomInfo).VoiceType = local_68._impl_.voice_type_;
  (this->CharacterCustomInfo).VoiceTone = local_68._impl_.pitch_;
  pCVar5 = &client_msg::_CharacterCustomHead_default_instance_._instance;
  if (local_68._impl_.head_info_ != (CharacterCustomHead *)0x0) {
    pCVar5 = local_68._impl_.head_info_;
  }
  puVar4 = (uchar *)((ulonglong)(pCVar5->_impl_).hair_type_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(puVar4 + 0x18)) {
    puVar4 = *(uchar **)puVar4;
  }
  ::FString::FString(&local_98,puVar4);
  pFVar1 = &(this->CharacterCustomInfo).HairType;
  if (pFVar1 != &local_98) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
    (this->CharacterCustomInfo).HairType.Data.ArrayNum = local_98.Data.ArrayNum;
    (this->CharacterCustomInfo).HairType.Data.ArrayMax = local_98.Data.ArrayMax;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  puVar4 = (uchar *)((ulonglong)(pCVar5->_impl_).head_type_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(puVar4 + 0x18)) {
    puVar4 = *(uchar **)puVar4;
  }
  ::FString::FString(&local_88,puVar4);
  pFVar1 = &(this->CharacterCustomInfo).HeadType;
  if (pFVar1 != &local_88) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    (this->CharacterCustomInfo).HeadType.Data.ArrayNum = local_88.Data.ArrayNum;
    (this->CharacterCustomInfo).HeadType.Data.ArrayMax = local_88.Data.ArrayMax;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  client_msg::CharacterCustomInfo::~CharacterCustomInfo(&local_68);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(param_1);
  return;
}

