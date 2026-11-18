// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 79

// StaticClass @ 14dcf9200

UClass * __cdecl UMovieJobVariableAssignmentContainer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieJobVariableAssignmentContainer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieJobVariableAssignmentContainer",
               &Z_Registration_Info_UClass_UMovieJobVariableAssignmentContainer.InnerSingleton,
               StaticRegisterNativesUMovieJobVariableAssignmentContainer,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieJobVariableAssignmentContainer>,
               InternalVTableHelperCtorCaller<UMovieJobVariableAssignmentContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieJobVariableAssignmentContainer.InnerSingleton;
}

// UMovieJobVariableAssignmentContainer @ 14dd0bde0

UMovieJobVariableAssignmentContainer * __thiscall
UMovieJobVariableAssignmentContainer::UMovieJobVariableAssignmentContainer
          (UMovieJobVariableAssignmentContainer *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieJobVariableAssignmentContainer__6B_;
  FInstancedStruct::FInstancedStruct(&(this->Value).Value);
  this_00 = &(this->GraphPreset).SoftObjectPtr.field_0x18;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->GraphPreset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->GraphPreset).SoftObjectPtr = 0;
  *(undefined8 *)&(this->GraphPreset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->GraphPreset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// ~UMovieJobVariableAssignmentContainer @ 14dd0e130

void __thiscall
UMovieJobVariableAssignmentContainer::~UMovieJobVariableAssignmentContainer
          (UMovieJobVariableAssignmentContainer *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieJobVariableAssignmentContainer__6B_;
  pvVar1 = *(void **)&(this->GraphPreset).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FInstancedStruct::Reset(&(this->Value).Value);
  UObject::~UObject((UObject *)this);
  return;
}

// AddVariableAssignment @ 14dd132a0

bool __thiscall
UMovieJobVariableAssignmentContainer::AddVariableAssignment
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1)

{
  void *_Src;
  bool bVar1;
  FName *pFVar2;
  FPropertyBagPropertyDesc *pFVar3;
  int iVar4;
  longlong lVar5;
  FName local_res10;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  if (param_1 == (UMovieGraphVariable *)0x0) {
    return false;
  }
  _Src = (void *)param_1->_padding_;
  local_20 = (int)param_1->_padding_;
  lVar5 = (longlong)local_20;
  local_28.Data = (FScriptContainerElement *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,_Src,lVar5 * 2);
  }
  iVar4 = local_20 + -1;
  if (local_20 == 0) {
    iVar4 = 0;
  }
  pFVar2 = ::FName::FName(&local_res10,iVar4,(wchar_t *)local_28.Data,FNAME_Add);
  pFVar3 = FInstancedPropertyBag::FindPropertyDescByName(&this->Value,*pFVar2);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  if ((pFVar3 == (FPropertyBagPropertyDesc *)0x0) &&
     (bVar1 = GenerateVariableOverride
                        (this,param_1,(FPropertyBagPropertyDesc *)0x0,
                         (FPropertyBagPropertyDesc *)0x0), !bVar1)) {
    return false;
  }
  return true;
}

// ConvertVariableToInternalName @ 14dd18e90

FName __thiscall
UMovieJobVariableAssignmentContainer::ConvertVariableToInternalName
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1)

{
  bool bVar1;
  UMovieGraphVariable *in_R8;
  TObjectPtr<UObject_const_>_u_0 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  TObjectPtr<UObject_const_>_u_0 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_70 = 1;
  local_98.DebugPtr = (UObject *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0xffffffff;
  local_58.DebugPtr = (UObject *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 1;
  local_28 = 0;
  local_20 = 0xffffffff;
  bVar1 = FindOrGenerateVariableOverride
                    (this,in_R8,(FPropertyBagPropertyDesc *)&local_98.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_58.ObjectPtr,false);
  if (bVar1) {
    param_1->_padding_ = local_80;
    return (FName)param_1;
  }
  param_1->_padding_ = 0;
  return (FName)param_1;
}

// FindOrGenerateVariableOverride @ 14dd1f810

bool __thiscall
UMovieJobVariableAssignmentContainer::FindOrGenerateVariableOverride
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,
          FPropertyBagPropertyDesc *param_2,FPropertyBagPropertyDesc *param_3,bool param_4)

{
  void *_Src;
  bool bVar1;
  FName *pFVar2;
  FPropertyBagPropertyDesc *pFVar3;
  int iVar4;
  longlong lVar5;
  FName local_res10;
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FString local_78;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  
  if (param_1 != (UMovieGraphVariable *)0x0) {
    local_a0 = (int)param_1->_padding_;
    lVar5 = (longlong)local_a0;
    _Src = (void *)param_1->_padding_;
    local_a8.Data = (FScriptContainerElement *)0x0;
    if (local_a0 == 0) {
      local_9c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_a0,0,&local_a8,local_a0,&local_9c);
      memcpy(local_a8.Data,_Src,lVar5 * 2);
    }
    iVar4 = local_a0 + -1;
    if (local_a0 == 0) {
      iVar4 = 0;
    }
    pFVar2 = ::FName::FName(&local_res10,iVar4,(wchar_t *)local_a8.Data,FNAME_Add);
    pFVar3 = FInstancedPropertyBag::FindPropertyDescByName(&this->Value,*pFVar2);
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
    if (pFVar3 != (FPropertyBagPropertyDesc *)0x0) {
      if (param_2 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=(param_2,pFVar3);
      }
      if (param_3 != (FPropertyBagPropertyDesc *)0x0) {
        FStringFormatArg::FStringFormatArg(&local_68,EditConditionPrefix);
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
        FGuid::AppendString(&pFVar3->ID,&local_88,Digits);
        FStringFormatArg::FStringFormatArg(&local_48,&local_88);
        local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.ArrayNum = 2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,2,0,&local_98.AllocatorInstance,2,&local_98.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_98.AllocatorInstance.Data,&local_68,2);
        ::FString::FormatImpl(&local_78,L"{0}{1}",&local_98);
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
        if ((FStringFormatArg *)local_98.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_98.AllocatorInstance.Data);
        }
        if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
        }
        if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
        }
        iVar4 = local_78.Data.ArrayNum + -1;
        if (local_78.Data.ArrayNum == 0) {
          iVar4 = 0;
        }
        pFVar2 = ::FName::FName(&local_res10,iVar4,(wchar_t *)local_78.Data.AllocatorInstance.Data,
                                FNAME_Add);
        pFVar3 = FInstancedPropertyBag::FindPropertyDescByName(&this->Value,*pFVar2);
        if (pFVar3 != (FPropertyBagPropertyDesc *)0x0) {
          FPropertyBagPropertyDesc::operator=(param_3,pFVar3);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      return true;
    }
    if (param_4) {
      bVar1 = GenerateVariableOverride(this,param_1,param_2,param_3);
      return bVar1;
    }
  }
  return false;
}

// GenerateVariableOverride @ 14dd22850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMovieJobVariableAssignmentContainer::GenerateVariableOverride
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,
          FPropertyBagPropertyDesc *param_2,FPropertyBagPropertyDesc *param_3)

{
  void *_Src;
  FName FVar1;
  EMovieGraphContainerType EVar2;
  FName *pFVar3;
  FGuid *pFVar4;
  int iVar5;
  int iVar6;
  undefined1 auStackY_148 [32];
  ushort local_108;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_100;
  FString local_f0;
  FString local_e0;
  FGuid local_d0;
  UObject *local_b8;
  FGuid local_b0;
  FName local_a0;
  EMovieGraphValueType local_98;
  ushort local_97;
  uchar local_95;
  undefined4 local_94;
  ulong64 local_90;
  FProperty *local_88;
  int local_80;
  undefined4 local_7c;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_90 = 1;
  local_94 = 0;
  local_7c = 0;
  local_b0.A = 0;
  local_b0.B = 0;
  local_b0.C = 0;
  local_b0.D = 0;
  local_88 = (FProperty *)0x0;
  local_80 = -1;
  local_98 = UMovieGraphValueContainer::GetValueType((UMovieGraphValueContainer *)param_1);
  local_b8 = UMovieGraphValueContainer::GetValueTypeObject((UMovieGraphValueContainer *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_b8);
  }
  EVar2 = UMovieGraphValueContainer::GetValueContainerType((UMovieGraphValueContainer *)param_1);
  local_108 = 0;
  local_95 = EVar2 != None;
  if ((bool)local_95) {
    local_108 = (ushort)EVar2;
  }
  iVar6 = (int)param_1->_padding_;
  _Src = (void *)param_1->_padding_;
  local_97 = local_108;
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = iVar6;
  if (iVar6 == 0) {
    local_100.ArrayNum = 0;
    local_100.ArrayMax = 0;
    iVar6 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar6,0,&local_100.AllocatorInstance,iVar6,&local_100.ArrayMax);
    memcpy(local_100.AllocatorInstance.Data,_Src,(longlong)iVar6 * 2);
    iVar6 = local_100.ArrayNum;
  }
  iVar5 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar5 = 0;
  }
  pFVar3 = ::FName::FName((FName *)&local_f0,iVar5,(wchar_t *)local_100.AllocatorInstance.Data,
                          FNAME_Add);
  local_a0 = *pFVar3;
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  pFVar4 = FGuid::NewGuid(&local_d0);
  local_b0.A = pFVar4->A;
  local_b0.B = pFVar4->B;
  local_b0.C = pFVar4->C;
  local_b0.D = pFVar4->D;
  FStringFormatArg::FStringFormatArg(&local_78,EditConditionPrefix);
  local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.Data.ArrayNum = 0;
  local_f0.Data.ArrayMax = 0;
  FGuid::AppendString(&local_b0,&local_f0,Digits);
  FStringFormatArg::FStringFormatArg(&local_58,&local_f0);
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_100.AllocatorInstance,2,&local_100.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_100.AllocatorInstance.Data,&local_78,2);
  ::FString::FormatImpl(&local_e0,L"{0}{1}",&local_100);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_100.AllocatorInstance.Data,local_100.ArrayNum);
  if ((FStringFormatArg *)local_100.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
  }
  iVar6 = local_e0.Data.ArrayNum + -1;
  if (local_e0.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  pFVar3 = ::FName::FName((FName *)&local_f0,iVar6,(wchar_t *)local_e0.Data.AllocatorInstance.Data,
                          FNAME_Add);
  local_58.Type._1_2_ = Int >> 8;
  FVar1 = *pFVar3;
  pFVar4 = FGuid::NewGuid(&local_d0);
  local_100.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar4;
  local_100.ArrayNum = pFVar4->C;
  local_100.ArrayMax = pFVar4->D;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_b8);
  }
  (param_2->ValueTypeObject).field0_0x0.DebugPtr = local_b8;
  param_2->Name = local_a0;
  param_2->ValueType = local_98;
  *(ushort *)(param_2->ContainerTypes).Types.Elements = local_97;
  (param_2->ContainerTypes).NumContainers = local_95;
  param_2->PropertyFlags = local_90;
  param_2->CachedProperty = local_88;
  param_2->CachedIndex = local_80;
  (param_2->ID).A = local_b0.A;
  (param_2->ID).B = local_b0.B;
  (param_2->ID).C = local_b0.C;
  (param_2->ID).D = local_b0.D;
  (param_3->ValueTypeObject).field0_0x0.DebugPtr = (UObject *)0x0;
  *(undefined2 *)(param_3->ContainerTypes).Types.Elements = local_58.Type._1_2_;
  (param_3->ContainerTypes).NumContainers = '\0';
  param_3->Name = FVar1;
  param_3->ValueType = Bool;
  param_3->PropertyFlags = 1;
  param_3->CachedProperty = (FProperty *)0x0;
  param_3->CachedIndex = -1;
  *(FScriptContainerElement **)&param_3->ID = local_100.AllocatorInstance.Data;
  (param_3->ID).C = local_100.ArrayNum;
  (param_3->ID).D = local_100.ArrayMax;
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetGraphConfig @ 14dd26530

TSoftObjectPtr<UMovieGraphConfig> * __thiscall
UMovieJobVariableAssignmentContainer::GetGraphConfig
          (UMovieJobVariableAssignmentContainer *this,
          TSoftObjectPtr<UMovieGraphConfig> *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->SoftObjectPtr =
       *(undefined8 *)&(this->GraphPreset).SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)&(__return_storage_ptr__->SoftObjectPtr).field_0x8,
             (FSoftObjectPath *)&(this->GraphPreset).SoftObjectPtr.field_0x8);
  return __return_storage_ptr__;
}

// GetNumAssignments @ 14dd29330

uint __thiscall
UMovieJobVariableAssignmentContainer::GetNumAssignments(UMovieJobVariableAssignmentContainer *this)

{
  code *pcVar1;
  uint uVar2;
  wchar_t *pwVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UPropertyBag *pUVar7;
  FString *this_00;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FString local_18;
  size_t sVar8;
  
  pUVar7 = FInstancedPropertyBag::GetPropertyBagStruct(&this->Value);
  if (pUVar7 == (UPropertyBag *)0x0) {
    return 0;
  }
  pFVar9 = (pUVar7->PropertyDescs).AllocatorInstance.Data;
  iVar6 = (pUVar7->PropertyDescs).ArrayNum;
  if ((iVar6 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  pFVar10 = pFVar9 + (longlong)iVar6 * 0x40;
  uVar5 = 0;
  for (; pFVar9 != pFVar10; pFVar9 = pFVar9 + 0x40) {
    this_00 = ::FName::ToString((FName *)(pFVar9 + 0x18),&local_18);
    pwVar3 = EditConditionPrefix;
    if (EditConditionPrefix == (wchar_t *)0x0) {
      iVar6 = 0;
    }
    else {
      sVar8 = wcslen(EditConditionPrefix);
      iVar6 = (int)sVar8;
    }
    bVar4 = ::FString::StartsWith(this_00,pwVar3,iVar6,IgnoreCase);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    uVar2 = uVar5 + 1;
    if (bVar4) {
      uVar2 = uVar5;
    }
    uVar5 = uVar2;
  }
  return uVar5;
}

// GetPrivateStaticClass @ 14dd2da80

UClass * __cdecl UMovieJobVariableAssignmentContainer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieJobVariableAssignmentContainer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieJobVariableAssignmentContainer",
               &Z_Registration_Info_UClass_UMovieJobVariableAssignmentContainer.InnerSingleton,
               StaticRegisterNativesUMovieJobVariableAssignmentContainer,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieJobVariableAssignmentContainer>,
               InternalVTableHelperCtorCaller<UMovieJobVariableAssignmentContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieJobVariableAssignmentContainer.InnerSingleton;
}

// GetValueBool @ 14dd30420

bool __thiscall
UMovieJobVariableAssignmentContainer::GetValueBool
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  bool local_b8;
  byte local_b7;
  undefined8 local_b4;
  TObjectPtr<UObject_const_>_u_0 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  TObjectPtr<UObject_const_>_u_0 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  local_80 = 1;
  local_a8.DebugPtr = (UObject *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_68.DebugPtr = (UObject *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_70 = 0xffffffff;
  local_40 = 1;
  local_30 = 0xffffffff;
  bVar2 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_a8.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_68.ObjectPtr,false);
  if (!bVar2) {
    local_b4 = 0;
  }
  FInstancedPropertyBag::GetValueBool(&this->Value,(FName)&local_b8);
  uVar4 = (ulonglong)local_b7;
  if ((2 < uVar4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    return false;
  }
  if ((local_b7 != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((2 < local_b7) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_b7])(&local_b8);
  *param_2 = local_b8;
  return true;
}

// GetValueByte @ 14dd305a0

bool __thiscall
UMovieJobVariableAssignmentContainer::GetValueByte
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,uchar *param_2)

{
  bool bVar1;
  TValueOrError<unsigned_char,EPropertyBagResult> local_a8 [2];
  undefined8 local_a4;
  TObjectPtr<UObject_const_>_u_0 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  TObjectPtr<UObject_const_>_u_0 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_70 = 1;
  local_98.DebugPtr = (UObject *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_58.DebugPtr = (UObject *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_60 = 0xffffffff;
  local_30 = 1;
  local_20 = 0xffffffff;
  bVar1 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_98.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_58.ObjectPtr,false);
  if (!bVar1) {
    local_a4 = 0;
  }
  FInstancedPropertyBag::GetValueByte(&this->Value,(FName)local_a8);
  bVar1 = UE::MovieGraph::Private::GetOptionalValue<unsigned_char>(local_a8,param_2);
  return bVar1;
}

// GetValueClass @ 14dd30660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMovieJobVariableAssignmentContainer::GetValueClass
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,UClass **param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  FName FVar5;
  undefined1 auStack_108 [32];
  TObjectPtr<UObject_const_>_u_0 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  FName local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  TObjectPtr<UObject_const_>_u_0 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  TValueOrError<UClass_*,EPropertyBagResult> local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  FVar5.ComparisonIndex.Value = 0;
  FVar5.Number = 0;
  local_a0 = 1;
  local_c8.DebugPtr = (UObject *)0x0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  local_a8 = 0;
  local_98 = 0;
  local_88.DebugPtr = (UObject *)0x0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_90 = 0xffffffff;
  local_60 = 1;
  local_50 = 0xffffffff;
  bVar2 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_c8.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_88.ObjectPtr,false);
  if (bVar2) {
    FVar5 = local_b0;
  }
  FInstancedPropertyBag::GetValueClass(&this->Value,&local_48,FVar5);
  uVar4 = (ulonglong)local_48.Variant.TypeIndex;
  if ((2 < uVar4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UClass*___ptr64,UClass*___ptr64,TValueOrError<UClass*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    bVar2 = false;
  }
  else {
    if ((local_48.Variant.TypeIndex != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if ((2 < local_48.Variant.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UClass*___ptr64,TValueOrError<UClass*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_48.Variant.TypeIndex])(&local_48);
    bVar2 = true;
    *param_2 = (UClass *)local_48.Variant._padding_;
  }
  return bVar2;
}

// GetValueContainer @ 14dd307e0

bool __thiscall
UMovieJobVariableAssignmentContainer::GetValueContainer
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,
          TObjectPtr<UMovieGraphValueContainer> *param_2)

{
  bool bVar1;
  FPropertyBagPropertyDesc *pFVar2;
  UObject *pUVar3;
  UMovieGraphValueContainer *this_00;
  FString *pFVar4;
  FName FVar5;
  FName FVar6;
  FString local_b8;
  TObjectPtr<UObject_const_>_u_0 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  FName local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  TObjectPtr<UObject_const_>_u_0 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  local_80 = 1;
  local_a8.DebugPtr = (UObject *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  local_88 = 0;
  local_78 = 0;
  local_68.DebugPtr = (UObject *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_70 = 0xffffffff;
  local_40 = 1;
  local_30 = 0xffffffff;
  bVar1 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_a8.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_68.ObjectPtr,false);
  FVar5 = local_90;
  if (!bVar1) {
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar5 = FVar6;
  }
  pFVar2 = FInstancedPropertyBag::FindPropertyDescByName(&this->Value,FVar5);
  bVar1 = false;
  if (pFVar2 != (FPropertyBagPropertyDesc *)0x0) {
    pUVar3 = GetTransientPackageAsObject();
    this_00 = NewObject<UMovieGraphValueContainer>(pUVar3);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UMovieGraphValueContainer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (param_2->field0_0x0).DebugPtr = this_00;
    pFVar4 = GetValueSerializedString(this,&local_b8,param_1);
    UMovieGraphValueContainer::SetFromDesc(this_00,pFVar2,pFVar4);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    bVar1 = true;
  }
  return bVar1;
}

// GetValueContainerType @ 14dd30900

EMovieGraphContainerType __thiscall
UMovieJobVariableAssignmentContainer::GetValueContainerType
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1)

{
  bool bVar1;
  EMovieGraphContainerType EVar2;
  FPropertyBagPropertyDesc *pFVar3;
  FName FVar4;
  TObjectPtr<UObject_const_>_u_0 local_88;
  undefined8 local_80;
  undefined8 local_78;
  FName local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  TObjectPtr<UObject_const_>_u_0 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  local_60 = 1;
  local_88.DebugPtr = (UObject *)0x0;
  local_80 = 0;
  local_78 = 0;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  local_68 = 0;
  local_58 = 0;
  local_48.DebugPtr = (UObject *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_18 = 0;
  local_50 = 0xffffffff;
  local_20 = 1;
  local_10 = 0xffffffff;
  bVar1 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_88.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_48.ObjectPtr,false);
  if (bVar1) {
    FVar4 = local_70;
  }
  pFVar3 = FInstancedPropertyBag::FindPropertyDescByName(&this->Value,FVar4);
  if ((pFVar3 == (FPropertyBagPropertyDesc *)0x0) ||
     ((pFVar3->ContainerTypes).NumContainers == '\0')) {
    EVar2 = None;
  }
  else {
    EVar2 = (pFVar3->ContainerTypes).Types.Elements[0];
  }
  return EVar2;
}

// GetValueDouble @ 14dd309d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMovieJobVariableAssignmentContainer::GetValueDouble
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,double *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  FName FVar5;
  undefined1 auStack_108 [32];
  TObjectPtr<UObject_const_>_u_0 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  FName local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  TObjectPtr<UObject_const_>_u_0 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  TValueOrError<double,EPropertyBagResult> local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  FVar5.ComparisonIndex.Value = 0;
  FVar5.Number = 0;
  local_a0 = 1;
  local_c8.DebugPtr = (UObject *)0x0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  local_a8 = 0;
  local_98 = 0;
  local_88.DebugPtr = (UObject *)0x0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_90 = 0xffffffff;
  local_60 = 1;
  local_50 = 0xffffffff;
  bVar2 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_c8.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_88.ObjectPtr,false);
  if (bVar2) {
    FVar5 = local_b0;
  }
  FInstancedPropertyBag::GetValueDouble(&this->Value,&local_48,FVar5);
  uVar4 = (ulonglong)local_48.Variant.TypeIndex;
  if ((2 < uVar4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,float,TValueOrError<float,EPropertyBagResult>::FWrapErrorType,TValueOrError<float,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4 + 4) == '\0') {
    bVar2 = false;
  }
  else {
    if ((local_48.Variant.TypeIndex != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if ((2 < local_48.Variant.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<double,TValueOrError<double,EPropertyBagResult>::FWrapErrorType,TValueOrError<double,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_48.Variant.TypeIndex])(&local_48);
    *param_2 = (double)local_48.Variant._padding_;
    bVar2 = true;
  }
  return bVar2;
}

// GetValueEnum @ 14dd30b70

bool __thiscall
UMovieJobVariableAssignmentContainer::GetValueEnum
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,uchar *param_2,
          UEnum *param_3)

{
  bool bVar1;
  UEnum *pUVar2;
  TValueOrError<unsigned_char,EPropertyBagResult> local_b8 [2];
  undefined8 local_b4;
  TObjectPtr<UObject_const_>_u_0 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  UEnum *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  TObjectPtr<UObject_const_>_u_0 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  local_80 = 1;
  local_a8.DebugPtr = (UObject *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = (UEnum *)0x0;
  local_88 = 0;
  local_78 = 0;
  local_68.DebugPtr = (UObject *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_70 = 0xffffffff;
  local_40 = 1;
  local_30 = 0xffffffff;
  bVar1 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_a8.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_68.ObjectPtr,false);
  pUVar2 = local_90;
  if (!bVar1) {
    local_b4 = 0;
    pUVar2 = (UEnum *)0x0;
  }
  FInstancedPropertyBag::GetValueEnum(&this->Value,(FName)local_b8,pUVar2);
  bVar1 = UE::MovieGraph::Private::GetOptionalValue<unsigned_char>(local_b8,param_2);
  return bVar1;
}

// GetValueFloat @ 14dd30c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMovieJobVariableAssignmentContainer::GetValueFloat
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined1 auStack_f8 [32];
  TObjectPtr<UObject_const_>_u_0 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  TObjectPtr<UObject_const_>_u_0 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  float local_38;
  byte local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_90 = 1;
  local_b8.DebugPtr = (UObject *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  local_78.DebugPtr = (UObject *)0x0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  local_80 = 0xffffffff;
  local_50 = 1;
  local_40 = 0xffffffff;
  FindOrGenerateVariableOverride
            (this,param_1,(FPropertyBagPropertyDesc *)&local_b8.ObjectPtr,
             (FPropertyBagPropertyDesc *)&local_78.ObjectPtr,false);
  FInstancedPropertyBag::GetValueFloat(&this->Value,(FName)&local_38);
  uVar4 = (ulonglong)local_34;
  if ((2 < uVar4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,float,TValueOrError<float,EPropertyBagResult>::FWrapErrorType,TValueOrError<float,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    bVar2 = false;
  }
  else {
    if ((local_34 != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if ((2 < local_34) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<float,TValueOrError<float,EPropertyBagResult>::FWrapErrorType,TValueOrError<float,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_34])(&local_38);
    *param_2 = local_38;
    bVar2 = true;
  }
  return bVar2;
}

// GetValueInt32 @ 14dd30dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMovieJobVariableAssignmentContainer::GetValueInt32
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined1 auStack_f8 [32];
  TObjectPtr<UObject_const_>_u_0 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  TObjectPtr<UObject_const_>_u_0 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  int local_38;
  byte local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_90 = 1;
  local_b8.DebugPtr = (UObject *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  local_78.DebugPtr = (UObject *)0x0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  local_80 = 0xffffffff;
  local_50 = 1;
  local_40 = 0xffffffff;
  FindOrGenerateVariableOverride
            (this,param_1,(FPropertyBagPropertyDesc *)&local_b8.ObjectPtr,
             (FPropertyBagPropertyDesc *)&local_78.ObjectPtr,false);
  FInstancedPropertyBag::GetValueInt32(&this->Value,(FName)&local_38);
  uVar4 = (ulonglong)local_34;
  if ((2 < uVar4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<int,int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    bVar2 = false;
  }
  else {
    if ((local_34 != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if ((2 < local_34) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_34])(&local_38);
    bVar2 = true;
    *param_2 = local_38;
  }
  return bVar2;
}

// GetValueInt64 @ 14dd30f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMovieJobVariableAssignmentContainer::GetValueInt64
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,long64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  FName FVar5;
  undefined1 auStack_108 [32];
  TObjectPtr<UObject_const_>_u_0 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  FName local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  TObjectPtr<UObject_const_>_u_0 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  TValueOrError<__int64,EPropertyBagResult> local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  FVar5.ComparisonIndex.Value = 0;
  FVar5.Number = 0;
  local_a0 = 1;
  local_c8.DebugPtr = (UObject *)0x0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  local_a8 = 0;
  local_98 = 0;
  local_88.DebugPtr = (UObject *)0x0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_90 = 0xffffffff;
  local_60 = 1;
  local_50 = 0xffffffff;
  bVar2 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_c8.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_88.ObjectPtr,false);
  if (bVar2) {
    FVar5 = local_b0;
  }
  FInstancedPropertyBag::GetValueInt64(&this->Value,&local_48,FVar5);
  uVar4 = (ulonglong)local_48.Variant.TypeIndex;
  if ((2 < uVar4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<int,int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4 + 4) == '\0') {
    bVar2 = false;
  }
  else {
    if ((local_48.Variant.TypeIndex != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if ((2 < local_48.Variant.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<__int64,TValueOrError<__int64,EPropertyBagResult>::FWrapErrorType,TValueOrError<__int64,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_48.Variant.TypeIndex])(&local_48);
    bVar2 = true;
    *param_2 = local_48.Variant._padding_;
  }
  return bVar2;
}

// GetValueName @ 14dd310d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMovieJobVariableAssignmentContainer::GetValueName
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  FName FVar5;
  undefined1 auStack_108 [32];
  TObjectPtr<UObject_const_>_u_0 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  FName local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  TObjectPtr<UObject_const_>_u_0 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  FName local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  FVar5.ComparisonIndex.Value = 0;
  FVar5.Number = 0;
  local_a0 = 1;
  local_c8.DebugPtr = (UObject *)0x0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  local_a8 = 0;
  local_98 = 0;
  local_88.DebugPtr = (UObject *)0x0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_90 = 0xffffffff;
  local_60 = 1;
  local_50 = 0xffffffff;
  bVar2 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_c8.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_88.ObjectPtr,false);
  if (bVar2) {
    FVar5 = local_b0;
  }
  FInstancedPropertyBag::GetValueName
            (&this->Value,(TValueOrError<FName,EPropertyBagResult> *)&local_48,FVar5);
  uVar4 = (ulonglong)local_40;
  if ((2 < uVar4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    bVar2 = false;
  }
  else {
    if ((local_40 != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if ((2 < local_40) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40])(&local_48);
    bVar2 = true;
    *param_2 = local_48;
  }
  return bVar2;
}

// GetValueObject @ 14dd31250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMovieJobVariableAssignmentContainer::GetValueObject
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,UObject *param_2,
          UClass *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  FName FVar5;
  undefined1 auStack_f8 [32];
  TObjectPtr<UObject_const_>_u_0 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  FName local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  TObjectPtr<UObject_const_>_u_0 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  TValueOrError<UObject_*,EPropertyBagResult> local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  FVar5.ComparisonIndex.Value = 0;
  FVar5.Number = 0;
  local_90 = 1;
  local_b8.DebugPtr = (UObject *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  local_98 = 0;
  local_88 = 0;
  local_78.DebugPtr = (UObject *)0x0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  local_80 = 0xffffffff;
  local_50 = 1;
  local_40 = 0xffffffff;
  bVar2 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_b8.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_78.ObjectPtr,false);
  if (bVar2) {
    FVar5 = local_a0;
  }
  FInstancedPropertyBag::GetValueObject(&this->Value,&local_38,FVar5,param_3);
  uVar4 = (ulonglong)local_38.Variant.TypeIndex;
  if ((2 < uVar4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    bVar2 = false;
  }
  else {
    if ((local_38.Variant.TypeIndex != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if ((2 < local_38.Variant.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_38.Variant.TypeIndex])(&local_38);
    bVar2 = true;
  }
  return bVar2;
}

// GetValueSerializedString @ 14dd313d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UMovieJobVariableAssignmentContainer::GetValueSerializedString
          (UMovieJobVariableAssignmentContainer *this,FString *__return_storage_ptr__,
          UMovieGraphVariable *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FName FVar4;
  undefined1 auStack_f8 [32];
  TObjectPtr<UObject_const_>_u_0 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  FName local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  TObjectPtr<UObject_const_>_u_0 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  TValueOrError<FString,EPropertyBagResult> local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_f8;
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  local_90 = 1;
  local_b8.DebugPtr = (UObject *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  local_98 = 0;
  local_88 = 0;
  local_80 = 0xffffffff;
  local_78.DebugPtr = (UObject *)0x0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 1;
  local_48 = 0;
  local_40 = 0xffffffff;
  bVar2 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_b8.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_78.ObjectPtr,false);
  if (bVar2) {
    FVar4 = local_a0;
  }
  FInstancedPropertyBag::GetValueSerializedString(&this->Value,&local_38,FVar4);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  UE::MovieGraph::Private::GetOptionalValue<FString>(&local_38,__return_storage_ptr__);
  if ((2 < local_38.Variant.TypeIndex) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_38.Variant.TypeIndex])(&local_38);
  return __return_storage_ptr__;
}

// GetValueString @ 14dd31500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMovieJobVariableAssignmentContainer::GetValueString
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  FName FVar5;
  undefined1 auStack_f8 [32];
  TObjectPtr<UObject_const_>_u_0 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  FName local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  TObjectPtr<UObject_const_>_u_0 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  TValueOrError<FString,EPropertyBagResult> local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_f8;
  FVar5.ComparisonIndex.Value = 0;
  FVar5.Number = 0;
  local_90 = 1;
  local_b8.DebugPtr = (UObject *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  local_98 = 0;
  local_88 = 0;
  local_78.DebugPtr = (UObject *)0x0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  local_80 = 0xffffffff;
  local_50 = 1;
  local_40 = 0xffffffff;
  bVar2 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_b8.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_78.ObjectPtr,false);
  if (bVar2) {
    FVar5 = local_a0;
  }
  FInstancedPropertyBag::GetValueString(&this->Value,&local_38,FVar5);
  bVar2 = UE::MovieGraph::Private::GetOptionalValue<FString>(&local_38,param_2);
  if ((2 < local_38.Variant.TypeIndex) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_38.Variant.TypeIndex])(&local_38);
  return bVar2;
}

// GetValueStruct @ 14dd31620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMovieJobVariableAssignmentContainer::GetValueStruct
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,
          FStructView *param_2,UScriptStruct *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  FName FVar5;
  undefined1 auStack_118 [32];
  TObjectPtr<UObject_const_>_u_0 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  FName local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  TObjectPtr<UObject_const_>_u_0 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  UScriptStruct *local_58;
  uchar *puStack_50;
  TValueOrError<FStructView,EPropertyBagResult> local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_118;
  FVar5.ComparisonIndex.Value = 0;
  FVar5.Number = 0;
  local_b0 = 1;
  local_d8.DebugPtr = (UObject *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_98.DebugPtr = (UObject *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_a0 = 0xffffffff;
  local_70 = 1;
  local_60 = 0xffffffff;
  bVar2 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_d8.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_98.ObjectPtr,false);
  if (bVar2) {
    FVar5 = local_c0;
  }
  FInstancedPropertyBag::GetValueStruct(&this->Value,&local_48,FVar5,param_3);
  uVar4 = (ulonglong)local_48.Variant.TypeIndex;
  if ((2 < uVar4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4 + 4) == '\0') {
    bVar2 = false;
  }
  else {
    if ((local_48.Variant.TypeIndex != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    local_58 = (UScriptStruct *)local_48.Variant._padding_;
    puStack_50 = (uchar *)local_48.Variant._padding_;
    if ((2 < local_48.Variant.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FStructView,TValueOrError<FStructView,EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FStructView,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_48.Variant.TypeIndex])(&local_48);
    bVar2 = true;
    param_2->ScriptStruct = local_58;
    param_2->StructMemory = puStack_50;
  }
  return bVar2;
}

// GetValueText @ 14dd317b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMovieJobVariableAssignmentContainer::GetValueText
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,FText *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  ulonglong uVar5;
  FName FVar6;
  undefined1 auStack_108 [32];
  TObjectPtr<UObject_const_>_u_0 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  FName local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  TObjectPtr<UObject_const_>_u_0 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  FText local_48;
  TValueOrError<FText,EPropertyBagResult> local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_108;
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  local_a0 = 1;
  local_c8.DebugPtr = (UObject *)0x0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  local_a8 = 0;
  local_98 = 0;
  local_88.DebugPtr = (UObject *)0x0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_90 = 0xffffffff;
  local_60 = 1;
  local_50 = 0xffffffff;
  bVar2 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_c8.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_88.ObjectPtr,false);
  if (bVar2) {
    FVar6 = local_b0;
  }
  FInstancedPropertyBag::GetValueText(&this->Value,&local_38,FVar6);
  uVar5 = (ulonglong)local_38.Variant.TypeIndex;
  if ((2 < uVar5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5) == '\0') {
    bVar2 = false;
  }
  else {
    if ((local_38.Variant.TypeIndex != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    FText::FText(&local_48,(FText *)&local_38);
    if ((2 < local_38.Variant.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_38.Variant.TypeIndex])(&local_38);
    local_38.Variant.TypeIndex = 2;
    FText::operator=(param_2,&local_48);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    bVar2 = true;
  }
  uVar5 = (ulonglong)local_38.Variant.TypeIndex;
  if ((2 < local_38.Variant.TypeIndex) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] !=
      UE::Core::Private::TDestructorCaller<TValueOrError<FText,enum_EPropertyBagResult>::FEmptyType>
      ::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_38);
  }
  return bVar2;
}

// GetValueType @ 14dd319d0

EMovieGraphValueType __thiscall
UMovieJobVariableAssignmentContainer::GetValueType
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1)

{
  bool bVar1;
  EMovieGraphValueType EVar2;
  FPropertyBagPropertyDesc *pFVar3;
  FName FVar4;
  TObjectPtr<UObject_const_>_u_0 local_88;
  undefined8 local_80;
  undefined8 local_78;
  FName local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  TObjectPtr<UObject_const_>_u_0 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  local_60 = 1;
  local_88.DebugPtr = (UObject *)0x0;
  local_80 = 0;
  local_78 = 0;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  local_68 = 0;
  local_58 = 0;
  local_48.DebugPtr = (UObject *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_18 = 0;
  local_50 = 0xffffffff;
  local_20 = 1;
  local_10 = 0xffffffff;
  bVar1 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_88.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_48.ObjectPtr,false);
  if (bVar1) {
    FVar4 = local_70;
  }
  pFVar3 = FInstancedPropertyBag::FindPropertyDescByName(&this->Value,FVar4);
  EVar2 = None;
  if (pFVar3 != (FPropertyBagPropertyDesc *)0x0) {
    EVar2 = pFVar3->ValueType;
  }
  return EVar2;
}

// GetValueTypeObject @ 14dd31ab0

UObject * __thiscall
UMovieJobVariableAssignmentContainer::GetValueTypeObject
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1)

{
  bool bVar1;
  FPropertyBagPropertyDesc *pFVar2;
  UObject *pUVar3;
  FName FVar4;
  TObjectPtr<UObject_const_>_u_0 local_88;
  undefined8 local_80;
  undefined8 local_78;
  FName local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  TObjectPtr<UObject_const_>_u_0 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  local_60 = 1;
  local_88.DebugPtr = (UObject *)0x0;
  local_80 = 0;
  local_78 = 0;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  local_68 = 0;
  local_58 = 0;
  local_48.DebugPtr = (UObject *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_18 = 0;
  local_50 = 0xffffffff;
  local_20 = 1;
  local_10 = 0xffffffff;
  bVar1 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_88.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_48.ObjectPtr,false);
  if (bVar1) {
    FVar4 = local_70;
  }
  pFVar2 = FInstancedPropertyBag::FindPropertyDescByName(&this->Value,FVar4);
  pUVar3 = (UObject *)0x0;
  if (pFVar2 != (FPropertyBagPropertyDesc *)0x0) {
    pUVar3 = (pFVar2->ValueTypeObject).field0_0x0.DebugPtr;
  }
  return pUVar3;
}

// GetVariableAssignmentEnableState @ 14dd31b80

bool __thiscall
UMovieJobVariableAssignmentContainer::GetVariableAssignmentEnableState
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  bool local_68;
  byte local_67;
  TObjectPtr<UObject_const_>_u_0 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_58.DebugPtr = (UObject *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 1;
  local_28 = 0;
  local_20 = 0xffffffff;
  bVar2 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)0x0,
                     (FPropertyBagPropertyDesc *)&local_58.ObjectPtr,false);
  if (!bVar2) {
    return false;
  }
  FInstancedPropertyBag::GetValueBool(&this->Value,(FName)&local_68);
  uVar4 = (ulonglong)local_67;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) != '\0') {
    if (local_67 != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    *param_2 = local_68;
  }
  if (2 < (ulonglong)local_67) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + (ulonglong)local_67);
}

// SetGraphConfig @ 14dd40200

void __thiscall
UMovieJobVariableAssignmentContainer::SetGraphConfig
          (UMovieJobVariableAssignmentContainer *this,TSoftObjectPtr<UMovieGraphConfig> *param_1)

{
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&this->GraphPreset,
             (TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  return;
}

// SetValueBool @ 14dd40a50

bool __thiscall
UMovieJobVariableAssignmentContainer::SetValueBool
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,bool param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  FName FVar3;
  TObjectPtr<UObject_const_>_u_0 local_98;
  undefined8 local_90;
  undefined8 local_88;
  FName local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  TObjectPtr<UObject_const_>_u_0 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  local_70 = 1;
  local_98.DebugPtr = (UObject *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  local_78 = 0;
  local_68 = 0;
  local_58.DebugPtr = (UObject *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_60 = 0xffffffff;
  local_30 = 1;
  local_20 = 0xffffffff;
  bVar1 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_98.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_58.ObjectPtr,false);
  if (bVar1) {
    FVar3 = local_80;
  }
  EVar2 = FInstancedPropertyBag::SetValueBool(&this->Value,FVar3,param_2);
  return EVar2 == Success;
}

// SetValueByte @ 14dd40b10

bool __thiscall
UMovieJobVariableAssignmentContainer::SetValueByte
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,uchar param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  FName FVar3;
  TObjectPtr<UObject_const_>_u_0 local_98;
  undefined8 local_90;
  undefined8 local_88;
  FName local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  TObjectPtr<UObject_const_>_u_0 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  local_70 = 1;
  local_98.DebugPtr = (UObject *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  local_78 = 0;
  local_68 = 0;
  local_58.DebugPtr = (UObject *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_60 = 0xffffffff;
  local_30 = 1;
  local_20 = 0xffffffff;
  bVar1 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_98.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_58.ObjectPtr,false);
  if (bVar1) {
    FVar3 = local_80;
  }
  EVar2 = FInstancedPropertyBag::SetValueByte(&this->Value,FVar3,param_2);
  return EVar2 == Success;
}

// SetValueClass @ 14dd40bd0

bool __thiscall
UMovieJobVariableAssignmentContainer::SetValueClass
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,UClass *param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  FName FVar3;
  TObjectPtr<UObject_const_>_u_0 local_98;
  undefined8 local_90;
  undefined8 local_88;
  FName local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  TObjectPtr<UObject_const_>_u_0 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  local_70 = 1;
  local_98.DebugPtr = (UObject *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  local_78 = 0;
  local_68 = 0;
  local_58.DebugPtr = (UObject *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_60 = 0xffffffff;
  local_30 = 1;
  local_20 = 0xffffffff;
  bVar1 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_98.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_58.ObjectPtr,false);
  if (bVar1) {
    FVar3 = local_80;
  }
  EVar2 = FInstancedPropertyBag::SetValueClass(&this->Value,FVar3,param_2);
  return EVar2 == Success;
}

// SetValueDouble @ 14dd40c90

bool __thiscall
UMovieJobVariableAssignmentContainer::SetValueDouble
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,double param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  FName FVar3;
  TObjectPtr<UObject_const_>_u_0 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  FName local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  TObjectPtr<UObject_const_>_u_0 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  local_a8.DebugPtr = (UObject *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  local_88 = 0;
  local_78 = 0;
  local_68.DebugPtr = (UObject *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_80 = 1;
  local_70 = 0xffffffff;
  local_40 = 1;
  local_30 = 0xffffffff;
  bVar1 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_a8.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_68.ObjectPtr,false);
  if (bVar1) {
    FVar3 = local_90;
  }
  EVar2 = FInstancedPropertyBag::SetValueDouble(&this->Value,FVar3,param_2);
  return EVar2 == Success;
}

// SetValueEnum @ 14dd40d50

bool __thiscall
UMovieJobVariableAssignmentContainer::SetValueEnum
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,uchar param_2,
          UEnum *param_3)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  FName FVar3;
  TObjectPtr<UObject_const_>_u_0 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  FName local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  TObjectPtr<UObject_const_>_u_0 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  local_80 = 1;
  local_a8.DebugPtr = (UObject *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  local_88 = 0;
  local_78 = 0;
  local_68.DebugPtr = (UObject *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_70 = 0xffffffff;
  local_40 = 1;
  local_30 = 0xffffffff;
  bVar1 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_a8.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_68.ObjectPtr,false);
  if (bVar1) {
    FVar3 = local_90;
  }
  EVar2 = FInstancedPropertyBag::SetValueEnum(&this->Value,FVar3,param_2,param_3);
  return EVar2 == Success;
}

// SetValueFloat @ 14dd40e10

bool __thiscall
UMovieJobVariableAssignmentContainer::SetValueFloat
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,float param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  FName FVar3;
  TObjectPtr<UObject_const_>_u_0 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  FName local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  TObjectPtr<UObject_const_>_u_0 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  local_a8.DebugPtr = (UObject *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  local_88 = 0;
  local_78 = 0;
  local_68.DebugPtr = (UObject *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_80 = 1;
  local_70 = 0xffffffff;
  local_40 = 1;
  local_30 = 0xffffffff;
  bVar1 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_a8.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_68.ObjectPtr,false);
  if (bVar1) {
    FVar3 = local_90;
  }
  EVar2 = FInstancedPropertyBag::SetValueFloat(&this->Value,FVar3,param_2);
  return EVar2 == Success;
}

// SetValueInt32 @ 14dd40ed0

bool __thiscall
UMovieJobVariableAssignmentContainer::SetValueInt32
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,int param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  FName FVar3;
  TObjectPtr<UObject_const_>_u_0 local_98;
  undefined8 local_90;
  undefined8 local_88;
  FName local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  TObjectPtr<UObject_const_>_u_0 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  local_70 = 1;
  local_98.DebugPtr = (UObject *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  local_78 = 0;
  local_68 = 0;
  local_58.DebugPtr = (UObject *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_60 = 0xffffffff;
  local_30 = 1;
  local_20 = 0xffffffff;
  bVar1 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_98.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_58.ObjectPtr,false);
  if (bVar1) {
    FVar3 = local_80;
  }
  EVar2 = FInstancedPropertyBag::SetValueInt32(&this->Value,FVar3,param_2);
  return EVar2 == Success;
}

// SetValueInt64 @ 14dd40f90

bool __thiscall
UMovieJobVariableAssignmentContainer::SetValueInt64
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,long64 param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  FName FVar3;
  TObjectPtr<UObject_const_>_u_0 local_98;
  undefined8 local_90;
  undefined8 local_88;
  FName local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  TObjectPtr<UObject_const_>_u_0 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  local_70 = 1;
  local_98.DebugPtr = (UObject *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  local_78 = 0;
  local_68 = 0;
  local_58.DebugPtr = (UObject *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_60 = 0xffffffff;
  local_30 = 1;
  local_20 = 0xffffffff;
  bVar1 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_98.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_58.ObjectPtr,false);
  if (bVar1) {
    FVar3 = local_80;
  }
  EVar2 = FInstancedPropertyBag::SetValueInt64(&this->Value,FVar3,param_2);
  return EVar2 == Success;
}

// SetValueName @ 14dd41050

bool __thiscall
UMovieJobVariableAssignmentContainer::SetValueName
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,FName param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  FName FVar3;
  TObjectPtr<UObject_const_>_u_0 local_98;
  undefined8 local_90;
  undefined8 local_88;
  FName local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  TObjectPtr<UObject_const_>_u_0 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  local_70 = 1;
  local_98.DebugPtr = (UObject *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  local_78 = 0;
  local_68 = 0;
  local_58.DebugPtr = (UObject *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_60 = 0xffffffff;
  local_30 = 1;
  local_20 = 0xffffffff;
  bVar1 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_98.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_58.ObjectPtr,false);
  if (bVar1) {
    FVar3 = local_80;
  }
  EVar2 = FInstancedPropertyBag::SetValueName(&this->Value,FVar3,param_2);
  return EVar2 == Success;
}

// SetValueObject @ 14dd41110

bool __thiscall
UMovieJobVariableAssignmentContainer::SetValueObject
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,UObject *param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  FName FVar3;
  TObjectPtr<UObject_const_>_u_0 local_98;
  undefined8 local_90;
  undefined8 local_88;
  FName local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  TObjectPtr<UObject_const_>_u_0 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  local_70 = 1;
  local_98.DebugPtr = (UObject *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  local_78 = 0;
  local_68 = 0;
  local_58.DebugPtr = (UObject *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_60 = 0xffffffff;
  local_30 = 1;
  local_20 = 0xffffffff;
  bVar1 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_98.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_58.ObjectPtr,false);
  if (bVar1) {
    FVar3 = local_80;
  }
  EVar2 = FInstancedPropertyBag::SetValueObject(&this->Value,FVar3,param_2);
  return EVar2 == Success;
}

// SetValueSerializedString @ 14dd411d0

bool __thiscall
UMovieJobVariableAssignmentContainer::SetValueSerializedString
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,FString *param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  FName FVar3;
  TObjectPtr<UObject_const_>_u_0 local_98;
  undefined8 local_90;
  undefined8 local_88;
  FName local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  TObjectPtr<UObject_const_>_u_0 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  local_70 = 1;
  local_98.DebugPtr = (UObject *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  local_78 = 0;
  local_68 = 0;
  local_58.DebugPtr = (UObject *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_60 = 0xffffffff;
  local_30 = 1;
  local_20 = 0xffffffff;
  bVar1 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_98.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_58.ObjectPtr,false);
  if (bVar1) {
    FVar3 = local_80;
  }
  EVar2 = FInstancedPropertyBag::SetValueSerializedString(&this->Value,FVar3,param_2);
  return EVar2 == Success;
}

// SetValueString @ 14dd41290

bool __thiscall
UMovieJobVariableAssignmentContainer::SetValueString
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,FString *param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  FName FVar3;
  TObjectPtr<UObject_const_>_u_0 local_98;
  undefined8 local_90;
  undefined8 local_88;
  FName local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  TObjectPtr<UObject_const_>_u_0 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  local_70 = 1;
  local_98.DebugPtr = (UObject *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  local_78 = 0;
  local_68 = 0;
  local_58.DebugPtr = (UObject *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_60 = 0xffffffff;
  local_30 = 1;
  local_20 = 0xffffffff;
  bVar1 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_98.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_58.ObjectPtr,false);
  if (bVar1) {
    FVar3 = local_80;
  }
  EVar2 = FInstancedPropertyBag::SetValueString(&this->Value,FVar3,param_2);
  return EVar2 == Success;
}

// SetValueStruct @ 14dd41350

bool __thiscall
UMovieJobVariableAssignmentContainer::SetValueStruct
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,
          FConstStructView *param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  FName FVar3;
  TObjectPtr<UObject_const_>_u_0 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  FName local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  TObjectPtr<UObject_const_>_u_0 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  FConstStructView local_28;
  
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  local_80 = 1;
  local_a8.DebugPtr = (UObject *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  local_88 = 0;
  local_78 = 0;
  local_68.DebugPtr = (UObject *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_70 = 0xffffffff;
  local_40 = 1;
  local_30 = 0xffffffff;
  bVar1 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_a8.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_68.ObjectPtr,false);
  local_28.ScriptStruct = param_2->ScriptStruct;
  local_28.StructMemory = param_2->StructMemory;
  if (bVar1) {
    FVar3 = local_90;
  }
  EVar2 = FInstancedPropertyBag::SetValueStruct(&this->Value,FVar3,&local_28);
  return EVar2 == Success;
}

// SetValueText @ 14dd41410

bool __thiscall
UMovieJobVariableAssignmentContainer::SetValueText
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,FText *param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  FName FVar3;
  TObjectPtr<UObject_const_>_u_0 local_98;
  undefined8 local_90;
  undefined8 local_88;
  FName local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  TObjectPtr<UObject_const_>_u_0 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  local_70 = 1;
  local_98.DebugPtr = (UObject *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  local_78 = 0;
  local_68 = 0;
  local_58.DebugPtr = (UObject *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_60 = 0xffffffff;
  local_30 = 1;
  local_20 = 0xffffffff;
  bVar1 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_98.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_58.ObjectPtr,false);
  if (bVar1) {
    FVar3 = local_80;
  }
  EVar2 = FInstancedPropertyBag::SetValueText(&this->Value,FVar3,param_2);
  return EVar2 == Success;
}

// SetVariableAssignmentEnableState @ 14dd41530

bool __thiscall
UMovieJobVariableAssignmentContainer::SetVariableAssignmentEnableState
          (UMovieJobVariableAssignmentContainer *this,UMovieGraphVariable *param_1,bool param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  TObjectPtr<UObject_const_>_u_0 local_98;
  undefined8 local_90;
  undefined8 local_88;
  FName local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  TObjectPtr<UObject_const_>_u_0 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_30 = 1;
  local_58.DebugPtr = (UObject *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_98.DebugPtr = (UObject *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  local_78 = 0;
  local_68 = 0;
  local_20 = 0xffffffff;
  local_70 = 1;
  local_60 = 0xffffffff;
  bVar1 = FindOrGenerateVariableOverride
                    (this,param_1,(FPropertyBagPropertyDesc *)&local_58.ObjectPtr,
                     (FPropertyBagPropertyDesc *)&local_98.ObjectPtr,false);
  if (bVar1) {
    EVar2 = FInstancedPropertyBag::SetValueBool(&this->Value,local_80,param_2);
    return EVar2 == Success;
  }
  return false;
}

// StaticRegisterNativesUMovieJobVariableAssignmentContainer @ 14dd454d0

void __cdecl
UMovieJobVariableAssignmentContainer::StaticRegisterNativesUMovieJobVariableAssignmentContainer
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x21;
  local_18.DataPtr = Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetGraphConfig @ 14dd50a10

void __cdecl
UMovieJobVariableAssignmentContainer::execGetGraphConfig
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TPersistentObjectPtr<FSoftObjectPath> local_38;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0x10;
  local_38.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0x14;
  FSoftObjectPath::FSoftObjectPath(&local_38.ObjectID,(FSoftObjectPath *)&param_1[1].field_0x18);
  TPersistentObjectPtr<FSoftObjectPath>::operator=(param_3,&local_38);
  if (local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetValueBool @ 14dd520a0

void __cdecl
UMovieJobVariableAssignmentContainer::execGetValueBool
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *this;
  FProperty *pFVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FPropertyBagPropertyDesc *pFVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uchar *puVar9;
  uchar local_168;
  uchar local_167;
  byte local_166;
  ForAnyElementType local_160;
  int local_158;
  int local_154;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_150;
  longlong local_140 [2];
  FString local_130;
  FString local_120;
  TObjectPtr<UObject_const_>_u_0 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  TObjectPtr<UObject_const_>_u_0 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  FName local_88;
  FName local_80;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  
  local_140[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_140,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_140);
  }
  local_168 = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  local_108.DebugPtr = (UObject *)0x0;
  local_100 = 0;
  puVar9 = &local_168;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  local_f8 = 0;
  this = param_1 + 1;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 1;
  local_d8 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d0 = 0xffffffff;
  local_c8.DebugPtr = (UObject *)0x0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_90 = 0xffffffff;
  if (local_140[0] != 0) {
    local_158 = *(int *)(local_140[0] + 0x58);
    lVar7 = (longlong)local_158;
    _Src = *(void **)(local_140[0] + 0x50);
    local_160.Data = (FScriptContainerElement *)0x0;
    if (local_158 == 0) {
      local_154 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_158,0,&local_160,local_158,&local_154);
      memcpy(local_160.Data,_Src,lVar7 * 2);
    }
    iVar6 = local_158 + -1;
    if (local_158 == 0) {
      iVar6 = 0;
    }
    pFVar4 = ::FName::FName(&local_88,iVar6,(wchar_t *)local_160.Data,FNAME_Add);
    pFVar5 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar4);
    if (local_160.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data);
    }
    if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_108.ObjectPtr,pFVar5);
      FStringFormatArg::FStringFormatArg(&local_78,EditConditionPrefix);
      local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_130.Data.ArrayNum = 0;
      local_130.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar5->ID,&local_130,Digits);
      FStringFormatArg::FStringFormatArg(&local_58,&local_130);
      local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_150.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_150.AllocatorInstance,2,&local_150.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_150.AllocatorInstance.Data,&local_78,2);
      ::FString::FormatImpl(&local_120,L"{0}{1}",&local_150);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_150.AllocatorInstance.Data,local_150.ArrayNum);
      if ((FStringFormatArg *)local_150.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_150.AllocatorInstance.Data);
      }
      if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
      }
      iVar6 = local_120.Data.ArrayNum + -1;
      if (local_120.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      pFVar4 = ::FName::FName(&local_80,iVar6,(wchar_t *)local_120.Data.AllocatorInstance.Data,
                              FNAME_Add);
      pFVar5 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar4);
      if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_c8.ObjectPtr,pFVar5);
      }
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      goto LAB_14dd523aa;
    }
  }
  local_140[1] = 0;
LAB_14dd523aa:
  FInstancedPropertyBag::GetValueBool((FInstancedPropertyBag *)this,(FName)&local_167);
  uVar8 = (ulonglong)local_166;
  if ((2 < uVar8) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar8) == '\0') {
    *(undefined1 *)param_3 = 0;
  }
  else {
    if ((local_166 != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((2 < local_166) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_166])(&local_167);
    *puVar9 = local_167;
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execGetValueByte @ 14dd52490

void __cdecl
UMovieJobVariableAssignmentContainer::execGetValueByte
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *this;
  FProperty *pFVar1;
  void *_Src;
  bool bVar2;
  FName *pFVar3;
  FPropertyBagPropertyDesc *pFVar4;
  int iVar5;
  longlong lVar6;
  uchar *puVar7;
  uchar local_148;
  TValueOrError<unsigned_char,EPropertyBagResult> local_147 [3];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_140;
  ForAnyElementType local_130;
  int local_128;
  int local_124;
  longlong local_120;
  FString local_118;
  FString local_108;
  TObjectPtr<UObject_const_>_u_0 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  TObjectPtr<UObject_const_>_u_0 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  
  local_120 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_148 = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_f8.DebugPtr = (UObject *)0x0;
  local_f0 = 0;
  puVar7 = &local_148;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  local_e8 = 0;
  this = param_1 + 1;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 1;
  local_c8 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c0 = 0xffffffff;
  local_b8.DebugPtr = (UObject *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  local_80 = 0xffffffff;
  if (local_120 != 0) {
    local_128 = *(int *)(local_120 + 0x58);
    lVar6 = (longlong)local_128;
    _Src = *(void **)(local_120 + 0x50);
    local_130.Data = (FScriptContainerElement *)0x0;
    if (local_128 == 0) {
      local_124 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_128,0,&local_130,local_128,&local_124);
      memcpy(local_130.Data,_Src,lVar6 * 2);
    }
    iVar5 = local_128 + -1;
    if (local_128 == 0) {
      iVar5 = 0;
    }
    pFVar3 = ::FName::FName((FName *)&local_140,iVar5,(wchar_t *)local_130.Data,FNAME_Add);
    pFVar4 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar3);
    if (local_130.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data);
    }
    if (pFVar4 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_f8.ObjectPtr,pFVar4);
      FStringFormatArg::FStringFormatArg(&local_78,EditConditionPrefix);
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar4->ID,&local_118,Digits);
      FStringFormatArg::FStringFormatArg(&local_58,&local_118);
      local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_140.AllocatorInstance,2,&local_140.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_140.AllocatorInstance.Data,&local_78,2);
      ::FString::FormatImpl(&local_108,L"{0}{1}",&local_140);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_140.AllocatorInstance.Data,local_140.ArrayNum);
      if ((FStringFormatArg *)local_140.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_140.AllocatorInstance.Data);
      }
      if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
      }
      iVar5 = local_108.Data.ArrayNum + -1;
      if (local_108.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      pFVar3 = ::FName::FName((FName *)&local_140,iVar5,
                              (wchar_t *)local_108.Data.AllocatorInstance.Data,FNAME_Add);
      pFVar4 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar3);
      if (pFVar4 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_b8.ObjectPtr,pFVar4);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      goto LAB_14dd5279d;
    }
  }
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14dd5279d:
  FInstancedPropertyBag::GetValueByte((FInstancedPropertyBag *)this,(FName)local_147);
  bVar2 = UE::MovieGraph::Private::GetOptionalValue<unsigned_char>(local_147,puVar7);
  *(bool *)param_3 = bVar2;
  return;
}

// execGetValueClass @ 14dd527e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieJobVariableAssignmentContainer::execGetValueClass
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *this;
  FProperty *pFVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FName *pFVar5;
  FPropertyBagPropertyDesc *pFVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  FName FVar11;
  undefined1 auStackY_1c8 [32];
  ForAnyElementType local_188;
  int local_180;
  int local_17c;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_178;
  longlong local_168;
  longlong local_160 [2];
  FString local_150;
  FString local_140;
  TObjectPtr<UObject_const_>_u_0 local_128;
  undefined8 local_120;
  undefined8 local_118;
  FName local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  TObjectPtr<UObject_const_>_u_0 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  FName local_a8;
  FName local_a0;
  FStringFormatArg local_98;
  FStringFormatArg local_78;
  TValueOrError<UClass_*,EPropertyBagResult> local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
  local_160[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_160,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_160);
  }
  local_168 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  local_128.DebugPtr = (UObject *)0x0;
  local_120 = 0;
  plVar10 = &local_168;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar10 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  local_118 = 0;
  this = param_1 + 1;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  local_108 = 0;
  local_100 = 1;
  local_f8 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f0 = 0xffffffff;
  local_e8.DebugPtr = (UObject *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 1;
  local_b8 = 0;
  local_b0 = 0xffffffff;
  if (local_160[0] != 0) {
    local_180 = *(int *)(local_160[0] + 0x58);
    lVar8 = (longlong)local_180;
    _Src = *(void **)(local_160[0] + 0x50);
    local_188.Data = (FScriptContainerElement *)0x0;
    if (local_180 == 0) {
      local_17c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_180,0,&local_188,local_180,&local_17c);
      memcpy(local_188.Data,_Src,lVar8 * 2);
    }
    iVar7 = local_180 + -1;
    if (local_180 == 0) {
      iVar7 = 0;
    }
    pFVar5 = ::FName::FName(&local_a8,iVar7,(wchar_t *)local_188.Data,FNAME_Add);
    pFVar6 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar5);
    if (local_188.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data);
    }
    if (pFVar6 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_128.ObjectPtr,pFVar6);
      FStringFormatArg::FStringFormatArg(&local_98,EditConditionPrefix);
      local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_150.Data.ArrayNum = 0;
      local_150.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar6->ID,&local_150,Digits);
      FStringFormatArg::FStringFormatArg(&local_78,&local_150);
      local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_178.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_178.AllocatorInstance,2,&local_178.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_178.AllocatorInstance.Data,&local_98,2);
      ::FString::FormatImpl(&local_140,L"{0}{1}",&local_178);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
      if ((FStringFormatArg *)local_178.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_178.AllocatorInstance.Data);
      }
      if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.StringValue.Data.AllocatorInstance.Data);
      }
      iVar7 = local_140.Data.ArrayNum + -1;
      if (local_140.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      pFVar5 = ::FName::FName(&local_a0,iVar7,(wchar_t *)local_140.Data.AllocatorInstance.Data,
                              FNAME_Add);
      pFVar6 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar5);
      if (pFVar6 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_e8.ObjectPtr,pFVar6);
      }
      FVar11 = local_110;
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
        FVar11 = local_110;
      }
      goto LAB_14dd52afe;
    }
  }
  local_160[1] = 0;
LAB_14dd52afe:
  FInstancedPropertyBag::GetValueClass((FInstancedPropertyBag *)this,&local_58,FVar11);
  uVar9 = (ulonglong)local_58.Variant.TypeIndex;
  if ((2 < uVar9) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UClass*___ptr64,UClass*___ptr64,TValueOrError<UClass*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar9) == '\0') {
    uVar4 = 0;
  }
  else {
    if ((local_58.Variant.TypeIndex != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((2 < local_58.Variant.TypeIndex) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UClass*___ptr64,TValueOrError<UClass*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.Variant.TypeIndex])(&local_58);
    uVar4 = 1;
    *plVar10 = local_58.Variant._padding_;
  }
  *(undefined1 *)param_3 = uVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)*plVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)*plVar10);
  }
  return;
}

// execGetValueContainerType @ 14dd52c10

void __cdecl
UMovieJobVariableAssignmentContainer::execGetValueContainerType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  FName *pFVar2;
  FPropertyBagPropertyDesc *pFVar3;
  int iVar4;
  FName FVar5;
  longlong lVar6;
  UObject *this;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_138;
  ForAnyElementType local_128;
  int local_120;
  int local_11c;
  longlong local_118;
  FString local_110;
  FString local_100;
  TObjectPtr<UObject_const_>_u_0 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  FName local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  TObjectPtr<UObject_const_>_u_0 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  
  FVar5.ComparisonIndex.Value = 0;
  FVar5.Number = 0;
  local_118 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_e8.DebugPtr = (UObject *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  this = param_1 + 1;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c8 = 0;
  local_c0 = 1;
  local_b8 = 0;
  local_b0 = 0xffffffff;
  local_a8.DebugPtr = (UObject *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 1;
  local_78 = 0;
  local_70 = 0xffffffff;
  if (local_118 != 0) {
    local_120 = *(int *)(local_118 + 0x58);
    lVar6 = (longlong)local_120;
    _Src = *(void **)(local_118 + 0x50);
    local_128.Data = (FScriptContainerElement *)0x0;
    if (local_120 == 0) {
      local_11c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_120,0,&local_128,local_120,&local_11c);
      memcpy(local_128.Data,_Src,lVar6 * 2);
    }
    iVar4 = local_120 + -1;
    if (local_120 == 0) {
      iVar4 = 0;
    }
    pFVar2 = ::FName::FName((FName *)&local_138,iVar4,(wchar_t *)local_128.Data,FNAME_Add);
    pFVar3 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar2);
    if (local_128.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data);
    }
    if (pFVar3 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_e8.ObjectPtr,pFVar3);
      FStringFormatArg::FStringFormatArg(&local_68,EditConditionPrefix);
      local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_110.Data.ArrayNum = 0;
      local_110.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar3->ID,&local_110,Digits);
      FStringFormatArg::FStringFormatArg(&local_48,&local_110);
      local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_138.AllocatorInstance,2,&local_138.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_138.AllocatorInstance.Data,&local_68,2);
      ::FString::FormatImpl(&local_100,L"{0}{1}",&local_138);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
      if ((FStringFormatArg *)local_138.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
      if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
      }
      iVar4 = local_100.Data.ArrayNum + -1;
      if (local_100.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      pFVar2 = ::FName::FName((FName *)&local_138,iVar4,
                              (wchar_t *)local_100.Data.AllocatorInstance.Data,FNAME_Add);
      pFVar3 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar2);
      if (pFVar3 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_a8.ObjectPtr,pFVar3);
      }
      FVar5 = local_d0;
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
        FVar5 = local_d0;
      }
      goto LAB_14dd52ee3;
    }
  }
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14dd52ee3:
  pFVar3 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,FVar5);
  if (pFVar3 == (FPropertyBagPropertyDesc *)0x0) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  if ((pFVar3->ContainerTypes).NumContainers == '\0') {
    *(undefined1 *)param_3 = 0;
    return;
  }
  *(EPropertyBagContainerType *)param_3 = (pFVar3->ContainerTypes).Types.Elements[0];
  return;
}

// execGetValueDouble @ 14dd52f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieJobVariableAssignmentContainer::execGetValueDouble
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *this;
  FProperty *pFVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FPropertyBagPropertyDesc *pFVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  FName FVar10;
  undefined1 auStackY_1d8 [32];
  ForAnyElementType local_198;
  int local_190;
  int local_18c;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_188;
  longlong local_178;
  longlong local_170 [2];
  FString local_160;
  FString local_150;
  TObjectPtr<UObject_const_>_u_0 local_138;
  undefined8 local_130;
  undefined8 local_128;
  FName local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  TObjectPtr<UObject_const_>_u_0 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  FName local_b8;
  FName local_b0;
  FStringFormatArg local_a8;
  FStringFormatArg local_88;
  TValueOrError<double,EPropertyBagResult> local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
  local_170[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_170,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_170);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_178 = 0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  local_138.DebugPtr = (UObject *)0x0;
  local_130 = 0;
  plVar9 = &local_178;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar9 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  local_128 = 0;
  this = param_1 + 1;
  local_120.ComparisonIndex.Value = 0;
  local_120.Number = 0;
  local_118 = 0;
  local_110 = 1;
  local_108 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_100 = 0xffffffff;
  local_f8.DebugPtr = (UObject *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 1;
  local_c8 = 0;
  local_c0 = 0xffffffff;
  if (local_170[0] != 0) {
    local_190 = *(int *)(local_170[0] + 0x58);
    lVar7 = (longlong)local_190;
    _Src = *(void **)(local_170[0] + 0x50);
    local_198.Data = (FScriptContainerElement *)0x0;
    if (local_190 == 0) {
      local_18c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_190,0,&local_198,local_190,&local_18c);
      memcpy(local_198.Data,_Src,lVar7 * 2);
    }
    iVar6 = local_190 + -1;
    if (local_190 == 0) {
      iVar6 = 0;
    }
    pFVar4 = ::FName::FName(&local_b8,iVar6,(wchar_t *)local_198.Data,FNAME_Add);
    pFVar5 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar4);
    if (local_198.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data);
    }
    if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_138.ObjectPtr,pFVar5);
      FStringFormatArg::FStringFormatArg(&local_a8,EditConditionPrefix);
      local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_160.Data.ArrayNum = 0;
      local_160.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar5->ID,&local_160,Digits);
      FStringFormatArg::FStringFormatArg(&local_88,&local_160);
      local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_188.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_188.AllocatorInstance,2,&local_188.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_188.AllocatorInstance.Data,&local_a8,2);
      ::FString::FormatImpl(&local_150,L"{0}{1}",&local_188);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_188.AllocatorInstance.Data,local_188.ArrayNum);
      if ((FStringFormatArg *)local_188.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_188.AllocatorInstance.Data);
      }
      if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.StringValue.Data.AllocatorInstance.Data);
      }
      iVar6 = local_150.Data.ArrayNum + -1;
      if (local_150.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      pFVar4 = ::FName::FName(&local_b0,iVar6,(wchar_t *)local_150.Data.AllocatorInstance.Data,
                              FNAME_Add);
      pFVar5 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar4);
      if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_f8.ObjectPtr,pFVar5);
      }
      FVar10 = local_120;
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
        FVar10 = local_120;
      }
      goto LAB_14dd53267;
    }
  }
  local_170[1] = 0;
LAB_14dd53267:
  FInstancedPropertyBag::GetValueDouble((FInstancedPropertyBag *)this,&local_68,FVar10);
  uVar8 = (ulonglong)local_68.Variant.TypeIndex;
  if ((2 < uVar8) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,float,TValueOrError<float,EPropertyBagResult>::FWrapErrorType,TValueOrError<float,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar8 + 4) == '\0') {
    *(undefined1 *)param_3 = 0;
  }
  else {
    if ((local_68.Variant.TypeIndex != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((2 < local_68.Variant.TypeIndex) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<double,TValueOrError<double,EPropertyBagResult>::FWrapErrorType,TValueOrError<double,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_68.Variant.TypeIndex])(&local_68);
    *plVar9 = local_68.Variant._padding_;
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execGetValueEnum @ 14dd53380

void __cdecl
UMovieJobVariableAssignmentContainer::execGetValueEnum
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *this;
  FField **ppFVar1;
  FProperty *pFVar2;
  void *_Src;
  bool bVar3;
  FName *pFVar4;
  FPropertyBagPropertyDesc *pFVar5;
  int iVar6;
  longlong lVar7;
  UEnum *pUVar8;
  uchar *puVar9;
  uchar local_158;
  TValueOrError<unsigned_char,EPropertyBagResult> local_157 [3];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_150;
  ForAnyElementType local_140;
  int local_138;
  int local_134;
  undefined8 local_130;
  longlong local_128;
  FString local_120;
  FString local_110;
  TObjectPtr<UObject_const_>_u_0 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  UEnum *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  TObjectPtr<UObject_const_>_u_0 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  
  local_128 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_158 = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  local_130 = 0;
  puVar9 = &local_158;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_130,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_130);
  }
  this = param_1 + 1;
  local_d0 = 1;
  local_c0 = 0xffffffff;
  local_90 = 1;
  local_f8.DebugPtr = (UObject *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = (UEnum *)0x0;
  local_d8 = 0;
  local_c8 = 0;
  local_b8.DebugPtr = (UObject *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  local_80 = 0xffffffff;
  if (local_128 != 0) {
    local_138 = *(int *)(local_128 + 0x58);
    lVar7 = (longlong)local_138;
    _Src = *(void **)(local_128 + 0x50);
    local_140.Data = (FScriptContainerElement *)0x0;
    if (local_138 == 0) {
      local_134 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_138,0,&local_140,local_138,&local_134);
      memcpy(local_140.Data,_Src,lVar7 * 2);
    }
    iVar6 = local_138 + -1;
    if (local_138 == 0) {
      iVar6 = 0;
    }
    pFVar4 = ::FName::FName((FName *)&local_150,iVar6,(wchar_t *)local_140.Data,FNAME_Add);
    pFVar5 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar4);
    if (local_140.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data);
    }
    if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_f8.ObjectPtr,pFVar5);
      FStringFormatArg::FStringFormatArg(&local_78,EditConditionPrefix);
      local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_120.Data.ArrayNum = 0;
      local_120.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar5->ID,&local_120,Digits);
      FStringFormatArg::FStringFormatArg(&local_58,&local_120);
      local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_150.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_150.AllocatorInstance,2,&local_150.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_150.AllocatorInstance.Data,&local_78,2);
      ::FString::FormatImpl(&local_110,L"{0}{1}",&local_150);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_150.AllocatorInstance.Data,local_150.ArrayNum);
      if ((FStringFormatArg *)local_150.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_150.AllocatorInstance.Data);
      }
      if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
      }
      iVar6 = local_110.Data.ArrayNum + -1;
      if (local_110.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      pFVar4 = ::FName::FName((FName *)&local_150,iVar6,
                              (wchar_t *)local_110.Data.AllocatorInstance.Data,FNAME_Add);
      pFVar5 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar4);
      if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_b8.ObjectPtr,pFVar5);
      }
      pUVar8 = local_e0;
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
        pUVar8 = local_e0;
      }
      goto LAB_14dd536c7;
    }
  }
  local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pUVar8 = (UEnum *)0x0;
LAB_14dd536c7:
  FInstancedPropertyBag::GetValueEnum((FInstancedPropertyBag *)this,(FName)local_157,pUVar8);
  bVar3 = UE::MovieGraph::Private::GetOptionalValue<unsigned_char>(local_157,puVar9);
  *(bool *)param_3 = bVar3;
  return;
}

// execGetValueFloat @ 14dd53710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieJobVariableAssignmentContainer::execGetValueFloat
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *this;
  FProperty *pFVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FPropertyBagPropertyDesc *pFVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uchar *puVar9;
  undefined1 auStackY_1c8 [32];
  uchar local_188 [8];
  ForAnyElementType local_180;
  int local_178;
  int local_174;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_170;
  longlong local_160 [2];
  FString local_150;
  FString local_140;
  TObjectPtr<UObject_const_>_u_0 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  TObjectPtr<UObject_const_>_u_0 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  FName local_a8;
  FName local_a0;
  FStringFormatArg local_98;
  FStringFormatArg local_78;
  undefined4 local_58;
  byte local_54;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_160[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_160,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_160);
  }
  local_188[0] = '\0';
  local_188[1] = '\0';
  local_188[2] = '\0';
  local_188[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_188);
  }
  local_128.DebugPtr = (UObject *)0x0;
  local_120 = 0;
  puVar9 = local_188;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  local_118 = 0;
  this = param_1 + 1;
  local_110 = 0;
  local_108 = 0;
  local_100 = 1;
  local_f8 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f0 = 0xffffffff;
  local_e8.DebugPtr = (UObject *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 1;
  local_b8 = 0;
  local_b0 = 0xffffffff;
  if (local_160[0] != 0) {
    local_178 = *(int *)(local_160[0] + 0x58);
    lVar7 = (longlong)local_178;
    _Src = *(void **)(local_160[0] + 0x50);
    local_180.Data = (FScriptContainerElement *)0x0;
    if (local_178 == 0) {
      local_174 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_178,0,&local_180,local_178,&local_174);
      memcpy(local_180.Data,_Src,lVar7 * 2);
    }
    iVar6 = local_178 + -1;
    if (local_178 == 0) {
      iVar6 = 0;
    }
    pFVar4 = ::FName::FName(&local_a8,iVar6,(wchar_t *)local_180.Data,FNAME_Add);
    pFVar5 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar4);
    if (local_180.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data);
    }
    if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_128.ObjectPtr,pFVar5);
      FStringFormatArg::FStringFormatArg(&local_98,EditConditionPrefix);
      local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_150.Data.ArrayNum = 0;
      local_150.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar5->ID,&local_150,Digits);
      FStringFormatArg::FStringFormatArg(&local_78,&local_150);
      local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_170.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_170.AllocatorInstance,2,&local_170.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_170.AllocatorInstance.Data,&local_98,2);
      ::FString::FormatImpl(&local_140,L"{0}{1}",&local_170);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_170.AllocatorInstance.Data,local_170.ArrayNum);
      if ((FStringFormatArg *)local_170.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_170.AllocatorInstance.Data);
      }
      if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.StringValue.Data.AllocatorInstance.Data);
      }
      iVar6 = local_140.Data.ArrayNum + -1;
      if (local_140.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      pFVar4 = ::FName::FName(&local_a0,iVar6,(wchar_t *)local_140.Data.AllocatorInstance.Data,
                              FNAME_Add);
      pFVar5 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar4);
      if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_e8.ObjectPtr,pFVar5);
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      goto LAB_14dd53a30;
    }
  }
  local_160[1] = 0;
LAB_14dd53a30:
  FInstancedPropertyBag::GetValueFloat((FInstancedPropertyBag *)this,(FName)&local_58);
  uVar8 = (ulonglong)local_54;
  if ((2 < uVar8) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,float,TValueOrError<float,EPropertyBagResult>::FWrapErrorType,TValueOrError<float,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar8) == '\0') {
    *(undefined1 *)param_3 = 0;
  }
  else {
    if ((local_54 != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((2 < local_54) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<float,TValueOrError<float,EPropertyBagResult>::FWrapErrorType,TValueOrError<float,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_54])(&local_58);
    *(undefined4 *)puVar9 = local_58;
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execGetValueInt32 @ 14dd53b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieJobVariableAssignmentContainer::execGetValueInt32
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *this;
  FProperty *pFVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FPropertyBagPropertyDesc *pFVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uchar *puVar9;
  undefined1 auStackY_1b8 [32];
  uchar local_178 [8];
  ForAnyElementType local_170;
  int local_168;
  int local_164;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_160;
  longlong local_150 [2];
  FString local_140;
  FString local_130;
  TObjectPtr<UObject_const_>_u_0 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  TObjectPtr<UObject_const_>_u_0 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  FName local_98;
  FName local_90;
  FStringFormatArg local_88;
  FStringFormatArg local_68;
  undefined4 local_48;
  byte local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_150[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_150,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_150);
  }
  local_178[0] = '\0';
  local_178[1] = '\0';
  local_178[2] = '\0';
  local_178[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_178,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_178);
  }
  local_118.DebugPtr = (UObject *)0x0;
  local_110 = 0;
  puVar9 = local_178;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  local_108 = 0;
  this = param_1 + 1;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 1;
  local_e8 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e0 = 0xffffffff;
  local_d8.DebugPtr = (UObject *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 1;
  local_a8 = 0;
  local_a0 = 0xffffffff;
  if (local_150[0] != 0) {
    local_168 = *(int *)(local_150[0] + 0x58);
    lVar7 = (longlong)local_168;
    _Src = *(void **)(local_150[0] + 0x50);
    local_170.Data = (FScriptContainerElement *)0x0;
    if (local_168 == 0) {
      local_164 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_168,0,&local_170,local_168,&local_164);
      memcpy(local_170.Data,_Src,lVar7 * 2);
    }
    iVar6 = local_168 + -1;
    if (local_168 == 0) {
      iVar6 = 0;
    }
    pFVar4 = ::FName::FName(&local_98,iVar6,(wchar_t *)local_170.Data,FNAME_Add);
    pFVar5 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar4);
    if (local_170.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data);
    }
    if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_118.ObjectPtr,pFVar5);
      FStringFormatArg::FStringFormatArg(&local_88,EditConditionPrefix);
      local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.Data.ArrayNum = 0;
      local_140.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar5->ID,&local_140,Digits);
      FStringFormatArg::FStringFormatArg(&local_68,&local_140);
      local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_160.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_160.AllocatorInstance,2,&local_160.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_160.AllocatorInstance.Data,&local_88,2);
      ::FString::FormatImpl(&local_130,L"{0}{1}",&local_160);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_160.AllocatorInstance.Data,local_160.ArrayNum);
      if ((FStringFormatArg *)local_160.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_160.AllocatorInstance.Data);
      }
      if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
      }
      iVar6 = local_130.Data.ArrayNum + -1;
      if (local_130.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      pFVar4 = ::FName::FName(&local_90,iVar6,(wchar_t *)local_130.Data.AllocatorInstance.Data,
                              FNAME_Add);
      pFVar5 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar4);
      if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_d8.ObjectPtr,pFVar5);
      }
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      goto LAB_14dd53e58;
    }
  }
  local_150[1] = 0;
LAB_14dd53e58:
  FInstancedPropertyBag::GetValueInt32((FInstancedPropertyBag *)this,(FName)&local_48);
  uVar8 = (ulonglong)local_44;
  if ((2 < uVar8) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<int,int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar8) == '\0') {
    *(undefined1 *)param_3 = 0;
  }
  else {
    if ((local_44 != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((2 < local_44) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_44])(&local_48);
    *(undefined4 *)puVar9 = local_48;
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execGetValueInt64 @ 14dd53f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieJobVariableAssignmentContainer::execGetValueInt64
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *this;
  FProperty *pFVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FPropertyBagPropertyDesc *pFVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  FName FVar10;
  undefined1 auStackY_1c8 [32];
  ForAnyElementType local_188;
  int local_180;
  int local_17c;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_178;
  longlong local_168;
  longlong local_160 [2];
  FString local_150;
  FString local_140;
  TObjectPtr<UObject_const_>_u_0 local_128;
  undefined8 local_120;
  undefined8 local_118;
  FName local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  TObjectPtr<UObject_const_>_u_0 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  FName local_a8;
  FName local_a0;
  FStringFormatArg local_98;
  FStringFormatArg local_78;
  TValueOrError<__int64,EPropertyBagResult> local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
  local_160[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_160,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_160);
  }
  local_168 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  local_128.DebugPtr = (UObject *)0x0;
  local_120 = 0;
  plVar9 = &local_168;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar9 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  local_118 = 0;
  this = param_1 + 1;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  local_108 = 0;
  local_100 = 1;
  local_f8 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f0 = 0xffffffff;
  local_e8.DebugPtr = (UObject *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 1;
  local_b8 = 0;
  local_b0 = 0xffffffff;
  if (local_160[0] != 0) {
    local_180 = *(int *)(local_160[0] + 0x58);
    lVar7 = (longlong)local_180;
    _Src = *(void **)(local_160[0] + 0x50);
    local_188.Data = (FScriptContainerElement *)0x0;
    if (local_180 == 0) {
      local_17c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_180,0,&local_188,local_180,&local_17c);
      memcpy(local_188.Data,_Src,lVar7 * 2);
    }
    iVar6 = local_180 + -1;
    if (local_180 == 0) {
      iVar6 = 0;
    }
    pFVar4 = ::FName::FName(&local_a8,iVar6,(wchar_t *)local_188.Data,FNAME_Add);
    pFVar5 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar4);
    if (local_188.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data);
    }
    if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_128.ObjectPtr,pFVar5);
      FStringFormatArg::FStringFormatArg(&local_98,EditConditionPrefix);
      local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_150.Data.ArrayNum = 0;
      local_150.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar5->ID,&local_150,Digits);
      FStringFormatArg::FStringFormatArg(&local_78,&local_150);
      local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_178.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_178.AllocatorInstance,2,&local_178.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_178.AllocatorInstance.Data,&local_98,2);
      ::FString::FormatImpl(&local_140,L"{0}{1}",&local_178);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
      if ((FStringFormatArg *)local_178.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_178.AllocatorInstance.Data);
      }
      if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.StringValue.Data.AllocatorInstance.Data);
      }
      iVar6 = local_140.Data.ArrayNum + -1;
      if (local_140.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      pFVar4 = ::FName::FName(&local_a0,iVar6,(wchar_t *)local_140.Data.AllocatorInstance.Data,
                              FNAME_Add);
      pFVar5 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar4);
      if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_e8.ObjectPtr,pFVar5);
      }
      FVar10 = local_110;
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
        FVar10 = local_110;
      }
      goto LAB_14dd5425e;
    }
  }
  local_160[1] = 0;
LAB_14dd5425e:
  FInstancedPropertyBag::GetValueInt64((FInstancedPropertyBag *)this,&local_58,FVar10);
  uVar8 = (ulonglong)local_58.Variant.TypeIndex;
  if ((2 < uVar8) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<int,int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar8 + 4) == '\0') {
    *(undefined1 *)param_3 = 0;
  }
  else {
    if ((local_58.Variant.TypeIndex != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((2 < local_58.Variant.TypeIndex) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<__int64,TValueOrError<__int64,EPropertyBagResult>::FWrapErrorType,TValueOrError<__int64,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.Variant.TypeIndex])(&local_58);
    *plVar9 = local_58.Variant._padding_;
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execGetValueName @ 14dd54350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieJobVariableAssignmentContainer::execGetValueName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *this;
  FProperty *pFVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FPropertyBagPropertyDesc *pFVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uchar *puVar9;
  FName FVar10;
  undefined1 auStackY_1c8 [32];
  uchar local_188 [8];
  ForAnyElementType local_180;
  int local_178;
  int local_174;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_170;
  longlong local_160 [2];
  FString local_150;
  FString local_140;
  TObjectPtr<UObject_const_>_u_0 local_128;
  undefined8 local_120;
  undefined8 local_118;
  FName local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  TObjectPtr<UObject_const_>_u_0 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  FName local_a8;
  FName local_a0;
  FStringFormatArg local_98;
  FStringFormatArg local_78;
  TValueOrError<FName,EPropertyBagResult> local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
  local_160[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_160,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_160);
  }
  local_188[0] = '\0';
  local_188[1] = '\0';
  local_188[2] = '\0';
  local_188[3] = '\0';
  local_188[4] = '\0';
  local_188[5] = '\0';
  local_188[6] = '\0';
  local_188[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_188);
  }
  local_128.DebugPtr = (UObject *)0x0;
  local_120 = 0;
  puVar9 = local_188;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  local_118 = 0;
  this = param_1 + 1;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  local_108 = 0;
  local_100 = 1;
  local_f8 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f0 = 0xffffffff;
  local_e8.DebugPtr = (UObject *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 1;
  local_b8 = 0;
  local_b0 = 0xffffffff;
  if (local_160[0] != 0) {
    local_178 = *(int *)(local_160[0] + 0x58);
    lVar7 = (longlong)local_178;
    _Src = *(void **)(local_160[0] + 0x50);
    local_180.Data = (FScriptContainerElement *)0x0;
    if (local_178 == 0) {
      local_174 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_178,0,&local_180,local_178,&local_174);
      memcpy(local_180.Data,_Src,lVar7 * 2);
    }
    iVar6 = local_178 + -1;
    if (local_178 == 0) {
      iVar6 = 0;
    }
    pFVar4 = ::FName::FName(&local_a8,iVar6,(wchar_t *)local_180.Data,FNAME_Add);
    pFVar5 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar4);
    if (local_180.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data);
    }
    if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_128.ObjectPtr,pFVar5);
      FStringFormatArg::FStringFormatArg(&local_98,EditConditionPrefix);
      local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_150.Data.ArrayNum = 0;
      local_150.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar5->ID,&local_150,Digits);
      FStringFormatArg::FStringFormatArg(&local_78,&local_150);
      local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_170.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_170.AllocatorInstance,2,&local_170.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_170.AllocatorInstance.Data,&local_98,2);
      ::FString::FormatImpl(&local_140,L"{0}{1}",&local_170);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_170.AllocatorInstance.Data,local_170.ArrayNum);
      if ((FStringFormatArg *)local_170.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_170.AllocatorInstance.Data);
      }
      if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.StringValue.Data.AllocatorInstance.Data);
      }
      iVar6 = local_140.Data.ArrayNum + -1;
      if (local_140.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      pFVar4 = ::FName::FName(&local_a0,iVar6,(wchar_t *)local_140.Data.AllocatorInstance.Data,
                              FNAME_Add);
      pFVar5 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar4);
      if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_e8.ObjectPtr,pFVar5);
      }
      FVar10 = local_110;
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
        FVar10 = local_110;
      }
      goto LAB_14dd5466e;
    }
  }
  local_160[1] = 0;
LAB_14dd5466e:
  FInstancedPropertyBag::GetValueName((FInstancedPropertyBag *)this,&local_58,FVar10);
  uVar8 = (ulonglong)local_58.Variant.TypeIndex;
  if ((2 < uVar8) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar8) == '\0') {
    *(undefined1 *)param_3 = 0;
  }
  else {
    if ((local_58.Variant.TypeIndex != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((2 < local_58.Variant.TypeIndex) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.Variant.TypeIndex])(&local_58);
    puVar9[0] = local_58.Variant._0_1_;
    puVar9[1] = local_58.Variant._1_1_;
    puVar9[2] = local_58.Variant._2_1_;
    puVar9[3] = local_58.Variant._3_1_;
    puVar9[4] = local_58.Variant._4_1_;
    puVar9[5] = local_58.Variant._5_1_;
    puVar9[6] = local_58.Variant._6_1_;
    puVar9[7] = local_58.Variant._7_1_;
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execGetValueObject @ 14dd54760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
UMovieJobVariableAssignmentContainer::execGetValueObject
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  void *_Src;
  code *pcVar3;
  UClass *pUVar4;
  bool bVar5;
  FName *pFVar6;
  FPropertyBagPropertyDesc *pFVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  FName FVar11;
  undefined1 auStackY_1c8 [32];
  ForAnyElementType local_188;
  int local_180;
  int local_17c;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_178;
  UClass *local_168;
  longlong local_160 [3];
  FString local_148;
  FString local_138;
  TObjectPtr<UObject_const_>_u_0 local_128;
  undefined8 local_120;
  undefined8 local_118;
  FName local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  TObjectPtr<UObject_const_>_u_0 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  FName local_a8;
  FName local_a0;
  FStringFormatArg local_98;
  FStringFormatArg local_78;
  TValueOrError<UObject_*,EPropertyBagResult> local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
  local_160[0] = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_160,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_160);
  }
  local_160[1] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_160 + 1,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_160 + 1);
  }
  local_168 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  pUVar4 = local_168;
  local_128.DebugPtr = (UObject *)0x0;
  local_120 = 0;
  local_118 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  local_108 = 0;
  local_100 = 1;
  local_f8 = 0;
  local_f0 = 0xffffffff;
  local_e8.DebugPtr = (UObject *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 1;
  local_b8 = 0;
  local_b0 = 0xffffffff;
  if (local_160[0] != 0) {
    local_180 = *(int *)(local_160[0] + 0x58);
    lVar9 = (longlong)local_180;
    _Src = *(void **)(local_160[0] + 0x50);
    local_188.Data = (FScriptContainerElement *)0x0;
    if (local_180 == 0) {
      local_17c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_180,0,&local_188,local_180,&local_17c);
      memcpy(local_188.Data,_Src,lVar9 * 2);
    }
    iVar8 = local_180 + -1;
    if (local_180 == 0) {
      iVar8 = 0;
    }
    pFVar6 = ::FName::FName(&local_a8,iVar8,(wchar_t *)local_188.Data,FNAME_Add);
    pFVar7 = FInstancedPropertyBag::FindPropertyDescByName
                       ((FInstancedPropertyBag *)(param_1 + 1),*pFVar6);
    if (local_188.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data);
    }
    if (pFVar7 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_128.ObjectPtr,pFVar7);
      FStringFormatArg::FStringFormatArg(&local_98,EditConditionPrefix);
      local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.Data.ArrayNum = 0;
      local_148.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar7->ID,&local_148,Digits);
      FStringFormatArg::FStringFormatArg(&local_78,&local_148);
      local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_178.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_178.AllocatorInstance,2,&local_178.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_178.AllocatorInstance.Data,&local_98,2);
      ::FString::FormatImpl(&local_138,L"{0}{1}",&local_178);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
      if ((FStringFormatArg *)local_178.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_178.AllocatorInstance.Data);
      }
      if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.StringValue.Data.AllocatorInstance.Data);
      }
      iVar8 = local_138.Data.ArrayNum + -1;
      if (local_138.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      pFVar6 = ::FName::FName(&local_a0,iVar8,(wchar_t *)local_138.Data.AllocatorInstance.Data,
                              FNAME_Add);
      pFVar7 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(param_1 + 1),*pFVar6);
      if (pFVar7 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_e8.ObjectPtr,pFVar7);
      }
      FVar11 = local_110;
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
        FVar11 = local_110;
      }
      goto LAB_14dd54a9e;
    }
  }
  local_160[2] = 0;
LAB_14dd54a9e:
  FInstancedPropertyBag::GetValueObject
            ((FInstancedPropertyBag *)(param_1 + 1),&local_58,FVar11,pUVar4);
  uVar10 = (ulonglong)local_58.Variant.TypeIndex;
  if ((2 < uVar10) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar10) == '\0') {
    *(undefined1 *)param_3 = 0;
  }
  else {
    if ((local_58.Variant.TypeIndex != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((2 < local_58.Variant.TypeIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.Variant.TypeIndex])(&local_58);
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execGetValueSerializedString @ 14dd54ba0

void __cdecl
UMovieJobVariableAssignmentContainer::execGetValueSerializedString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  UMovieGraphVariable *local_res10;
  FString local_18;
  
  local_res10 = (UMovieGraphVariable *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = GetValueSerializedString
                     ((UMovieJobVariableAssignmentContainer *)param_1,&local_18,local_res10);
  if (param_3 != pFVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar2->Data).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetValueString @ 14dd54c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieJobVariableAssignmentContainer::execGetValueString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *this;
  FProperty *pFVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FPropertyBagPropertyDesc *pFVar6;
  int iVar7;
  longlong lVar8;
  FString *pFVar9;
  FName FVar10;
  undefined1 auStackY_1c8 [32];
  ForAnyElementType local_188;
  int local_180;
  int local_17c;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_178;
  longlong local_168;
  FString local_160;
  undefined8 local_150;
  FString local_148;
  FString local_138;
  TObjectPtr<UObject_const_>_u_0 local_128;
  undefined8 local_120;
  undefined8 local_118;
  FName local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  TObjectPtr<UObject_const_>_u_0 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  FName local_a8;
  FName local_a0;
  FStringFormatArg local_98;
  FStringFormatArg local_78;
  TValueOrError<FString,EPropertyBagResult> local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
  local_168 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.Data.ArrayNum = 0;
  local_160.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_160,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_160);
  }
  local_128.DebugPtr = (UObject *)0x0;
  local_120 = 0;
  pFVar9 = &local_160;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar9 = (FString *)param_2->MostRecentPropertyAddress;
  }
  local_118 = 0;
  this = param_1 + 1;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  local_108 = 0;
  local_100 = 1;
  local_f8 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f0 = 0xffffffff;
  local_e8.DebugPtr = (UObject *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 1;
  local_b8 = 0;
  local_b0 = 0xffffffff;
  if (local_168 != 0) {
    local_180 = *(int *)(local_168 + 0x58);
    lVar8 = (longlong)local_180;
    _Src = *(void **)(local_168 + 0x50);
    local_188.Data = (FScriptContainerElement *)0x0;
    if (local_180 == 0) {
      local_17c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_180,0,&local_188,local_180,&local_17c);
      memcpy(local_188.Data,_Src,lVar8 * 2);
    }
    iVar7 = local_180 + -1;
    if (local_180 == 0) {
      iVar7 = 0;
    }
    pFVar5 = ::FName::FName(&local_a8,iVar7,(wchar_t *)local_188.Data,FNAME_Add);
    pFVar6 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar5);
    if (local_188.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data);
    }
    if (pFVar6 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_128.ObjectPtr,pFVar6);
      FStringFormatArg::FStringFormatArg(&local_98,EditConditionPrefix);
      local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.Data.ArrayNum = 0;
      local_148.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar6->ID,&local_148,Digits);
      FStringFormatArg::FStringFormatArg(&local_78,&local_148);
      local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_178.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_178.AllocatorInstance,2,&local_178.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_178.AllocatorInstance.Data,&local_98,2);
      ::FString::FormatImpl(&local_138,L"{0}{1}",&local_178);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
      if ((FStringFormatArg *)local_178.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_178.AllocatorInstance.Data);
      }
      if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.StringValue.Data.AllocatorInstance.Data);
      }
      iVar7 = local_138.Data.ArrayNum + -1;
      if (local_138.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      pFVar5 = ::FName::FName(&local_a0,iVar7,(wchar_t *)local_138.Data.AllocatorInstance.Data,
                              FNAME_Add);
      pFVar6 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar5);
      if (pFVar6 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_e8.ObjectPtr,pFVar6);
      }
      FVar10 = local_110;
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
        FVar10 = local_110;
      }
      goto LAB_14dd54fa0;
    }
  }
  local_150 = 0;
LAB_14dd54fa0:
  FInstancedPropertyBag::GetValueString((FInstancedPropertyBag *)this,&local_58,FVar10);
  bVar3 = UE::MovieGraph::Private::GetOptionalValue<FString>(&local_58,pFVar9);
  if ((2 < local_58.Variant.TypeIndex) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_58.Variant.TypeIndex])(&local_58);
  *(bool *)param_3 = bVar3;
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetValueText @ 14dd55040

void __cdecl
UMovieJobVariableAssignmentContainer::execGetValueText
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FText *pFVar3;
  UMovieGraphVariable *local_res10;
  FText local_18;
  
  local_res10 = (UMovieGraphVariable *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar3 = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar3 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetValueText((UMovieJobVariableAssignmentContainer *)param_1,local_res10,pFVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execGetValueType @ 14dd55150

void __cdecl
UMovieJobVariableAssignmentContainer::execGetValueType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  FName *pFVar2;
  FPropertyBagPropertyDesc *pFVar3;
  int iVar4;
  FName FVar5;
  longlong lVar6;
  UObject *this;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_138;
  ForAnyElementType local_128;
  int local_120;
  int local_11c;
  longlong local_118;
  FString local_110;
  FString local_100;
  TObjectPtr<UObject_const_>_u_0 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  FName local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  TObjectPtr<UObject_const_>_u_0 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  
  FVar5.ComparisonIndex.Value = 0;
  FVar5.Number = 0;
  local_118 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_e8.DebugPtr = (UObject *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  this = param_1 + 1;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c8 = 0;
  local_c0 = 1;
  local_b8 = 0;
  local_b0 = 0xffffffff;
  local_a8.DebugPtr = (UObject *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 1;
  local_78 = 0;
  local_70 = 0xffffffff;
  if (local_118 != 0) {
    local_120 = *(int *)(local_118 + 0x58);
    lVar6 = (longlong)local_120;
    _Src = *(void **)(local_118 + 0x50);
    local_128.Data = (FScriptContainerElement *)0x0;
    if (local_120 == 0) {
      local_11c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_120,0,&local_128,local_120,&local_11c);
      memcpy(local_128.Data,_Src,lVar6 * 2);
    }
    iVar4 = local_120 + -1;
    if (local_120 == 0) {
      iVar4 = 0;
    }
    pFVar2 = ::FName::FName((FName *)&local_138,iVar4,(wchar_t *)local_128.Data,FNAME_Add);
    pFVar3 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar2);
    if (local_128.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data);
    }
    if (pFVar3 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_e8.ObjectPtr,pFVar3);
      FStringFormatArg::FStringFormatArg(&local_68,EditConditionPrefix);
      local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_110.Data.ArrayNum = 0;
      local_110.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar3->ID,&local_110,Digits);
      FStringFormatArg::FStringFormatArg(&local_48,&local_110);
      local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_138.AllocatorInstance,2,&local_138.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_138.AllocatorInstance.Data,&local_68,2);
      ::FString::FormatImpl(&local_100,L"{0}{1}",&local_138);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
      if ((FStringFormatArg *)local_138.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
      if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
      }
      iVar4 = local_100.Data.ArrayNum + -1;
      if (local_100.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      pFVar2 = ::FName::FName((FName *)&local_138,iVar4,
                              (wchar_t *)local_100.Data.AllocatorInstance.Data,FNAME_Add);
      pFVar3 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar2);
      if (pFVar3 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_a8.ObjectPtr,pFVar3);
      }
      FVar5 = local_d0;
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
        FVar5 = local_d0;
      }
      goto LAB_14dd55423;
    }
  }
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14dd55423:
  pFVar3 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,FVar5);
  if (pFVar3 == (FPropertyBagPropertyDesc *)0x0) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  *(EPropertyBagPropertyType *)param_3 = pFVar3->ValueType;
  return;
}

// execGetValueTypeObject @ 14dd55470

void __cdecl
UMovieJobVariableAssignmentContainer::execGetValueTypeObject
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  FName *pFVar2;
  FPropertyBagPropertyDesc *pFVar3;
  int iVar4;
  FName FVar5;
  longlong lVar6;
  UObject *this;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_138;
  ForAnyElementType local_128;
  int local_120;
  int local_11c;
  longlong local_118;
  FString local_110;
  FString local_100;
  TObjectPtr<UObject_const_>_u_0 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  FName local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  TObjectPtr<UObject_const_>_u_0 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  
  FVar5.ComparisonIndex.Value = 0;
  FVar5.Number = 0;
  local_118 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_e8.DebugPtr = (UObject *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  this = param_1 + 1;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c8 = 0;
  local_c0 = 1;
  local_b8 = 0;
  local_b0 = 0xffffffff;
  local_a8.DebugPtr = (UObject *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 1;
  local_78 = 0;
  local_70 = 0xffffffff;
  if (local_118 != 0) {
    local_120 = *(int *)(local_118 + 0x58);
    lVar6 = (longlong)local_120;
    _Src = *(void **)(local_118 + 0x50);
    local_128.Data = (FScriptContainerElement *)0x0;
    if (local_120 == 0) {
      local_11c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_120,0,&local_128,local_120,&local_11c);
      memcpy(local_128.Data,_Src,lVar6 * 2);
    }
    iVar4 = local_120 + -1;
    if (local_120 == 0) {
      iVar4 = 0;
    }
    pFVar2 = ::FName::FName((FName *)&local_138,iVar4,(wchar_t *)local_128.Data,FNAME_Add);
    pFVar3 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar2);
    if (local_128.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data);
    }
    if (pFVar3 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_e8.ObjectPtr,pFVar3);
      FStringFormatArg::FStringFormatArg(&local_68,EditConditionPrefix);
      local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_110.Data.ArrayNum = 0;
      local_110.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar3->ID,&local_110,Digits);
      FStringFormatArg::FStringFormatArg(&local_48,&local_110);
      local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_138.AllocatorInstance,2,&local_138.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_138.AllocatorInstance.Data,&local_68,2);
      ::FString::FormatImpl(&local_100,L"{0}{1}",&local_138);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
      if ((FStringFormatArg *)local_138.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
      if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
      }
      iVar4 = local_100.Data.ArrayNum + -1;
      if (local_100.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      pFVar2 = ::FName::FName((FName *)&local_138,iVar4,
                              (wchar_t *)local_100.Data.AllocatorInstance.Data,FNAME_Add);
      pFVar3 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar2);
      if (pFVar3 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_a8.ObjectPtr,pFVar3);
      }
      FVar5 = local_d0;
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
        FVar5 = local_d0;
      }
      goto LAB_14dd55741;
    }
  }
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14dd55741:
  pFVar3 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,FVar5);
  if (pFVar3 == (FPropertyBagPropertyDesc *)0x0) {
    *(undefined8 *)param_3 = 0;
    return;
  }
  *(TObjectPtr<UObject_const_>_u_0 *)param_3 = (pFVar3->ValueTypeObject).field0_0x0;
  return;
}

// execGetVariableAssignmentEnableState @ 14dd557c0

void __cdecl
UMovieJobVariableAssignmentContainer::execGetVariableAssignmentEnableState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool *pbVar3;
  bool local_res10 [8];
  UMovieGraphVariable *local_res18 [2];
  
  local_res18[0] = (UMovieGraphVariable *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar3 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar3 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetVariableAssignmentEnableState
                    ((UMovieJobVariableAssignmentContainer *)param_1,local_res18[0],pbVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetGraphConfig @ 14dd573e0

void __cdecl
UMovieJobVariableAssignmentContainer::execSetGraphConfig
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar2;
  TPersistentObjectPtr<FSoftObjectPath> local_38;
  
  local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ObjectID.SubPathString.Data.ArrayNum = 0;
  local_38.ObjectID.SubPathString.Data.ArrayMax = 0;
  local_38.WeakPtr.ObjectIndex = 0;
  local_38.WeakPtr.ObjectSerialNumber = 0;
  local_38.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_38.ObjectID.AssetPath.AssetName.Number = 0;
  local_38.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_38.ObjectID.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_38.ObjectID.SubPathString,0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar2 = &local_38;
  if ((TPersistentObjectPtr<FSoftObjectPath> *)param_2->MostRecentPropertyAddress !=
      (TPersistentObjectPtr<FSoftObjectPath> *)0x0) {
    pTVar2 = (TPersistentObjectPtr<FSoftObjectPath> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&param_1[1].field_0x10,pTVar2);
  if (local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetValueBool @ 14dd57920

void __cdecl
UMovieJobVariableAssignmentContainer::execSetValueBool
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  EPropertyBagResult EVar2;
  FName *pFVar3;
  FPropertyBagPropertyDesc *pFVar4;
  int iVar5;
  FName FVar6;
  longlong lVar7;
  bool bVar8;
  int local_148 [2];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_140;
  ForAnyElementType local_130;
  int local_128;
  int local_124;
  longlong local_120;
  FString local_118;
  FString local_108;
  TObjectPtr<UObject_const_>_u_0 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  FName local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  TObjectPtr<UObject_const_>_u_0 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  local_120 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_148[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_148);
  }
  bVar8 = local_148[0] != 0;
  local_f8.DebugPtr = (UObject *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  local_d8 = 0;
  local_d0 = 1;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c8 = 0;
  local_c0 = 0xffffffff;
  local_b8.DebugPtr = (UObject *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  local_80 = 0xffffffff;
  if (local_120 != 0) {
    local_128 = *(int *)(local_120 + 0x58);
    lVar7 = (longlong)local_128;
    _Src = *(void **)(local_120 + 0x50);
    local_130.Data = (FScriptContainerElement *)0x0;
    if (local_128 == 0) {
      local_124 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_128,0,&local_130,local_128,&local_124);
      memcpy(local_130.Data,_Src,lVar7 * 2);
    }
    iVar5 = local_128 + -1;
    if (local_128 == 0) {
      iVar5 = 0;
    }
    pFVar3 = ::FName::FName((FName *)&local_140,iVar5,(wchar_t *)local_130.Data,FNAME_Add);
    pFVar4 = FInstancedPropertyBag::FindPropertyDescByName
                       ((FInstancedPropertyBag *)(param_1 + 1),*pFVar3);
    if (local_130.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data);
    }
    if (pFVar4 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_f8.ObjectPtr,pFVar4);
      FStringFormatArg::FStringFormatArg(&local_78,EditConditionPrefix);
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar4->ID,&local_118,Digits);
      FStringFormatArg::FStringFormatArg(&local_58,&local_118);
      local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_140.AllocatorInstance,2,&local_140.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_140.AllocatorInstance.Data,&local_78,2);
      ::FString::FormatImpl(&local_108,L"{0}{1}",&local_140);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_140.AllocatorInstance.Data,local_140.ArrayNum);
      if ((FStringFormatArg *)local_140.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_140.AllocatorInstance.Data);
      }
      if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
      }
      iVar5 = local_108.Data.ArrayNum + -1;
      if (local_108.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      pFVar3 = ::FName::FName((FName *)&local_140,iVar5,
                              (wchar_t *)local_108.Data.AllocatorInstance.Data,FNAME_Add);
      pFVar4 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(param_1 + 1),*pFVar3);
      if (pFVar4 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_b8.ObjectPtr,pFVar4);
      }
      FVar6 = local_e0;
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
        FVar6 = local_e0;
      }
      goto LAB_14dd57c26;
    }
  }
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14dd57c26:
  EVar2 = FInstancedPropertyBag::SetValueBool((FInstancedPropertyBag *)(param_1 + 1),FVar6,bVar8);
  *(bool *)param_3 = EVar2 == Success;
  return;
}

// execSetValueByte @ 14dd57c60

void __cdecl
UMovieJobVariableAssignmentContainer::execSetValueByte
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  uchar uVar2;
  EPropertyBagResult EVar3;
  FName *pFVar4;
  FPropertyBagPropertyDesc *pFVar5;
  int iVar6;
  FName FVar7;
  longlong lVar8;
  uchar local_148 [8];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_140;
  ForAnyElementType local_130;
  int local_128;
  int local_124;
  longlong local_120;
  FString local_118;
  FString local_108;
  TObjectPtr<UObject_const_>_u_0 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  FName local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  TObjectPtr<UObject_const_>_u_0 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  
  FVar7.ComparisonIndex.Value = 0;
  FVar7.Number = 0;
  local_120 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_148[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_148);
  }
  uVar2 = local_148[0];
  local_f8.DebugPtr = (UObject *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  local_d8 = 0;
  local_d0 = 1;
  local_c8 = 0;
  local_c0 = 0xffffffff;
  local_b8.DebugPtr = (UObject *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  local_80 = 0xffffffff;
  if (local_120 != 0) {
    local_128 = *(int *)(local_120 + 0x58);
    lVar8 = (longlong)local_128;
    _Src = *(void **)(local_120 + 0x50);
    local_130.Data = (FScriptContainerElement *)0x0;
    if (local_128 == 0) {
      local_124 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_128,0,&local_130,local_128,&local_124);
      memcpy(local_130.Data,_Src,lVar8 * 2);
    }
    iVar6 = local_128 + -1;
    if (local_128 == 0) {
      iVar6 = 0;
    }
    pFVar4 = ::FName::FName((FName *)&local_140,iVar6,(wchar_t *)local_130.Data,FNAME_Add);
    pFVar5 = FInstancedPropertyBag::FindPropertyDescByName
                       ((FInstancedPropertyBag *)(param_1 + 1),*pFVar4);
    if (local_130.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data);
    }
    if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_f8.ObjectPtr,pFVar5);
      FStringFormatArg::FStringFormatArg(&local_78,EditConditionPrefix);
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar5->ID,&local_118,Digits);
      FStringFormatArg::FStringFormatArg(&local_58,&local_118);
      local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_140.AllocatorInstance,2,&local_140.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_140.AllocatorInstance.Data,&local_78,2);
      ::FString::FormatImpl(&local_108,L"{0}{1}",&local_140);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_140.AllocatorInstance.Data,local_140.ArrayNum);
      if ((FStringFormatArg *)local_140.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_140.AllocatorInstance.Data);
      }
      if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
      }
      iVar6 = local_108.Data.ArrayNum + -1;
      if (local_108.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      pFVar4 = ::FName::FName((FName *)&local_140,iVar6,
                              (wchar_t *)local_108.Data.AllocatorInstance.Data,FNAME_Add);
      pFVar5 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(param_1 + 1),*pFVar4);
      if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_b8.ObjectPtr,pFVar5);
      }
      FVar7 = local_e0;
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
        FVar7 = local_e0;
      }
      goto LAB_14dd57f63;
    }
  }
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14dd57f63:
  EVar3 = FInstancedPropertyBag::SetValueByte((FInstancedPropertyBag *)(param_1 + 1),FVar7,uVar2);
  *(bool *)param_3 = EVar3 == Success;
  return;
}

// execSetValueClass @ 14dd57fa0

void __cdecl
UMovieJobVariableAssignmentContainer::execSetValueClass
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  UClass *pUVar2;
  EPropertyBagResult EVar3;
  FName *pFVar4;
  FPropertyBagPropertyDesc *pFVar5;
  int iVar6;
  FName FVar7;
  longlong lVar8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_148;
  ForAnyElementType local_138;
  int local_130;
  int local_12c;
  UClass *local_128;
  longlong local_120;
  FString local_118;
  FString local_108;
  TObjectPtr<UObject_const_>_u_0 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  FName local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  TObjectPtr<UObject_const_>_u_0 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  
  FVar7.ComparisonIndex.Value = 0;
  FVar7.Number = 0;
  local_120 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_128 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  pUVar2 = local_128;
  local_f8.DebugPtr = (UObject *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  local_d8 = 0;
  local_d0 = 1;
  local_c8 = 0;
  local_c0 = 0xffffffff;
  local_b8.DebugPtr = (UObject *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  local_80 = 0xffffffff;
  if (local_120 != 0) {
    local_130 = *(int *)(local_120 + 0x58);
    lVar8 = (longlong)local_130;
    _Src = *(void **)(local_120 + 0x50);
    local_138.Data = (FScriptContainerElement *)0x0;
    if (local_130 == 0) {
      local_12c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_130,0,&local_138,local_130,&local_12c);
      memcpy(local_138.Data,_Src,lVar8 * 2);
    }
    iVar6 = local_130 + -1;
    if (local_130 == 0) {
      iVar6 = 0;
    }
    pFVar4 = ::FName::FName((FName *)&local_148,iVar6,(wchar_t *)local_138.Data,FNAME_Add);
    pFVar5 = FInstancedPropertyBag::FindPropertyDescByName
                       ((FInstancedPropertyBag *)(param_1 + 1),*pFVar4);
    if (local_138.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data);
    }
    if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_f8.ObjectPtr,pFVar5);
      FStringFormatArg::FStringFormatArg(&local_78,EditConditionPrefix);
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar5->ID,&local_118,Digits);
      FStringFormatArg::FStringFormatArg(&local_58,&local_118);
      local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_148.AllocatorInstance,2,&local_148.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_148.AllocatorInstance.Data,&local_78,2);
      ::FString::FormatImpl(&local_108,L"{0}{1}",&local_148);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_148.AllocatorInstance.Data,local_148.ArrayNum);
      if ((FStringFormatArg *)local_148.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_148.AllocatorInstance.Data);
      }
      if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
      }
      iVar6 = local_108.Data.ArrayNum + -1;
      if (local_108.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      pFVar4 = ::FName::FName((FName *)&local_148,iVar6,
                              (wchar_t *)local_108.Data.AllocatorInstance.Data,FNAME_Add);
      pFVar5 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(param_1 + 1),*pFVar4);
      if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_b8.ObjectPtr,pFVar5);
      }
      FVar7 = local_e0;
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
        FVar7 = local_e0;
      }
      goto LAB_14dd582a2;
    }
  }
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14dd582a2:
  EVar3 = FInstancedPropertyBag::SetValueClass((FInstancedPropertyBag *)(param_1 + 1),FVar7,pUVar2);
  *(bool *)param_3 = EVar3 == Success;
  return;
}

// execSetValueDouble @ 14dd582e0

void __cdecl
UMovieJobVariableAssignmentContainer::execSetValueDouble
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  double dVar2;
  EPropertyBagResult EVar3;
  FName *pFVar4;
  FPropertyBagPropertyDesc *pFVar5;
  int iVar6;
  FName FVar7;
  longlong lVar8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_158;
  ForAnyElementType local_148;
  int local_140;
  int local_13c;
  double local_138;
  longlong local_130;
  FString local_128;
  FString local_118;
  TObjectPtr<UObject_const_>_u_0 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  FName local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  TObjectPtr<UObject_const_>_u_0 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  FStringFormatArg local_88;
  FStringFormatArg local_68;
  
  FVar7.ComparisonIndex.Value = 0;
  FVar7.Number = 0;
  local_130 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_130,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_130);
  }
  local_138 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  dVar2 = local_138;
  local_108.DebugPtr = (UObject *)0x0;
  local_100 = 0;
  local_f8 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  local_e8 = 0;
  local_e0 = 1;
  local_d8 = 0;
  local_d0 = 0xffffffff;
  local_c8.DebugPtr = (UObject *)0x0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_90 = 0xffffffff;
  if (local_130 != 0) {
    local_140 = *(int *)(local_130 + 0x58);
    lVar8 = (longlong)local_140;
    _Src = *(void **)(local_130 + 0x50);
    local_148.Data = (FScriptContainerElement *)0x0;
    if (local_140 == 0) {
      local_13c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_140,0,&local_148,local_140,&local_13c);
      memcpy(local_148.Data,_Src,lVar8 * 2);
    }
    iVar6 = local_140 + -1;
    if (local_140 == 0) {
      iVar6 = 0;
    }
    pFVar4 = ::FName::FName((FName *)&local_158,iVar6,(wchar_t *)local_148.Data,FNAME_Add);
    pFVar5 = FInstancedPropertyBag::FindPropertyDescByName
                       ((FInstancedPropertyBag *)(param_1 + 1),*pFVar4);
    if (local_148.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data);
    }
    if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_108.ObjectPtr,pFVar5);
      FStringFormatArg::FStringFormatArg(&local_88,EditConditionPrefix);
      local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.Data.ArrayNum = 0;
      local_128.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar5->ID,&local_128,Digits);
      FStringFormatArg::FStringFormatArg(&local_68,&local_128);
      local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_158.AllocatorInstance,2,&local_158.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_158.AllocatorInstance.Data,&local_88,2);
      ::FString::FormatImpl(&local_118,L"{0}{1}",&local_158);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_158.AllocatorInstance.Data,local_158.ArrayNum);
      if ((FStringFormatArg *)local_158.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_158.AllocatorInstance.Data);
      }
      if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
      }
      iVar6 = local_118.Data.ArrayNum + -1;
      if (local_118.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      pFVar4 = ::FName::FName((FName *)&local_158,iVar6,
                              (wchar_t *)local_118.Data.AllocatorInstance.Data,FNAME_Add);
      pFVar5 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(param_1 + 1),*pFVar4);
      if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_c8.ObjectPtr,pFVar5);
      }
      FVar7 = local_f0;
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
        FVar7 = local_f0;
      }
      goto LAB_14dd585ea;
    }
  }
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14dd585ea:
  EVar3 = FInstancedPropertyBag::SetValueDouble((FInstancedPropertyBag *)(param_1 + 1),FVar7,dVar2);
  *(bool *)param_3 = EVar3 == Success;
  return;
}

// execSetValueEnum @ 14dd58620

void __cdecl
UMovieJobVariableAssignmentContainer::execSetValueEnum
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *this;
  FField **ppFVar1;
  FProperty *pFVar2;
  void *_Src;
  uchar uVar3;
  UEnum *pUVar4;
  EPropertyBagResult EVar5;
  FName *pFVar6;
  FPropertyBagPropertyDesc *pFVar7;
  int iVar8;
  FName FVar9;
  longlong lVar10;
  uchar local_158 [8];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_150;
  ForAnyElementType local_140;
  int local_138;
  int local_134;
  UEnum *local_130;
  longlong local_128;
  FString local_120;
  FString local_110;
  TObjectPtr<UObject_const_>_u_0 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  FName local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  TObjectPtr<UObject_const_>_u_0 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  
  local_128 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_158[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_158,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_158);
  }
  local_130 = (UEnum *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_130,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_130);
  }
  pUVar4 = local_130;
  uVar3 = local_158[0];
  this = param_1 + 1;
  local_d0 = 1;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
  local_c0 = 0xffffffff;
  local_f8.DebugPtr = (UObject *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f0 = 0;
  local_e8 = 0;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_b8.DebugPtr = (UObject *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  local_80 = 0xffffffff;
  if (local_128 != 0) {
    local_138 = *(int *)(local_128 + 0x58);
    lVar10 = (longlong)local_138;
    _Src = *(void **)(local_128 + 0x50);
    local_140.Data = (FScriptContainerElement *)0x0;
    if (local_138 == 0) {
      local_134 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_138,0,&local_140,local_138,&local_134);
      memcpy(local_140.Data,_Src,lVar10 * 2);
    }
    iVar8 = local_138 + -1;
    if (local_138 == 0) {
      iVar8 = 0;
    }
    pFVar6 = ::FName::FName((FName *)&local_150,iVar8,(wchar_t *)local_140.Data,FNAME_Add);
    pFVar7 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar6);
    if (local_140.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data);
    }
    if (pFVar7 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_f8.ObjectPtr,pFVar7);
      FStringFormatArg::FStringFormatArg(&local_78,EditConditionPrefix);
      local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_120.Data.ArrayNum = 0;
      local_120.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar7->ID,&local_120,Digits);
      FStringFormatArg::FStringFormatArg(&local_58,&local_120);
      local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_150.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_150.AllocatorInstance,2,&local_150.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_150.AllocatorInstance.Data,&local_78,2);
      ::FString::FormatImpl(&local_110,L"{0}{1}",&local_150);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_150.AllocatorInstance.Data,local_150.ArrayNum);
      if ((FStringFormatArg *)local_150.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_150.AllocatorInstance.Data);
      }
      if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
      }
      iVar8 = local_110.Data.ArrayNum + -1;
      if (local_110.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      pFVar6 = ::FName::FName((FName *)&local_150,iVar8,
                              (wchar_t *)local_110.Data.AllocatorInstance.Data,FNAME_Add);
      pFVar7 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar6);
      if (pFVar7 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_b8.ObjectPtr,pFVar7);
      }
      FVar9 = local_e0;
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
        FVar9 = local_e0;
      }
      goto LAB_14dd5895a;
    }
  }
  local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14dd5895a:
  EVar5 = FInstancedPropertyBag::SetValueEnum((FInstancedPropertyBag *)this,FVar9,uVar3,pUVar4);
  *(bool *)param_3 = EVar5 == Success;
  return;
}

// execSetValueFloat @ 14dd589a0

void __cdecl
UMovieJobVariableAssignmentContainer::execSetValueFloat
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  float fVar2;
  EPropertyBagResult EVar3;
  FName *pFVar4;
  FPropertyBagPropertyDesc *pFVar5;
  int iVar6;
  FName FVar7;
  longlong lVar8;
  float local_158 [2];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_150;
  ForAnyElementType local_140;
  int local_138;
  int local_134;
  longlong local_130;
  FString local_128;
  FString local_118;
  TObjectPtr<UObject_const_>_u_0 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  FName local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  TObjectPtr<UObject_const_>_u_0 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  FStringFormatArg local_88;
  FStringFormatArg local_68;
  
  FVar7.ComparisonIndex.Value = 0;
  FVar7.Number = 0;
  local_130 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_130,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_130);
  }
  local_158[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_158);
  }
  fVar2 = local_158[0];
  local_108.DebugPtr = (UObject *)0x0;
  local_100 = 0;
  local_f8 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  local_e8 = 0;
  local_e0 = 1;
  local_d8 = 0;
  local_d0 = 0xffffffff;
  local_c8.DebugPtr = (UObject *)0x0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_90 = 0xffffffff;
  if (local_130 != 0) {
    local_138 = *(int *)(local_130 + 0x58);
    lVar8 = (longlong)local_138;
    _Src = *(void **)(local_130 + 0x50);
    local_140.Data = (FScriptContainerElement *)0x0;
    if (local_138 == 0) {
      local_134 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_138,0,&local_140,local_138,&local_134);
      memcpy(local_140.Data,_Src,lVar8 * 2);
    }
    iVar6 = local_138 + -1;
    if (local_138 == 0) {
      iVar6 = 0;
    }
    pFVar4 = ::FName::FName((FName *)&local_150,iVar6,(wchar_t *)local_140.Data,FNAME_Add);
    pFVar5 = FInstancedPropertyBag::FindPropertyDescByName
                       ((FInstancedPropertyBag *)(param_1 + 1),*pFVar4);
    if (local_140.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data);
    }
    if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_108.ObjectPtr,pFVar5);
      FStringFormatArg::FStringFormatArg(&local_88,EditConditionPrefix);
      local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.Data.ArrayNum = 0;
      local_128.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar5->ID,&local_128,Digits);
      FStringFormatArg::FStringFormatArg(&local_68,&local_128);
      local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_150.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_150.AllocatorInstance,2,&local_150.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_150.AllocatorInstance.Data,&local_88,2);
      ::FString::FormatImpl(&local_118,L"{0}{1}",&local_150);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_150.AllocatorInstance.Data,local_150.ArrayNum);
      if ((FStringFormatArg *)local_150.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_150.AllocatorInstance.Data);
      }
      if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
      }
      iVar6 = local_118.Data.ArrayNum + -1;
      if (local_118.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      pFVar4 = ::FName::FName((FName *)&local_150,iVar6,
                              (wchar_t *)local_118.Data.AllocatorInstance.Data,FNAME_Add);
      pFVar5 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(param_1 + 1),*pFVar4);
      if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_c8.ObjectPtr,pFVar5);
      }
      FVar7 = local_f0;
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
        FVar7 = local_f0;
      }
      goto LAB_14dd58ca6;
    }
  }
  local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14dd58ca6:
  EVar3 = FInstancedPropertyBag::SetValueFloat((FInstancedPropertyBag *)(param_1 + 1),FVar7,fVar2);
  *(bool *)param_3 = EVar3 == Success;
  return;
}

// execSetValueInt32 @ 14dd58ce0

void __cdecl
UMovieJobVariableAssignmentContainer::execSetValueInt32
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  int iVar2;
  EPropertyBagResult EVar3;
  FName *pFVar4;
  FPropertyBagPropertyDesc *pFVar5;
  int iVar6;
  FName FVar7;
  longlong lVar8;
  int local_148 [2];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_140;
  ForAnyElementType local_130;
  int local_128;
  int local_124;
  longlong local_120;
  FString local_118;
  FString local_108;
  TObjectPtr<UObject_const_>_u_0 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  FName local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  TObjectPtr<UObject_const_>_u_0 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  
  FVar7.ComparisonIndex.Value = 0;
  FVar7.Number = 0;
  local_120 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_148[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_148);
  }
  iVar2 = local_148[0];
  local_f8.DebugPtr = (UObject *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  local_d8 = 0;
  local_d0 = 1;
  local_c8 = 0;
  local_c0 = 0xffffffff;
  local_b8.DebugPtr = (UObject *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  local_80 = 0xffffffff;
  if (local_120 != 0) {
    local_128 = *(int *)(local_120 + 0x58);
    lVar8 = (longlong)local_128;
    _Src = *(void **)(local_120 + 0x50);
    local_130.Data = (FScriptContainerElement *)0x0;
    if (local_128 == 0) {
      local_124 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_128,0,&local_130,local_128,&local_124);
      memcpy(local_130.Data,_Src,lVar8 * 2);
    }
    iVar6 = local_128 + -1;
    if (local_128 == 0) {
      iVar6 = 0;
    }
    pFVar4 = ::FName::FName((FName *)&local_140,iVar6,(wchar_t *)local_130.Data,FNAME_Add);
    pFVar5 = FInstancedPropertyBag::FindPropertyDescByName
                       ((FInstancedPropertyBag *)(param_1 + 1),*pFVar4);
    if (local_130.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data);
    }
    if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_f8.ObjectPtr,pFVar5);
      FStringFormatArg::FStringFormatArg(&local_78,EditConditionPrefix);
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar5->ID,&local_118,Digits);
      FStringFormatArg::FStringFormatArg(&local_58,&local_118);
      local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_140.AllocatorInstance,2,&local_140.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_140.AllocatorInstance.Data,&local_78,2);
      ::FString::FormatImpl(&local_108,L"{0}{1}",&local_140);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_140.AllocatorInstance.Data,local_140.ArrayNum);
      if ((FStringFormatArg *)local_140.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_140.AllocatorInstance.Data);
      }
      if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
      }
      iVar6 = local_108.Data.ArrayNum + -1;
      if (local_108.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      pFVar4 = ::FName::FName((FName *)&local_140,iVar6,
                              (wchar_t *)local_108.Data.AllocatorInstance.Data,FNAME_Add);
      pFVar5 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(param_1 + 1),*pFVar4);
      if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_b8.ObjectPtr,pFVar5);
      }
      FVar7 = local_e0;
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
        FVar7 = local_e0;
      }
      goto LAB_14dd58fe2;
    }
  }
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14dd58fe2:
  EVar3 = FInstancedPropertyBag::SetValueInt32((FInstancedPropertyBag *)(param_1 + 1),FVar7,iVar2);
  *(bool *)param_3 = EVar3 == Success;
  return;
}

// execSetValueInt64 @ 14dd59020

void __cdecl
UMovieJobVariableAssignmentContainer::execSetValueInt64
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  long64 lVar2;
  EPropertyBagResult EVar3;
  FName *pFVar4;
  FPropertyBagPropertyDesc *pFVar5;
  int iVar6;
  FName FVar7;
  longlong lVar8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_148;
  ForAnyElementType local_138;
  int local_130;
  int local_12c;
  long64 local_128;
  longlong local_120;
  FString local_118;
  FString local_108;
  TObjectPtr<UObject_const_>_u_0 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  FName local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  TObjectPtr<UObject_const_>_u_0 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  
  FVar7.ComparisonIndex.Value = 0;
  FVar7.Number = 0;
  local_120 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_128 = 0;
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  lVar2 = local_128;
  local_f8.DebugPtr = (UObject *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  local_d8 = 0;
  local_d0 = 1;
  local_c8 = 0;
  local_c0 = 0xffffffff;
  local_b8.DebugPtr = (UObject *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  local_80 = 0xffffffff;
  if (local_120 != 0) {
    local_130 = *(int *)(local_120 + 0x58);
    lVar8 = (longlong)local_130;
    _Src = *(void **)(local_120 + 0x50);
    local_138.Data = (FScriptContainerElement *)0x0;
    if (local_130 == 0) {
      local_12c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_130,0,&local_138,local_130,&local_12c);
      memcpy(local_138.Data,_Src,lVar8 * 2);
    }
    iVar6 = local_130 + -1;
    if (local_130 == 0) {
      iVar6 = 0;
    }
    pFVar4 = ::FName::FName((FName *)&local_148,iVar6,(wchar_t *)local_138.Data,FNAME_Add);
    pFVar5 = FInstancedPropertyBag::FindPropertyDescByName
                       ((FInstancedPropertyBag *)(param_1 + 1),*pFVar4);
    if (local_138.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data);
    }
    if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_f8.ObjectPtr,pFVar5);
      FStringFormatArg::FStringFormatArg(&local_78,EditConditionPrefix);
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar5->ID,&local_118,Digits);
      FStringFormatArg::FStringFormatArg(&local_58,&local_118);
      local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_148.AllocatorInstance,2,&local_148.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_148.AllocatorInstance.Data,&local_78,2);
      ::FString::FormatImpl(&local_108,L"{0}{1}",&local_148);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_148.AllocatorInstance.Data,local_148.ArrayNum);
      if ((FStringFormatArg *)local_148.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_148.AllocatorInstance.Data);
      }
      if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
      }
      iVar6 = local_108.Data.ArrayNum + -1;
      if (local_108.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      pFVar4 = ::FName::FName((FName *)&local_148,iVar6,
                              (wchar_t *)local_108.Data.AllocatorInstance.Data,FNAME_Add);
      pFVar5 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(param_1 + 1),*pFVar4);
      if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_b8.ObjectPtr,pFVar5);
      }
      FVar7 = local_e0;
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
        FVar7 = local_e0;
      }
      goto LAB_14dd59322;
    }
  }
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14dd59322:
  EVar3 = FInstancedPropertyBag::SetValueInt64((FInstancedPropertyBag *)(param_1 + 1),FVar7,lVar2);
  *(bool *)param_3 = EVar3 == Success;
  return;
}

// execSetValueName @ 14dd59360

void __cdecl
UMovieJobVariableAssignmentContainer::execSetValueName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *this;
  FProperty *pFVar1;
  void *_Src;
  FName FVar2;
  EPropertyBagResult EVar3;
  FName *pFVar4;
  FPropertyBagPropertyDesc *pFVar5;
  int iVar6;
  FName FVar7;
  longlong lVar8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_148;
  FName local_138;
  ForAnyElementType local_130;
  int local_128;
  int local_124;
  longlong local_120;
  FString local_118;
  FString local_108;
  TObjectPtr<UObject_const_>_u_0 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  FName local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  TObjectPtr<UObject_const_>_u_0 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  
  FVar7.ComparisonIndex.Value = 0;
  FVar7.Number = 0;
  local_120 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_138.ComparisonIndex.Value = 0;
  local_138.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  FVar2 = local_138;
  this = param_1 + 1;
  local_f8.DebugPtr = (UObject *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d8 = 0;
  local_d0 = 1;
  local_c8 = 0;
  local_c0 = 0xffffffff;
  local_b8.DebugPtr = (UObject *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  local_80 = 0xffffffff;
  if (local_120 != 0) {
    local_128 = *(int *)(local_120 + 0x58);
    lVar8 = (longlong)local_128;
    _Src = *(void **)(local_120 + 0x50);
    local_130.Data = (FScriptContainerElement *)0x0;
    if (local_128 == 0) {
      local_124 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_128,0,&local_130,local_128,&local_124);
      memcpy(local_130.Data,_Src,lVar8 * 2);
    }
    iVar6 = local_128 + -1;
    if (local_128 == 0) {
      iVar6 = 0;
    }
    pFVar4 = ::FName::FName((FName *)&local_148,iVar6,(wchar_t *)local_130.Data,FNAME_Add);
    pFVar5 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar4);
    if (local_130.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data);
    }
    if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_f8.ObjectPtr,pFVar5);
      FStringFormatArg::FStringFormatArg(&local_78,EditConditionPrefix);
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar5->ID,&local_118,Digits);
      FStringFormatArg::FStringFormatArg(&local_58,&local_118);
      local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_148.AllocatorInstance,2,&local_148.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_148.AllocatorInstance.Data,&local_78,2);
      ::FString::FormatImpl(&local_108,L"{0}{1}",&local_148);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_148.AllocatorInstance.Data,local_148.ArrayNum);
      if ((FStringFormatArg *)local_148.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_148.AllocatorInstance.Data);
      }
      if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
      }
      iVar6 = local_108.Data.ArrayNum + -1;
      if (local_108.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      pFVar4 = ::FName::FName((FName *)&local_148,iVar6,
                              (wchar_t *)local_108.Data.AllocatorInstance.Data,FNAME_Add);
      pFVar5 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar4);
      if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_b8.ObjectPtr,pFVar5);
      }
      FVar7 = local_e0;
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
        FVar7 = local_e0;
      }
      goto LAB_14dd5965f;
    }
  }
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14dd5965f:
  EVar3 = FInstancedPropertyBag::SetValueName((FInstancedPropertyBag *)this,FVar7,FVar2);
  *(bool *)param_3 = EVar3 == Success;
  return;
}

// execSetValueObject @ 14dd59690

void __cdecl
UMovieJobVariableAssignmentContainer::execSetValueObject
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  UObject *pUVar2;
  EPropertyBagResult EVar3;
  FName *pFVar4;
  FPropertyBagPropertyDesc *pFVar5;
  int iVar6;
  FName FVar7;
  longlong lVar8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_148;
  ForAnyElementType local_138;
  int local_130;
  int local_12c;
  UObject *local_128;
  longlong local_120;
  FString local_118;
  FString local_108;
  TObjectPtr<UObject_const_>_u_0 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  FName local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  TObjectPtr<UObject_const_>_u_0 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  
  FVar7.ComparisonIndex.Value = 0;
  FVar7.Number = 0;
  local_120 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_128 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  pUVar2 = local_128;
  local_f8.DebugPtr = (UObject *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  local_d8 = 0;
  local_d0 = 1;
  local_c8 = 0;
  local_c0 = 0xffffffff;
  local_b8.DebugPtr = (UObject *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  local_80 = 0xffffffff;
  if (local_120 != 0) {
    local_130 = *(int *)(local_120 + 0x58);
    lVar8 = (longlong)local_130;
    _Src = *(void **)(local_120 + 0x50);
    local_138.Data = (FScriptContainerElement *)0x0;
    if (local_130 == 0) {
      local_12c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_130,0,&local_138,local_130,&local_12c);
      memcpy(local_138.Data,_Src,lVar8 * 2);
    }
    iVar6 = local_130 + -1;
    if (local_130 == 0) {
      iVar6 = 0;
    }
    pFVar4 = ::FName::FName((FName *)&local_148,iVar6,(wchar_t *)local_138.Data,FNAME_Add);
    pFVar5 = FInstancedPropertyBag::FindPropertyDescByName
                       ((FInstancedPropertyBag *)(param_1 + 1),*pFVar4);
    if (local_138.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data);
    }
    if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_f8.ObjectPtr,pFVar5);
      FStringFormatArg::FStringFormatArg(&local_78,EditConditionPrefix);
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar5->ID,&local_118,Digits);
      FStringFormatArg::FStringFormatArg(&local_58,&local_118);
      local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_148.AllocatorInstance,2,&local_148.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_148.AllocatorInstance.Data,&local_78,2);
      ::FString::FormatImpl(&local_108,L"{0}{1}",&local_148);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_148.AllocatorInstance.Data,local_148.ArrayNum);
      if ((FStringFormatArg *)local_148.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_148.AllocatorInstance.Data);
      }
      if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
      }
      iVar6 = local_108.Data.ArrayNum + -1;
      if (local_108.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      pFVar4 = ::FName::FName((FName *)&local_148,iVar6,
                              (wchar_t *)local_108.Data.AllocatorInstance.Data,FNAME_Add);
      pFVar5 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(param_1 + 1),*pFVar4);
      if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_b8.ObjectPtr,pFVar5);
      }
      FVar7 = local_e0;
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
        FVar7 = local_e0;
      }
      goto LAB_14dd59992;
    }
  }
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14dd59992:
  EVar3 = FInstancedPropertyBag::SetValueObject((FInstancedPropertyBag *)(param_1 + 1),FVar7,pUVar2)
  ;
  *(bool *)param_3 = EVar3 == Success;
  return;
}

// execSetValueSerializedString @ 14dd599d0

void __cdecl
UMovieJobVariableAssignmentContainer::execSetValueSerializedString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  EPropertyBagResult EVar2;
  FName *pFVar3;
  FPropertyBagPropertyDesc *pFVar4;
  int iVar5;
  FName FVar6;
  longlong lVar7;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_158;
  ForAnyElementType local_148;
  int local_140;
  int local_13c;
  longlong local_138;
  FString local_130;
  FString local_120;
  FString local_110;
  TObjectPtr<UObject_const_>_u_0 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  FName local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  TObjectPtr<UObject_const_>_u_0 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  local_138 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.Data.ArrayNum = 0;
  local_130.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_130,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_130);
  }
  local_f8.DebugPtr = (UObject *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d8 = 0;
  local_d0 = 1;
  local_c8 = 0;
  local_c0 = 0xffffffff;
  local_b8.DebugPtr = (UObject *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  local_80 = 0xffffffff;
  if (local_138 != 0) {
    local_140 = *(int *)(local_138 + 0x58);
    lVar7 = (longlong)local_140;
    _Src = *(void **)(local_138 + 0x50);
    local_148.Data = (FScriptContainerElement *)0x0;
    if (local_140 == 0) {
      local_13c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_140,0,&local_148,local_140,&local_13c);
      memcpy(local_148.Data,_Src,lVar7 * 2);
    }
    iVar5 = local_140 + -1;
    if (local_140 == 0) {
      iVar5 = 0;
    }
    pFVar3 = ::FName::FName((FName *)&local_158,iVar5,(wchar_t *)local_148.Data,FNAME_Add);
    pFVar4 = FInstancedPropertyBag::FindPropertyDescByName
                       ((FInstancedPropertyBag *)(param_1 + 1),*pFVar3);
    if (local_148.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data);
    }
    if (pFVar4 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_f8.ObjectPtr,pFVar4);
      FStringFormatArg::FStringFormatArg(&local_78,EditConditionPrefix);
      local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_120.Data.ArrayNum = 0;
      local_120.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar4->ID,&local_120,Digits);
      FStringFormatArg::FStringFormatArg(&local_58,&local_120);
      local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_158.AllocatorInstance,2,&local_158.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_158.AllocatorInstance.Data,&local_78,2);
      ::FString::FormatImpl(&local_110,L"{0}{1}",&local_158);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_158.AllocatorInstance.Data,local_158.ArrayNum);
      if ((FStringFormatArg *)local_158.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_158.AllocatorInstance.Data);
      }
      if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
      }
      iVar5 = local_110.Data.ArrayNum + -1;
      if (local_110.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      pFVar3 = ::FName::FName((FName *)&local_158,iVar5,
                              (wchar_t *)local_110.Data.AllocatorInstance.Data,FNAME_Add);
      pFVar4 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(param_1 + 1),*pFVar3);
      if (pFVar4 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_b8.ObjectPtr,pFVar4);
      }
      FVar6 = local_e0;
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
        FVar6 = local_e0;
      }
      goto LAB_14dd59ccc;
    }
  }
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14dd59ccc:
  EVar2 = FInstancedPropertyBag::SetValueSerializedString
                    ((FInstancedPropertyBag *)(param_1 + 1),FVar6,&local_130);
  *(bool *)param_3 = EVar2 == Success;
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetValueString @ 14dd59d10

void __cdecl
UMovieJobVariableAssignmentContainer::execSetValueString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  EPropertyBagResult EVar2;
  FName *pFVar3;
  FPropertyBagPropertyDesc *pFVar4;
  int iVar5;
  FName FVar6;
  longlong lVar7;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_158;
  ForAnyElementType local_148;
  int local_140;
  int local_13c;
  longlong local_138;
  FString local_130;
  FString local_120;
  FString local_110;
  TObjectPtr<UObject_const_>_u_0 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  FName local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  TObjectPtr<UObject_const_>_u_0 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  local_138 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.Data.ArrayNum = 0;
  local_130.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_130,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_130);
  }
  local_f8.DebugPtr = (UObject *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d8 = 0;
  local_d0 = 1;
  local_c8 = 0;
  local_c0 = 0xffffffff;
  local_b8.DebugPtr = (UObject *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  local_80 = 0xffffffff;
  if (local_138 != 0) {
    local_140 = *(int *)(local_138 + 0x58);
    lVar7 = (longlong)local_140;
    _Src = *(void **)(local_138 + 0x50);
    local_148.Data = (FScriptContainerElement *)0x0;
    if (local_140 == 0) {
      local_13c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_140,0,&local_148,local_140,&local_13c);
      memcpy(local_148.Data,_Src,lVar7 * 2);
    }
    iVar5 = local_140 + -1;
    if (local_140 == 0) {
      iVar5 = 0;
    }
    pFVar3 = ::FName::FName((FName *)&local_158,iVar5,(wchar_t *)local_148.Data,FNAME_Add);
    pFVar4 = FInstancedPropertyBag::FindPropertyDescByName
                       ((FInstancedPropertyBag *)(param_1 + 1),*pFVar3);
    if (local_148.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data);
    }
    if (pFVar4 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_f8.ObjectPtr,pFVar4);
      FStringFormatArg::FStringFormatArg(&local_78,EditConditionPrefix);
      local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_120.Data.ArrayNum = 0;
      local_120.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar4->ID,&local_120,Digits);
      FStringFormatArg::FStringFormatArg(&local_58,&local_120);
      local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_158.AllocatorInstance,2,&local_158.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_158.AllocatorInstance.Data,&local_78,2);
      ::FString::FormatImpl(&local_110,L"{0}{1}",&local_158);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_158.AllocatorInstance.Data,local_158.ArrayNum);
      if ((FStringFormatArg *)local_158.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_158.AllocatorInstance.Data);
      }
      if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
      }
      iVar5 = local_110.Data.ArrayNum + -1;
      if (local_110.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      pFVar3 = ::FName::FName((FName *)&local_158,iVar5,
                              (wchar_t *)local_110.Data.AllocatorInstance.Data,FNAME_Add);
      pFVar4 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(param_1 + 1),*pFVar3);
      if (pFVar4 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_b8.ObjectPtr,pFVar4);
      }
      FVar6 = local_e0;
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
        FVar6 = local_e0;
      }
      goto LAB_14dd5a00c;
    }
  }
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14dd5a00c:
  EVar2 = FInstancedPropertyBag::SetValueString
                    ((FInstancedPropertyBag *)(param_1 + 1),FVar6,&local_130);
  *(bool *)param_3 = EVar2 == Success;
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetValueText @ 14dd5a050

void __cdecl
UMovieJobVariableAssignmentContainer::execSetValueText
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *this;
  FProperty *pFVar1;
  void *_Src;
  EPropertyBagResult EVar2;
  FName *pFVar3;
  FPropertyBagPropertyDesc *pFVar4;
  int iVar5;
  FName FVar6;
  longlong lVar7;
  FText *pFVar8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_158;
  ForAnyElementType local_148;
  int local_140;
  int local_13c;
  longlong local_138;
  FString local_130;
  FText local_120;
  FString local_110;
  TObjectPtr<UObject_const_>_u_0 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  FName local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  TObjectPtr<UObject_const_>_u_0 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  local_138 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  FText::FText(&local_120);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_f8.DebugPtr = (UObject *)0x0;
  local_f0 = 0;
  pFVar8 = &local_120;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar8 = (FText *)param_2->MostRecentPropertyAddress;
  }
  local_e8 = 0;
  this = param_1 + 1;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  local_d8 = 0;
  local_d0 = 1;
  local_c8 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c0 = 0xffffffff;
  local_b8.DebugPtr = (UObject *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  local_80 = 0xffffffff;
  if (local_138 != 0) {
    local_140 = *(int *)(local_138 + 0x58);
    lVar7 = (longlong)local_140;
    _Src = *(void **)(local_138 + 0x50);
    local_148.Data = (FScriptContainerElement *)0x0;
    if (local_140 == 0) {
      local_13c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_140,0,&local_148,local_140,&local_13c);
      memcpy(local_148.Data,_Src,lVar7 * 2);
    }
    iVar5 = local_140 + -1;
    if (local_140 == 0) {
      iVar5 = 0;
    }
    pFVar3 = ::FName::FName((FName *)&local_158,iVar5,(wchar_t *)local_148.Data,FNAME_Add);
    pFVar4 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar3);
    if (local_148.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data);
    }
    if (pFVar4 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_f8.ObjectPtr,pFVar4);
      FStringFormatArg::FStringFormatArg(&local_78,EditConditionPrefix);
      local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_130.Data.ArrayNum = 0;
      local_130.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar4->ID,&local_130,Digits);
      FStringFormatArg::FStringFormatArg(&local_58,&local_130);
      local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_158.AllocatorInstance,2,&local_158.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_158.AllocatorInstance.Data,&local_78,2);
      ::FString::FormatImpl(&local_110,L"{0}{1}",&local_158);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_158.AllocatorInstance.Data,local_158.ArrayNum);
      if ((FStringFormatArg *)local_158.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_158.AllocatorInstance.Data);
      }
      if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
      }
      iVar5 = local_110.Data.ArrayNum + -1;
      if (local_110.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      pFVar3 = ::FName::FName((FName *)&local_158,iVar5,
                              (wchar_t *)local_110.Data.AllocatorInstance.Data,FNAME_Add);
      pFVar4 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,*pFVar3);
      if (pFVar4 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_b8.ObjectPtr,pFVar4);
      }
      FVar6 = local_e0;
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
        FVar6 = local_e0;
      }
      goto LAB_14dd5a362;
    }
  }
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14dd5a362:
  EVar2 = FInstancedPropertyBag::SetValueText((FInstancedPropertyBag *)this,FVar6,pFVar8);
  *(bool *)param_3 = EVar2 == Success;
  if (local_120.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
  }
  return;
}

// execSetVariableAssignmentEnableState @ 14dd5a600

void __cdecl
UMovieJobVariableAssignmentContainer::execSetVariableAssignmentEnableState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  EPropertyBagResult EVar2;
  FName *pFVar3;
  FPropertyBagPropertyDesc *pFVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  int local_108 [2];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_100;
  ForAnyElementType local_f0;
  int local_e8;
  int local_e4;
  longlong local_e0;
  FString local_d8;
  TObjectPtr<UObject_const_>_u_0 local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  FStringFormatArg local_a8;
  FString local_88;
  TObjectPtr<UObject_const_>_u_0 local_78;
  undefined8 local_70;
  undefined8 local_68;
  FName local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  local_e0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  local_108[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  bVar7 = local_108[0] != 0;
  local_c8.DebugPtr = (UObject *)0x0;
  local_c0 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8.Type = Int;
  local_a8.field1_0x8.IntValue = 1;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_a8.StringValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.StringValue.Data.ArrayNum = -1;
  local_78.DebugPtr = (UObject *)0x0;
  local_70 = 0;
  local_68 = 0;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  local_58 = 0;
  local_50 = 1;
  local_48 = 0;
  local_40 = 0xffffffff;
  if (local_e0 != 0) {
    local_e8 = *(int *)(local_e0 + 0x58);
    lVar6 = (longlong)local_e8;
    _Src = *(void **)(local_e0 + 0x50);
    local_f0.Data = (FScriptContainerElement *)0x0;
    if (local_e8 == 0) {
      local_e4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_e8,0,&local_f0,local_e8,&local_e4);
      memcpy(local_f0.Data,_Src,lVar6 * 2);
    }
    iVar5 = local_e8 + -1;
    if (local_e8 == 0) {
      iVar5 = 0;
    }
    pFVar3 = ::FName::FName((FName *)&local_100,iVar5,(wchar_t *)local_f0.Data,FNAME_Add);
    pFVar4 = FInstancedPropertyBag::FindPropertyDescByName
                       ((FInstancedPropertyBag *)(param_1 + 1),*pFVar3);
    if (local_f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data);
    }
    if (pFVar4 != (FPropertyBagPropertyDesc *)0x0) {
      FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_c8.ObjectPtr,pFVar4);
      FStringFormatArg::FStringFormatArg
                ((FStringFormatArg *)&local_c8.ObjectPtr,EditConditionPrefix);
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
      FGuid::AppendString(&pFVar4->ID,&local_d8,Digits);
      FStringFormatArg::FStringFormatArg(&local_a8,&local_d8);
      local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_100.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_100.AllocatorInstance,2,&local_100.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_100.AllocatorInstance.Data,(FStringFormatArg *)&local_c8.ObjectPtr,2);
      ::FString::FormatImpl(&local_88,L"{0}{1}",&local_100);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_100.AllocatorInstance.Data,local_100.ArrayNum);
      if ((FStringFormatArg *)local_100.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_100.AllocatorInstance.Data);
      }
      if (local_a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_b8 != (void *)0x0) {
        FMemory::Free(local_b8);
      }
      iVar5 = local_88.Data.ArrayNum + -1;
      if (local_88.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      pFVar3 = ::FName::FName((FName *)&local_100,iVar5,
                              (wchar_t *)local_88.Data.AllocatorInstance.Data,FNAME_Add);
      pFVar4 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)(param_1 + 1),*pFVar3);
      if (pFVar4 != (FPropertyBagPropertyDesc *)0x0) {
        FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)&local_78.ObjectPtr,pFVar4);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      EVar2 = FInstancedPropertyBag::SetValueBool
                        ((FInstancedPropertyBag *)(param_1 + 1),local_60,bVar7);
      *(bool *)param_3 = EVar2 == Success;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

