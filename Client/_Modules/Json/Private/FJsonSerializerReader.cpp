// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 37

// FJsonSerializerReader @ 141dc4be0

FJsonSerializerReader * __thiscall
FJsonSerializerReader::FJsonSerializerReader
          (FJsonSerializerReader *this,TSharedPtr<FJsonObject,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FJsonSerializerReader__6B_;
  (this->JsonObject).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->JsonObject).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FJsonSerializerReader @ 141dc6490

void __thiscall FJsonSerializerReader::~FJsonSerializerReader(FJsonSerializerReader *this)

{
  this->_padding_ = (longlong)&___7FJsonSerializerReader__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->JsonObject).SharedReferenceCount.ReferenceController);
  return;
}

// EndArray @ 141dd3ef0

void __thiscall FJsonSerializerReader::EndArray(FJsonSerializerReader *this)

{
  return;
}

// EndObject @ 141dd4090

void __thiscall FJsonSerializerReader::EndObject(FJsonSerializerReader *this)

{
  return;
}

// GetObject @ 141dd6a10

TSharedPtr<FJsonObject,1> * __thiscall
FJsonSerializerReader::GetObject
          (FJsonSerializerReader *this,TSharedPtr<FJsonObject,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->JsonObject).Object;
  pTVar1 = (this->JsonObject).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// IsLoading @ 141dd81c0

bool __thiscall FJsonSerializerReader::IsLoading(FJsonSerializerReader *this)

{
  return true;
}

// IsSaving @ 141dd8230

bool __thiscall FJsonSerializerReader::IsSaving(FJsonSerializerReader *this)

{
  return false;
}

// Serialize @ 141de1340

void __thiscall
FJsonSerializerReader::Serialize
          (FJsonSerializerReader *this,TStringView<wchar_t> *param_1,int *param_2)

{
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *pTVar1;
  FJsonValue *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedPtr<FJsonValue,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  wchar_t *local_28;
  undefined8 uStack_20;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if ((this->JsonObject).Object == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_48.DataPtr = param_1->DataPtr;
  local_48.Size = param_1->Size;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar1 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            *)(this->JsonObject).Object;
  local_28 = local_48.DataPtr;
  uStack_20 = local_48._8_8_;
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,local_48.DataPtr);
  pTVar6 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>(pTVar1,uVar5,&local_48);
  if (((pTVar6 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar6->Object != (FJsonValue *)0x0)) &&
     (pTVar6->Object->Type == Number)) {
    if ((this->JsonObject).Object == (FJsonObject *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_38.DataPtr = param_1->DataPtr;
    local_38.Size = param_1->Size;
    local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pTVar1 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)(this->JsonObject).Object;
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,param_1->DataPtr);
    pTVar6 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             ::FindByHash<TStringView<wchar_t>_>(pTVar1,uVar5,&local_38);
    if ((pTVar6 == (TSharedPtr<FJsonValue,1> *)0x0) ||
       (pFVar2 = pTVar6->Object, pFVar2 == (FJsonValue *)0x0)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,param_2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  return;
}

// Serialize @ 141de14a0

void __thiscall
FJsonSerializerReader::Serialize
          (FJsonSerializerReader *this,TStringView<wchar_t> *param_1,uint *param_2)

{
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *pTVar1;
  FJsonValue *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedPtr<FJsonValue,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  wchar_t *local_28;
  undefined8 uStack_20;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if ((this->JsonObject).Object == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_48.DataPtr = param_1->DataPtr;
  local_48.Size = param_1->Size;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar1 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            *)(this->JsonObject).Object;
  local_28 = local_48.DataPtr;
  uStack_20 = local_48._8_8_;
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,local_48.DataPtr);
  pTVar6 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>(pTVar1,uVar5,&local_48);
  if (((pTVar6 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar6->Object != (FJsonValue *)0x0)) &&
     (pTVar6->Object->Type == Number)) {
    if ((this->JsonObject).Object == (FJsonObject *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_38.DataPtr = param_1->DataPtr;
    local_38.Size = param_1->Size;
    local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pTVar1 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)(this->JsonObject).Object;
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,param_1->DataPtr);
    pTVar6 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             ::FindByHash<TStringView<wchar_t>_>(pTVar1,uVar5,&local_38);
    if ((pTVar6 == (TSharedPtr<FJsonValue,1> *)0x0) ||
       (pFVar2 = pTVar6->Object, pFVar2 == (FJsonValue *)0x0)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      (**(code **)(pFVar2->_padding_ + 0x10))(pFVar2,param_2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  return;
}

// Serialize @ 141de1600

void __thiscall
FJsonSerializerReader::Serialize
          (FJsonSerializerReader *this,TStringView<wchar_t> *param_1,float *param_2)

{
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  code *pcVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  TSharedPtr<FJsonValue,1> *pTVar5;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  if ((this->JsonObject).Object == (FJsonObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_38.DataPtr = param_1->DataPtr;
  local_38.Size = param_1->Size;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             *)(this->JsonObject).Object;
  local_18 = local_38.DataPtr;
  uStack_10 = local_38._8_8_;
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,local_38.DataPtr);
  pTVar5 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>(this_00,uVar4,&local_38);
  if (((pTVar5 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar5->Object != (FJsonValue *)0x0)) &&
     (pTVar5->Object->Type == Number)) {
    if ((this->JsonObject).Object == (FJsonObject *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_28.DataPtr = param_1->DataPtr;
    local_28.Size = param_1->Size;
    local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
    dVar2 = FJsonObject::GetNumberField((this->JsonObject).Object,&local_28);
    *param_2 = (float)dVar2;
  }
  return;
}

// Serialize @ 141de1700

void __thiscall
FJsonSerializerReader::Serialize
          (FJsonSerializerReader *this,TStringView<wchar_t> *param_1,double *param_2)

{
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  code *pcVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  TSharedPtr<FJsonValue,1> *pTVar5;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  if ((this->JsonObject).Object == (FJsonObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_38.DataPtr = param_1->DataPtr;
  local_38.Size = param_1->Size;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             *)(this->JsonObject).Object;
  local_18 = local_38.DataPtr;
  uStack_10 = local_38._8_8_;
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,local_38.DataPtr);
  pTVar5 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>(this_00,uVar4,&local_38);
  if (((pTVar5 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar5->Object != (FJsonValue *)0x0)) &&
     (pTVar5->Object->Type == Number)) {
    if ((this->JsonObject).Object == (FJsonObject *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_28.DataPtr = param_1->DataPtr;
    local_28.Size = param_1->Size;
    local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
    dVar2 = FJsonObject::GetNumberField((this->JsonObject).Object,&local_28);
    *param_2 = dVar2;
  }
  return;
}

// Serialize @ 141de17f0

void __thiscall
FJsonSerializerReader::Serialize
          (FJsonSerializerReader *this,TStringView<wchar_t> *param_1,FDateTime *param_2)

{
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  TSharedPtr<FJsonValue,1> *pTVar5;
  wchar_t *pwVar6;
  wchar_t *local_68;
  undefined8 local_60;
  TSharedPtr<FJsonValue,1> local_58;
  FString local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  if ((this->JsonObject).Object == (FJsonObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_38.DataPtr = param_1->DataPtr;
  local_38.Size = param_1->Size;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             *)(this->JsonObject).Object;
  local_18 = local_38.DataPtr;
  uStack_10 = local_38._8_8_;
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,local_38.DataPtr);
  pTVar5 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>(this_00,uVar4,&local_38);
  if (((pTVar5 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar5->Object != (FJsonValue *)0x0)) &&
     (pTVar5->Object->Type == String)) {
    if ((this->JsonObject).Object == (FJsonObject *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_28.DataPtr = param_1->DataPtr;
    local_28.Size = param_1->Size;
    local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
    FJsonObject::GetField((this->JsonObject).Object,&local_58,&local_28,None);
    if (local_58.Object == (FJsonValue *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_68 = (wchar_t *)0x0;
    local_60 = 0;
    cVar3 = (**(code **)((local_58.Object)->_padding_ + 0x58))(local_58.Object,&local_68);
    if (cVar3 == '\0') {
      ::FString::FString(&local_48,L"String");
      FJsonValue::ErrorMessage(local_58.Object,&local_48);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    pwVar6 = L"";
    if ((int)local_60 != 0) {
      pwVar6 = local_68;
    }
    FDateTime::ParseIso8601(pwVar6,param_2);
    if (local_68 != (wchar_t *)0x0) {
      FMemory::Free(local_68);
    }
  }
  return;
}

// Serialize @ 141de19b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FJsonSerializerReader::Serialize
          (FJsonSerializerReader *this,TStringView<wchar_t> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  TSharedPtr<FJsonValue,1> *pTVar8;
  TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined1 auStack_d8 [48];
  TStringView<wchar_t> local_a8;
  TReferenceControllerBase<1> *local_98;
  TReferenceControllerBase<1> *local_90;
  wchar_t *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong lStack_60;
  ulonglong local_58;
  TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  if (((this->JsonObject).Object == (FJsonObject *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_a8.DataPtr = param_1->DataPtr;
  local_a8.Size = param_1->Size;
  local_a8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             *)(this->JsonObject).Object;
  local_88 = local_a8.DataPtr;
  uStack_80 = local_a8._8_8_;
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,local_a8.DataPtr);
  pTVar8 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>(this_00,uVar7,&local_a8);
  if ((pTVar8 == (TSharedPtr<FJsonValue,1> *)0x0) ||
     (pTVar10 = (TReferenceControllerBase<1> *)pTVar8->Object,
     pTVar10 == (TReferenceControllerBase<1> *)0x0)) {
    local_78 = 0;
    uStack_70 = 0;
    pTVar10 = pTVar11;
  }
  else {
    pTVar11 = (pTVar8->SharedReferenceCount).ReferenceController;
    local_98 = pTVar10;
    local_90 = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = UE::Json::ToSimpleJsonVariant(&local_50,(FJsonValue *)pTVar10);
    if (pTVar9 != param_2) {
      bVar2 = pTVar9->TypeIndex;
      local_58 = CONCAT71(local_58._1_7_,bVar2);
      if ((2 < (ulonglong)bVar2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x105,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                  ::__l2::MoveConstructors)[bVar2])(&local_68,pTVar9);
      uVar1 = *(ulonglong *)&param_2->TypeIndex;
      lVar4 = param_2->_padding_;
      lVar5 = param_2->_padding_;
      param_2->_padding_ = local_68;
      param_2->_padding_ = lStack_60;
      *(ulonglong *)&param_2->TypeIndex = local_58;
      local_68 = lVar4;
      lStack_60 = lVar5;
      local_58 = uVar1;
      if ((2 < (uVar1 & 0xff)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar1 & 0xff])(&local_68);
    }
    if ((2 < (ulonglong)local_50.TypeIndex) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50.TypeIndex])(&local_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return;
}

// Serialize @ 141de1bf0

void __thiscall
FJsonSerializerReader::Serialize
          (FJsonSerializerReader *this,TStringView<wchar_t> *param_1,FString *param_2)

{
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  TSharedPtr<FJsonValue,1> *pTVar6;
  FString local_68;
  TSharedPtr<FJsonValue,1> local_58;
  FString local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  if (((this->JsonObject).Object == (FJsonObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_38.DataPtr = param_1->DataPtr;
  local_38.Size = param_1->Size;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             *)(this->JsonObject).Object;
  local_18 = local_38.DataPtr;
  uStack_10 = local_38._8_8_;
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,local_38.DataPtr);
  pTVar6 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>(this_00,uVar5,&local_38);
  if (((pTVar6 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar6->Object != (FJsonValue *)0x0)) &&
     (pTVar6->Object->Type == String)) {
    if (((this->JsonObject).Object == (FJsonObject *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_28.DataPtr = param_1->DataPtr;
    local_28.Size = param_1->Size;
    local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
    FJsonObject::GetField((this->JsonObject).Object,&local_58,&local_28,None);
    if ((local_58.Object == (FJsonValue *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    cVar4 = (**(code **)((local_58.Object)->_padding_ + 0x58))(local_58.Object,&local_68);
    if (cVar4 == '\0') {
      ::FString::FString(&local_48,L"String");
      FJsonValue::ErrorMessage(local_58.Object,&local_48);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if (param_2 != &local_68) {
      pFVar1 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_2->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      (param_2->Data).ArrayNum = local_68.Data.ArrayNum;
      (param_2->Data).ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Serialize @ 141de1dd0

void __thiscall
FJsonSerializerReader::Serialize
          (FJsonSerializerReader *this,TStringView<wchar_t> *param_1,FText *param_2)

{
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  TSharedPtr<FJsonValue,1> *pTVar5;
  FText *pFVar6;
  FString local_78;
  TSharedPtr<FJsonValue,1> local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  FText local_28;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  if ((this->JsonObject).Object == (FJsonObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48.DataPtr = param_1->DataPtr;
  local_48.Size = param_1->Size;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             *)(this->JsonObject).Object;
  local_18 = local_48.DataPtr;
  uStack_10 = local_48._8_8_;
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,local_48.DataPtr);
  pTVar5 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>(this_00,uVar4,&local_48);
  if (((pTVar5 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar5->Object != (FJsonValue *)0x0)) &&
     (pTVar5->Object->Type == String)) {
    if ((this->JsonObject).Object == (FJsonObject *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_38.DataPtr = param_1->DataPtr;
    local_38.Size = param_1->Size;
    local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
    FJsonObject::GetField((this->JsonObject).Object,&local_68,&local_38,None);
    if (local_68.Object == (FJsonValue *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    cVar3 = (**(code **)((local_68.Object)->_padding_ + 0x58))(local_68.Object,&local_78);
    if (cVar3 == '\0') {
      ::FString::FString(&local_58,L"String");
      FJsonValue::ErrorMessage(local_68.Object,&local_58);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    pFVar6 = FText::FromString(&local_28,&local_78);
    FText::operator=(param_2,pFVar6);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Serialize @ 141de1fa0

void __thiscall
FJsonSerializerReader::Serialize
          (FJsonSerializerReader *this,TStringView<wchar_t> *param_1,FUtf8String *param_2)

{
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  TSharedPtr<FJsonValue,1> *pTVar6;
  FUtf8String local_68;
  TSharedPtr<FJsonValue,1> local_58;
  FString local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  if (((this->JsonObject).Object == (FJsonObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_38.DataPtr = param_1->DataPtr;
  local_38.Size = param_1->Size;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             *)(this->JsonObject).Object;
  local_18 = local_38.DataPtr;
  uStack_10 = local_38._8_8_;
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,local_38.DataPtr);
  pTVar6 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>(this_00,uVar5,&local_38);
  if (((pTVar6 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar6->Object != (FJsonValue *)0x0)) &&
     (pTVar6->Object->Type == String)) {
    if (((this->JsonObject).Object == (FJsonObject *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_28.DataPtr = param_1->DataPtr;
    local_28.Size = param_1->Size;
    local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
    FJsonObject::GetField((this->JsonObject).Object,&local_58,&local_28,None);
    if ((local_58.Object == (FJsonValue *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    cVar4 = (**(code **)((local_58.Object)->_padding_ + 0x60))(local_58.Object,&local_68);
    if (cVar4 == '\0') {
      ::FString::FString(&local_48,L"Utf8String");
      FJsonValue::ErrorMessage(local_58.Object,&local_48);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if (param_2 != &local_68) {
      pFVar1 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_2->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      (param_2->Data).ArrayNum = local_68.Data.ArrayNum;
      (param_2->Data).ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Serialize @ 141de2180

void __thiscall
FJsonSerializerReader::Serialize
          (FJsonSerializerReader *this,TStringView<wchar_t> *param_1,long64 *param_2)

{
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *pTVar1;
  FJsonValue *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedPtr<FJsonValue,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  wchar_t *local_28;
  undefined8 uStack_20;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if ((this->JsonObject).Object == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_48.DataPtr = param_1->DataPtr;
  local_48.Size = param_1->Size;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar1 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            *)(this->JsonObject).Object;
  local_28 = local_48.DataPtr;
  uStack_20 = local_48._8_8_;
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,local_48.DataPtr);
  pTVar6 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>(pTVar1,uVar5,&local_48);
  if (((pTVar6 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar6->Object != (FJsonValue *)0x0)) &&
     (pTVar6->Object->Type == Number)) {
    if ((this->JsonObject).Object == (FJsonObject *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_38.DataPtr = param_1->DataPtr;
    local_38.Size = param_1->Size;
    local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pTVar1 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)(this->JsonObject).Object;
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,param_1->DataPtr);
    pTVar6 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             ::FindByHash<TStringView<wchar_t>_>(pTVar1,uVar5,&local_38);
    if ((pTVar6 == (TSharedPtr<FJsonValue,1> *)0x0) ||
       (pFVar2 = pTVar6->Object, pFVar2 == (FJsonValue *)0x0)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,param_2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  return;
}

// Serialize @ 141de22e0

void __thiscall
FJsonSerializerReader::Serialize
          (FJsonSerializerReader *this,TStringView<wchar_t> *param_1,bool *param_2)

{
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  TSharedPtr<FJsonValue,1> *pTVar5;
  bool local_res8 [8];
  TSharedPtr<FJsonValue,1> local_58;
  FString local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  if ((this->JsonObject).Object == (FJsonObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_38.DataPtr = param_1->DataPtr;
  local_38.Size = param_1->Size;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             *)(this->JsonObject).Object;
  local_18 = local_38.DataPtr;
  uStack_10 = local_38._8_8_;
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,local_38.DataPtr);
  pTVar5 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>(this_00,uVar4,&local_38);
  if (((pTVar5 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar5->Object != (FJsonValue *)0x0)) &&
     (pTVar5->Object->Type == Boolean)) {
    if ((this->JsonObject).Object == (FJsonObject *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_28.DataPtr = param_1->DataPtr;
    local_28.Size = param_1->Size;
    local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
    FJsonObject::GetField((this->JsonObject).Object,&local_58,&local_28,None);
    if (local_58.Object == (FJsonValue *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_res8[0] = false;
    cVar3 = (**(code **)((local_58.Object)->_padding_ + 0x68))(local_58.Object,local_res8);
    if (cVar3 == '\0') {
      ::FString::FString(&local_48,L"Boolean");
      FJsonValue::ErrorMessage(local_58.Object,&local_48);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    *param_2 = local_res8[0];
  }
  return;
}

// SerializeArray @ 141de3c30

void __thiscall
FJsonSerializerReader::SerializeArray
          (FJsonSerializerReader *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && L\"Not implemented\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Serialization\\JsonSerializerReader.cpp"
                     ,0x99,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SerializeArray @ 141de3c70

void __thiscall
FJsonSerializerReader::SerializeArray
          (FJsonSerializerReader *this,TStringView<wchar_t> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  FJsonValue *this_01;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  TSharedPtr<FJsonValue,1> *pTVar8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  double local_res10;
  int local_a8 [2];
  ForAnyElementType local_a0;
  int local_98;
  int local_94;
  TSharedPtr<FJsonValue,1> local_90;
  FString local_80;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  wchar_t *local_48;
  undefined8 uStack_40;
  
  if ((this->JsonObject).Object == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_68.DataPtr = param_1->DataPtr;
  local_68.Size = param_1->Size;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             *)(this->JsonObject).Object;
  local_48 = local_68.DataPtr;
  uStack_40 = local_68._8_8_;
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,local_68.DataPtr);
  pTVar8 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>(this_00,uVar6,&local_68);
  if (((pTVar8 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar8->Object != (FJsonValue *)0x0)) &&
     (pTVar8->Object->Type == Array)) {
    if ((this->JsonObject).Object == (FJsonObject *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_58.DataPtr = param_1->DataPtr;
    local_58.Size = param_1->Size;
    local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
    FJsonObject::GetField((this->JsonObject).Object,&local_90,&local_58,Array);
    if (local_90.Object == (FJsonValue *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pTVar9 = FJsonValue::AsArray(local_90.Object);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.SharedReferenceCount.ReferenceController);
    local_a0.Data = (FScriptContainerElement *)0x0;
    iVar1 = pTVar9->ArrayNum;
    pTVar8 = (TSharedPtr<FJsonValue,1> *)(pTVar9->AllocatorInstance).Data;
    local_98 = iVar1;
    if (iVar1 == 0) {
      local_94 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,0,&local_a0,iVar1,&local_94);
      ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
                (local_a0.Data,pTVar8,iVar1);
    }
    iVar1 = local_98;
    pTVar8 = (TSharedPtr<FJsonValue,1> *)(local_a0.Data + (longlong)local_98 * 0x10);
    FVar10.Data = local_a0.Data;
    while( true ) {
      if (local_98 != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if ((TSharedPtr<FJsonValue,1> *)FVar10.Data == pTVar8) break;
      if (((TSharedPtr<FJsonValue,1> *)FVar10.Data)->Object == (FJsonValue *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      this_01 = ((TSharedPtr<FJsonValue,1> *)FVar10.Data)->Object;
      local_res10 = 0.0;
      cVar5 = (**(code **)(this_01->_padding_ + 0x50))(this_01,&local_res10);
      if (cVar5 == '\0') {
        ::FString::FString(&local_80,L"Number");
        FJsonValue::ErrorMessage(this_01,&local_80);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
      }
      local_a8[0] = (int)local_res10;
      pFVar2 = (param_2->AllocatorInstance).Data;
      if ((pFVar2 <= (FScriptContainerElement *)local_a8) &&
         ((FScriptContainerElement *)local_a8 < pFVar2 + (longlong)param_2->ArrayMax * 4)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar7 = param_2->ArrayNum;
      if (iVar7 == param_2->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      FVar10.Data = FVar10.Data + 0x10;
      param_2->ArrayNum = iVar7 + 1;
      *(int *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_a8[0];
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>((TSharedPtr<FJsonValue,1> *)local_a0.Data,local_98);
    if ((TSharedPtr<FJsonValue,1> *)local_a0.Data != (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_a0.Data);
    }
  }
  return;
}

// SerializeArray @ 141de3f80

void __thiscall
FJsonSerializerReader::SerializeArray
          (FJsonSerializerReader *this,TStringView<wchar_t> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  FJsonValue *this_01;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  TSharedPtr<FJsonValue,1> *pTVar8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  double local_res10;
  float local_a8 [2];
  ForAnyElementType local_a0;
  int local_98;
  int local_94;
  TSharedPtr<FJsonValue,1> local_90;
  FString local_80;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  wchar_t *local_48;
  undefined8 uStack_40;
  
  if ((this->JsonObject).Object == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_68.DataPtr = param_1->DataPtr;
  local_68.Size = param_1->Size;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             *)(this->JsonObject).Object;
  local_48 = local_68.DataPtr;
  uStack_40 = local_68._8_8_;
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,local_68.DataPtr);
  pTVar8 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>(this_00,uVar6,&local_68);
  if (((pTVar8 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar8->Object != (FJsonValue *)0x0)) &&
     (pTVar8->Object->Type == Array)) {
    if ((this->JsonObject).Object == (FJsonObject *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_58.DataPtr = param_1->DataPtr;
    local_58.Size = param_1->Size;
    local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
    FJsonObject::GetField((this->JsonObject).Object,&local_90,&local_58,Array);
    if (local_90.Object == (FJsonValue *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pTVar9 = FJsonValue::AsArray(local_90.Object);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.SharedReferenceCount.ReferenceController);
    local_a0.Data = (FScriptContainerElement *)0x0;
    iVar1 = pTVar9->ArrayNum;
    pTVar8 = (TSharedPtr<FJsonValue,1> *)(pTVar9->AllocatorInstance).Data;
    local_98 = iVar1;
    if (iVar1 == 0) {
      local_94 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,0,&local_a0,iVar1,&local_94);
      ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
                (local_a0.Data,pTVar8,iVar1);
    }
    iVar1 = local_98;
    pTVar8 = (TSharedPtr<FJsonValue,1> *)(local_a0.Data + (longlong)local_98 * 0x10);
    FVar10.Data = local_a0.Data;
    while( true ) {
      if (local_98 != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if ((TSharedPtr<FJsonValue,1> *)FVar10.Data == pTVar8) break;
      if (((TSharedPtr<FJsonValue,1> *)FVar10.Data)->Object == (FJsonValue *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      this_01 = ((TSharedPtr<FJsonValue,1> *)FVar10.Data)->Object;
      local_res10 = 0.0;
      cVar5 = (**(code **)(this_01->_padding_ + 0x50))(this_01,&local_res10);
      if (cVar5 == '\0') {
        ::FString::FString(&local_80,L"Number");
        FJsonValue::ErrorMessage(this_01,&local_80);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      local_a8[0] = (float)local_res10;
      if ((pFVar2 <= (FScriptContainerElement *)local_a8) &&
         ((FScriptContainerElement *)local_a8 < pFVar2 + (longlong)param_2->ArrayMax * 4)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar7 = param_2->ArrayNum;
      if (iVar7 == param_2->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar7 + 1;
      FVar10.Data = FVar10.Data + 0x10;
      *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_a8[0];
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>((TSharedPtr<FJsonValue,1> *)local_a0.Data,local_98);
    if ((TSharedPtr<FJsonValue,1> *)local_a0.Data != (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_a0.Data);
    }
  }
  return;
}

// SerializeArray @ 141de42a0

/* WARNING: Removing unreachable block (ram,0x000141de458f) */

void __thiscall
FJsonSerializerReader::SerializeArray
          (FJsonSerializerReader *this,TStringView<wchar_t> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  FJsonValue *this_01;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  TSharedPtr<FJsonValue,1> *pTVar7;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  undefined8 local_98;
  undefined8 local_90;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  TSharedPtr<FJsonValue,1> local_78;
  FString local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  wchar_t *local_38;
  undefined8 uStack_30;
  
  if (((this->JsonObject).Object == (FJsonObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_58.DataPtr = param_1->DataPtr;
  local_58.Size = param_1->Size;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             *)(this->JsonObject).Object;
  local_38 = local_58.DataPtr;
  uStack_30 = local_58._8_8_;
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,local_58.DataPtr);
  pTVar7 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>(this_00,uVar5,&local_58);
  if (((pTVar7 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar7->Object != (FJsonValue *)0x0)) &&
     (pTVar7->Object->Type == Array)) {
    if (((this->JsonObject).Object == (FJsonObject *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_48.DataPtr = param_1->DataPtr;
    local_48.Size = param_1->Size;
    local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
    FJsonObject::GetField((this->JsonObject).Object,&local_78,&local_48,Array);
    if ((local_78.Object == (FJsonValue *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar8 = FJsonValue::AsArray(local_78.Object);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    local_88.Data = (FScriptContainerElement *)0x0;
    iVar1 = pTVar8->ArrayNum;
    pTVar7 = (TSharedPtr<FJsonValue,1> *)(pTVar8->AllocatorInstance).Data;
    local_80 = iVar1;
    if (iVar1 == 0) {
      local_7c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,0,&local_88,iVar1,&local_7c);
      ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
                (local_88.Data,pTVar7,iVar1);
    }
    iVar1 = local_80;
    pTVar7 = (TSharedPtr<FJsonValue,1> *)(local_88.Data + (longlong)local_80 * 0x10);
    FVar10.Data = local_88.Data;
    while( true ) {
      if (local_80 != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if ((TSharedPtr<FJsonValue,1> *)FVar10.Data == pTVar7) break;
      if ((((TSharedPtr<FJsonValue,1> *)FVar10.Data)->Object == (FJsonValue *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_01 = ((TSharedPtr<FJsonValue,1> *)FVar10.Data)->Object;
      local_98 = 0;
      local_90 = 0;
      cVar4 = (**(code **)(this_01->_padding_ + 0x58))(this_01,&local_98);
      if (cVar4 == '\0') {
        ::FString::FString(&local_68,L"String");
        FJsonValue::ErrorMessage(this_01,&local_68);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      pFVar9 = (param_2->AllocatorInstance).Data;
      if (((pFVar9 <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 < pFVar9 + (longlong)param_2->ArrayMax * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar6 + 1;
      pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar9 = 0;
      *(undefined8 *)pFVar9 = local_98;
      local_98 = 0;
      *(undefined4 *)(pFVar9 + 8) = (undefined4)local_90;
      *(undefined4 *)(pFVar9 + 0xc) = local_90._4_4_;
      local_90 = 0;
      FVar10.Data = FVar10.Data + 0x10;
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>((TSharedPtr<FJsonValue,1> *)local_88.Data,local_80);
    if ((TSharedPtr<FJsonValue,1> *)local_88.Data != (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  return;
}

// SerializeMap @ 141de8020

void __thiscall
FJsonSerializerReader::SerializeMap
          (FJsonSerializerReader *this,TStringView<wchar_t> *param_1,
          TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
          *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  FJsonValue *this_01;
  code *pcVar7;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator> *this_02
  ;
  longlong *plVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  TSharedPtr<FJsonValue,1> *pTVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  undefined1 local_res8 [8];
  int local_res10 [2];
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
  *local_res18;
  int local_res20;
  double local_148;
  int local_140;
  undefined1 local_13c [12];
  TReferenceControllerBase<1> *local_130;
  longlong *local_128;
  int iStack_120;
  uint uStack_11c;
  TBitArray<FDefaultBitArrayAllocator> *local_118;
  undefined4 uStack_110;
  int iStack_10c;
  int local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  FString local_c8;
  longlong local_b8;
  int *local_b0;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  wchar_t *local_88;
  undefined8 uStack_80;
  undefined4 local_5c;
  
  local_res18 = (TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                 *)param_2;
  if (((this->JsonObject).Object == (FJsonObject *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_a8.DataPtr = param_1->DataPtr;
  local_a8.Size = param_1->Size;
  local_a8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             *)(this->JsonObject).Object;
  local_88 = local_a8.DataPtr;
  uStack_80 = local_a8._8_8_;
  uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,local_a8.DataPtr);
  pTVar12 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>(this_00,uVar11,&local_a8);
  if (((pTVar12 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar12->Object != (FJsonValue *)0x0)) &&
     (pTVar12->Object->Type == Object)) {
    if (((this->JsonObject).Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_98.DataPtr = param_1->DataPtr;
    local_98.Size = param_1->Size;
    local_98._12_4_ = *(undefined4 *)&param_1->field_0xc;
    FJsonObject::GetField
              ((this->JsonObject).Object,(TSharedPtr<FJsonValue,1> *)(local_13c + 4),&local_98,
               Object);
    if (((undefined8 *)local_13c._4_8_ == (undefined8 *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    plVar13 = (longlong *)(*(code *)**(undefined8 **)local_13c._4_8_)(local_13c._4_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_130);
    pTVar5 = (TReferenceControllerBase<1> *)plVar13[1];
    plVar13 = (longlong *)*plVar13;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((plVar13 == (longlong *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar3 = (int)plVar13[5];
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar13 + 2);
    iStack_120 = 0;
    uStack_11c = 1;
    local_108 = 0;
    iStack_10c = 0;
    if (iVar3 != 0) {
      pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar13[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar13[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar17 = pTVar1;
      }
      uVar11 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
      while (uVar11 == 0) {
        lVar14 = (longlong)iStack_120;
        local_108 = local_108 + 0x20;
        iStack_120 = iStack_120 + 1;
        iStack_10c = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_120) goto LAB_141de8230;
        uVar11 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar14 * 4 + 4);
      }
      uStack_11c = -uVar11 & uVar11;
      uVar2 = (ulonglong)uStack_11c * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_res20 = (int)lVar14;
      iStack_10c = local_108 + -1 + local_res20;
      if (iVar3 < iStack_10c) {
        iStack_10c = iVar3;
      }
    }
LAB_141de8230:
    uVar11 = *(uint *)(plVar13 + 5);
    uStack_104 = local_5c;
    uVar16 = uVar11 & 0xffffffe0;
    iStack_100 = (int)plVar13[1] - *(int *)((longlong)plVar13 + 0x34);
    uStack_110 = 0xffffffff;
    TStack_f0._padding_ = CONCAT44(uStack_11c,iStack_120);
    TStack_f0.CurrentBitIndex = iStack_10c;
    TStack_f0.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar11 >> 5;
    TStack_f0._28_4_ = local_5c;
    TStack_f0.BaseBitIndex = local_108;
    uStack_d0 = CONCAT44(uStack_fc,iStack_100);
    local_128 = plVar13;
    local_118 = pTVar1;
    local_f8 = plVar13;
    TStack_f0.Array = pTVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_02 = local_res18;
    uVar4 = *(uint *)(plVar13 + 5);
    if (uVar11 != uVar4) {
      pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar13[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar13[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar17 = pTVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) &
               *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
      while (uVar11 == 0) {
        lVar14 = (longlong)iVar15;
        uVar16 = uVar16 + 0x20;
        iVar15 = iVar15 + 1;
        uVar11 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_141de8350;
        uVar11 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar14 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_140 = (int)lVar14;
      uVar11 = local_140 + -1 + uVar16;
      if ((int)uVar4 < (int)uVar11) {
        uVar11 = uVar4;
      }
    }
LAB_141de8350:
    while( true ) {
      plVar8 = local_f8;
      if ((int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34) != (int)uStack_d0) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_f0.CurrentBitIndex == uVar11) && (TStack_f0.Array == pTVar1)) &&
         (plVar8 == plVar13)) break;
      lVar6 = *plVar8;
      lVar14 = lVar6 + (longlong)TStack_f0.CurrentBitIndex * 0x28;
      if ((*(longlong *)(lVar6 + 0x10 + (longlong)TStack_f0.CurrentBitIndex * 0x28) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      this_01 = *(FJsonValue **)(lVar14 + 0x10);
      local_148 = 0.0;
      cVar10 = (**(code **)(this_01->_padding_ + 0x50))(this_01,&local_148);
      if (cVar10 == '\0') {
        ::FString::FString(&local_c8,L"Number");
        FJsonValue::ErrorMessage(this_01,&local_c8);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
      }
      local_res10[0] = (int)local_148;
      local_b0 = local_res10;
      local_b8 = lVar14;
      TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FString_const_&,int_const_&>_>
                (this_02,(TPairInitializer<FString_const_&,int_const_&> *)local_13c,
                 (bool *)&local_b8);
      TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  return;
}

// SerializeMap @ 141de8490

void __thiscall
FJsonSerializerReader::SerializeMap
          (FJsonSerializerReader *this,TStringView<wchar_t> *param_1,
          TMap<FString,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,float,0>_>
          *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  FJsonValue *this_01;
  code *pcVar7;
  TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>
  *this_02;
  longlong *plVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  TSharedPtr<FJsonValue,1> *pTVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  undefined1 local_res8 [8];
  float local_res10 [2];
  TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>
  *local_res18;
  int local_res20;
  double local_148;
  int local_140;
  undefined1 local_13c [12];
  TReferenceControllerBase<1> *local_130;
  longlong *local_128;
  int iStack_120;
  uint uStack_11c;
  TBitArray<FDefaultBitArrayAllocator> *local_118;
  undefined4 uStack_110;
  int iStack_10c;
  int local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  FString local_c8;
  longlong local_b8;
  float *local_b0;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  wchar_t *local_88;
  undefined8 uStack_80;
  undefined4 local_5c;
  
  local_res18 = (TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>
                 *)param_2;
  if (((this->JsonObject).Object == (FJsonObject *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_a8.DataPtr = param_1->DataPtr;
  local_a8.Size = param_1->Size;
  local_a8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             *)(this->JsonObject).Object;
  local_88 = local_a8.DataPtr;
  uStack_80 = local_a8._8_8_;
  uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,local_a8.DataPtr);
  pTVar12 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>(this_00,uVar11,&local_a8);
  if (((pTVar12 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar12->Object != (FJsonValue *)0x0)) &&
     (pTVar12->Object->Type == Object)) {
    if (((this->JsonObject).Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_98.DataPtr = param_1->DataPtr;
    local_98.Size = param_1->Size;
    local_98._12_4_ = *(undefined4 *)&param_1->field_0xc;
    FJsonObject::GetField
              ((this->JsonObject).Object,(TSharedPtr<FJsonValue,1> *)(local_13c + 4),&local_98,
               Object);
    if (((undefined8 *)local_13c._4_8_ == (undefined8 *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    plVar13 = (longlong *)(*(code *)**(undefined8 **)local_13c._4_8_)(local_13c._4_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_130);
    pTVar5 = (TReferenceControllerBase<1> *)plVar13[1];
    plVar13 = (longlong *)*plVar13;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((plVar13 == (longlong *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar3 = (int)plVar13[5];
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar13 + 2);
    iStack_120 = 0;
    uStack_11c = 1;
    local_108 = 0;
    iStack_10c = 0;
    if (iVar3 != 0) {
      pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar13[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar13[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar17 = pTVar1;
      }
      uVar11 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
      while (uVar11 == 0) {
        lVar14 = (longlong)iStack_120;
        local_108 = local_108 + 0x20;
        iStack_120 = iStack_120 + 1;
        iStack_10c = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_120) goto LAB_141de86a0;
        uVar11 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar14 * 4 + 4);
      }
      uStack_11c = -uVar11 & uVar11;
      uVar2 = (ulonglong)uStack_11c * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_res20 = (int)lVar14;
      iStack_10c = local_108 + -1 + local_res20;
      if (iVar3 < iStack_10c) {
        iStack_10c = iVar3;
      }
    }
LAB_141de86a0:
    uVar11 = *(uint *)(plVar13 + 5);
    uStack_104 = local_5c;
    uVar16 = uVar11 & 0xffffffe0;
    iStack_100 = (int)plVar13[1] - *(int *)((longlong)plVar13 + 0x34);
    uStack_110 = 0xffffffff;
    TStack_f0._padding_ = CONCAT44(uStack_11c,iStack_120);
    TStack_f0.CurrentBitIndex = iStack_10c;
    TStack_f0.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar11 >> 5;
    TStack_f0._28_4_ = local_5c;
    TStack_f0.BaseBitIndex = local_108;
    uStack_d0 = CONCAT44(uStack_fc,iStack_100);
    local_128 = plVar13;
    local_118 = pTVar1;
    local_f8 = plVar13;
    TStack_f0.Array = pTVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_02 = local_res18;
    uVar4 = *(uint *)(plVar13 + 5);
    if (uVar11 != uVar4) {
      pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar13[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar13[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar17 = pTVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) &
               *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
      while (uVar11 == 0) {
        lVar14 = (longlong)iVar15;
        uVar16 = uVar16 + 0x20;
        iVar15 = iVar15 + 1;
        uVar11 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_141de87c0;
        uVar11 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar14 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_140 = (int)lVar14;
      uVar11 = local_140 + -1 + uVar16;
      if ((int)uVar4 < (int)uVar11) {
        uVar11 = uVar4;
      }
    }
LAB_141de87c0:
    while( true ) {
      plVar8 = local_f8;
      if ((int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34) != (int)uStack_d0) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_f0.CurrentBitIndex == uVar11) && (TStack_f0.Array == pTVar1)) &&
         (plVar8 == plVar13)) break;
      lVar6 = *plVar8;
      lVar14 = lVar6 + (longlong)TStack_f0.CurrentBitIndex * 0x28;
      if ((*(longlong *)(lVar6 + 0x10 + (longlong)TStack_f0.CurrentBitIndex * 0x28) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      this_01 = *(FJsonValue **)(lVar14 + 0x10);
      local_148 = 0.0;
      cVar10 = (**(code **)(this_01->_padding_ + 0x50))(this_01,&local_148);
      if (cVar10 == '\0') {
        ::FString::FString(&local_c8,L"Number");
        FJsonValue::ErrorMessage(this_01,&local_c8);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
      }
      local_b0 = local_res10;
      local_res10[0] = (float)local_148;
      local_b8 = lVar14;
      TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,float_const_&>_>
                (this_02,(TPairInitializer<FString_const_&,float_const_&> *)local_13c,
                 (bool *)&local_b8);
      TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  return;
}

// SerializeMap @ 141de8900

void __thiscall
FJsonSerializerReader::SerializeMap
          (FJsonSerializerReader *this,TStringView<wchar_t> *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  FJsonValue *this_01;
  code *pcVar7;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *this_02;
  longlong *plVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  TSharedPtr<FJsonValue,1> *pTVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  undefined1 local_res8 [8];
  int local_res10;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *local_res18;
  int local_res20;
  void *local_148;
  undefined8 local_140;
  undefined1 local_138 [16];
  TReferenceControllerBase<1> *local_128;
  longlong *local_120;
  int iStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  int iStack_104;
  int local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  longlong *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  FString local_c0;
  longlong local_b0;
  void **local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  wchar_t *local_78;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  local_res18 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)param_2;
  if (((this->JsonObject).Object == (FJsonObject *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_98.DataPtr = param_1->DataPtr;
  local_98.Size = param_1->Size;
  local_98._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             *)(this->JsonObject).Object;
  local_78 = local_98.DataPtr;
  uStack_70 = local_98._8_8_;
  uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,local_98.DataPtr);
  pTVar12 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>(this_00,uVar11,&local_98);
  if (((pTVar12 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar12->Object != (FJsonValue *)0x0)) &&
     (pTVar12->Object->Type == Object)) {
    if (((this->JsonObject).Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_88.DataPtr = param_1->DataPtr;
    local_88.Size = param_1->Size;
    local_88._12_4_ = *(undefined4 *)&param_1->field_0xc;
    FJsonObject::GetField
              ((this->JsonObject).Object,(TSharedPtr<FJsonValue,1> *)(local_138 + 8),&local_88,
               Object);
    if (((FString *)local_138._8_8_ == (FString *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    plVar13 = (longlong *)
              (**(code **)(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)local_138._8_8_)->
                          AllocatorInstance).Data)(local_138._8_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_128);
    pTVar5 = (TReferenceControllerBase<1> *)plVar13[1];
    plVar13 = (longlong *)*plVar13;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((plVar13 == (longlong *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar3 = (int)plVar13[5];
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar13 + 2);
    iStack_118 = 0;
    local_100 = 0;
    uStack_114 = 1;
    iStack_104 = 0;
    if (iVar3 != 0) {
      pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar13[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar13[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar17 = pTVar1;
      }
      uVar11 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
      while (uVar11 == 0) {
        lVar14 = (longlong)iStack_118;
        local_100 = local_100 + 0x20;
        iStack_118 = iStack_118 + 1;
        iStack_104 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_118) goto LAB_141de8afe;
        uVar11 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar14 * 4 + 4);
      }
      uStack_114 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uStack_114 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_res10 = (int)lVar14;
      iStack_104 = local_100 + -1 + local_res10;
      if (iVar3 < iStack_104) {
        iStack_104 = iVar3;
      }
    }
LAB_141de8afe:
    uVar11 = *(uint *)(plVar13 + 5);
    uStack_fc = local_4c;
    uVar16 = uVar11 & 0xffffffe0;
    iStack_f8 = (int)plVar13[1] - *(int *)((longlong)plVar13 + 0x34);
    uStack_108 = 0xffffffff;
    TStack_e8._padding_ = CONCAT44(uStack_114,iStack_118);
    TStack_e8.CurrentBitIndex = iStack_104;
    TStack_e8.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar11 >> 5;
    TStack_e8._28_4_ = local_4c;
    TStack_e8.BaseBitIndex = local_100;
    uStack_c8 = CONCAT44(uStack_f4,iStack_f8);
    local_120 = plVar13;
    local_110 = pTVar1;
    local_f0 = plVar13;
    TStack_e8.Array = pTVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_02 = local_res18;
    uVar4 = *(uint *)(plVar13 + 5);
    if (uVar11 != uVar4) {
      pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar13[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar13[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar17 = pTVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) &
               *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
      while (uVar11 == 0) {
        lVar14 = (longlong)iVar15;
        uVar16 = uVar16 + 0x20;
        iVar15 = iVar15 + 1;
        uVar11 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_141de8c20;
        uVar11 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar14 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_res20 = (int)lVar14;
      uVar11 = local_res20 + -1 + uVar16;
      if ((int)uVar4 < (int)uVar11) {
        uVar11 = uVar4;
      }
    }
LAB_141de8c20:
    while( true ) {
      plVar8 = local_f0;
      if ((int)local_f0[1] - *(int *)((longlong)local_f0 + 0x34) != (int)uStack_c8) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_e8.CurrentBitIndex == uVar11) && (TStack_e8.Array == pTVar1)) &&
         (plVar8 == plVar13)) break;
      lVar6 = *plVar8;
      lVar14 = lVar6 + (longlong)TStack_e8.CurrentBitIndex * 0x28;
      if ((*(longlong *)(lVar6 + 0x10 + (longlong)TStack_e8.CurrentBitIndex * 0x28) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      this_01 = *(FJsonValue **)(lVar14 + 0x10);
      local_148 = (void *)0x0;
      local_140 = 0;
      cVar10 = (**(code **)(this_01->_padding_ + 0x58))(this_01,&local_148);
      if (cVar10 == '\0') {
        ::FString::FString(&local_c0,L"String");
        FJsonValue::ErrorMessage(this_01,&local_c0);
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
      }
      local_a8 = &local_148;
      local_b0 = lVar14;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FString_&&>_>
                (this_02,(TPairInitializer<FString_const_&,FString_&&> *)local_138,(bool *)&local_b0
                );
      if (local_148 != (void *)0x0) {
        FMemory::Free(local_148);
      }
      TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  return;
}

// SerializeMap @ 141de8d60

void __thiscall
FJsonSerializerReader::SerializeMap
          (FJsonSerializerReader *this,TStringView<wchar_t> *param_1,
          TMap<FString,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
          *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  TSharedPtr<FJsonValue,1> *pTVar10;
  longlong *plVar11;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar12;
  longlong lVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_res18;
  int local_res20;
  undefined4 local_148 [2];
  ForAnyElementType local_140;
  undefined8 local_138;
  int local_130;
  undefined1 local_12c [20];
  TSharedPtr<FJsonValue,1> local_118;
  longlong *local_108;
  int iStack_100;
  uint uStack_fc;
  TBitArray<FDefaultBitArrayAllocator> *local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  int local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  longlong local_a8;
  ForAnyElementType *local_a0;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  wchar_t *local_78;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  local_res18 = (TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 *)param_2;
  if (((this->JsonObject).Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_98.DataPtr = param_1->DataPtr;
  local_98.Size = param_1->Size;
  local_98._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             *)(this->JsonObject).Object;
  local_78 = local_98.DataPtr;
  uStack_70 = local_98._8_8_;
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,local_98.DataPtr);
  pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>(this_00,uVar9,&local_98);
  if (((pTVar10 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar10->Object != (FJsonValue *)0x0)) &&
     (pTVar10->Object->Type == Object)) {
    if (((this->JsonObject).Object == (FJsonObject *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_88.DataPtr = param_1->DataPtr;
    local_88.Size = param_1->Size;
    local_88._12_4_ = *(undefined4 *)&param_1->field_0xc;
    FJsonObject::GetField((this->JsonObject).Object,&local_118,&local_88,Object);
    if ((local_118.Object == (FJsonValue *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar11 = (longlong *)(**(code **)(local_118.Object)->_padding_)(local_118.Object);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.SharedReferenceCount.ReferenceController);
    local_12c._12_8_ = plVar11[1];
    plVar11 = (longlong *)*plVar11;
    if ((TReferenceControllerBase<1> *)local_12c._12_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_12c._12_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_12c._12_8_)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_12c._4_8_ = plVar11;
    if ((plVar11 == (longlong *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar4 = (int)plVar11[5];
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar11 + 2);
    iStack_100 = 0;
    local_e8 = 0;
    uStack_fc = 1;
    iStack_ec = 0;
    if (iVar4 != 0) {
      pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)plVar11[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar11[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar18 = pTVar1;
      }
      uVar9 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
      while (uVar9 == 0) {
        lVar13 = (longlong)iStack_100;
        local_e8 = local_e8 + 0x20;
        iStack_100 = iStack_100 + 1;
        iStack_ec = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_100) goto LAB_141de8f70;
        uVar9 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar13 * 4 + 4);
      }
      uStack_fc = -uVar9 & uVar9;
      uVar2 = (ulonglong)uStack_fc * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res20 = (int)lVar13;
      iStack_ec = local_e8 + -1 + local_res20;
      if (iVar4 < iStack_ec) {
        iStack_ec = iVar4;
      }
    }
LAB_141de8f70:
    uVar9 = *(uint *)(plVar11 + 5);
    uStack_e4 = local_4c;
    uVar16 = uVar9 & 0xffffffe0;
    iStack_e0 = (int)plVar11[1] - *(int *)((longlong)plVar11 + 0x34);
    uStack_f0 = 0xffffffff;
    TStack_d0._padding_ = CONCAT44(uStack_fc,iStack_100);
    TStack_d0.CurrentBitIndex = iStack_ec;
    TStack_d0.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar9 >> 5;
    TStack_d0._28_4_ = local_4c;
    TStack_d0.BaseBitIndex = local_e8;
    uStack_b0 = CONCAT44(uStack_dc,iStack_e0);
    local_108 = plVar11;
    local_f8 = pTVar1;
    local_d8 = plVar11;
    TStack_d0.Array = pTVar1;
    if ((((int)uVar9 < 0) || (iVar4 < (int)uVar9)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar3 = *(uint *)(plVar11 + 5);
    if (uVar9 != uVar3) {
      pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)plVar11[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar11[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar18 = pTVar1;
      }
      uVar9 = -1 << ((byte)uVar9 & 0x1f) &
              *(uint *)((pTVar18->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
      while (uVar9 == 0) {
        lVar13 = (longlong)iVar14;
        uVar16 = uVar16 + 0x20;
        iVar14 = iVar14 + 1;
        uVar9 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_141de9070;
        uVar9 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar13 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_130 = (int)lVar13;
      uVar9 = local_130 + -1 + uVar16;
      if ((int)uVar3 < (int)uVar9) {
        uVar9 = uVar3;
      }
    }
LAB_141de9070:
    while( true ) {
      plVar6 = local_d8;
      if ((int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34) != (int)uStack_b0) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_d0.CurrentBitIndex == uVar9) && (TStack_d0.Array == pTVar1)) &&
         (plVar6 == plVar11)) break;
      lVar13 = *plVar6 + (longlong)TStack_d0.CurrentBitIndex * 0x28;
      local_140.Data = (FScriptContainerElement *)0x0;
      local_138 = 0;
      if ((*(longlong *)(lVar13 + 0x10) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar12 = FJsonValue::AsArray(*(FJsonValue **)(lVar13 + 0x10));
      iVar4 = pTVar12->ArrayNum;
      pFVar15 = (pTVar12->AllocatorInstance).Data;
      pFVar17 = pFVar15 + (longlong)iVar4 * 0x10;
      while( true ) {
        if (pTVar12->ArrayNum != iVar4) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pFVar15 == pFVar17) break;
        plVar11 = *(longlong **)pFVar15;
        if ((plVar11 != (longlong *)0x0) &&
           (cVar8 = (**(code **)(*plVar11 + 0x30))(plVar11,local_148), cVar8 != '\0')) {
          if ((local_140.Data <= (FScriptContainerElement *)local_148) &&
             (((FScriptContainerElement *)local_148 < local_140.Data + (longlong)local_138._4_4_ * 4
              && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)))) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar14 = (int)local_138;
          if ((int)local_138 == local_138._4_4_) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_140,(int *)((longlong)&local_138 + 4));
          }
          local_138 = CONCAT44(local_138._4_4_,iVar14 + 1);
          *(undefined4 *)(local_140.Data + (longlong)iVar14 * 4) = local_148[0];
        }
        pFVar15 = pFVar15 + 0x10;
      }
      local_a0 = &local_140;
      local_a8 = lVar13;
      TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&>_>
                (local_res18,
                 (TPairInitializer<FString_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&>
                  *)local_12c,(bool *)&local_a8);
      if (local_140.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data);
      }
      TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
      plVar11 = (longlong *)local_12c._4_8_;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_12c._12_8_);
  }
  return;
}

// SerializeMap @ 141de9290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FJsonSerializerReader::SerializeMap
          (FJsonSerializerReader *this,TStringView<wchar_t> *param_1,
          TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>
          *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  int iVar2;
  uint uVar3;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  TReferenceControllerBase<1> *pTVar4;
  FJsonValue *pFVar5;
  code *pcVar6;
  undefined8 this_01;
  longlong *plVar7;
  bool bVar8;
  uint uVar9;
  TSharedPtr<FJsonValue,1> *pTVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  undefined1 auStack_168 [32];
  undefined1 local_148 [4];
  int local_144;
  int local_140;
  undefined1 local_13c [12];
  TSharedPtr<FJsonValue,1> local_130;
  longlong *local_120;
  int iStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  int iStack_104;
  int local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  longlong *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  longlong local_c0;
  TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  wchar_t *local_88;
  undefined8 uStack_80;
  undefined4 local_5c;
  TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_13c._4_8_ = param_2;
  if (((this->JsonObject).Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_a8.DataPtr = param_1->DataPtr;
  local_a8.Size = param_1->Size;
  local_a8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             *)(this->JsonObject).Object;
  local_88 = local_a8.DataPtr;
  uStack_80 = local_a8._8_8_;
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,local_a8.DataPtr);
  pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>(this_00,uVar9,&local_a8);
  if (((pTVar10 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar10->Object != (FJsonValue *)0x0)) &&
     (pTVar10->Object->Type == Object)) {
    if (((this->JsonObject).Object == (FJsonObject *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_98.DataPtr = param_1->DataPtr;
    local_98.Size = param_1->Size;
    local_98._12_4_ = *(undefined4 *)&param_1->field_0xc;
    FJsonObject::GetField((this->JsonObject).Object,&local_130,&local_98,Object);
    if ((local_130.Object == (FJsonValue *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    plVar11 = (longlong *)(**(code **)(local_130.Object)->_padding_)(local_130.Object);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_130.SharedReferenceCount.ReferenceController);
    pTVar4 = (TReferenceControllerBase<1> *)plVar11[1];
    plVar11 = (longlong *)*plVar11;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((plVar11 == (longlong *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar2 = (int)plVar11[5];
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar11 + 2);
    iStack_118 = 0;
    uStack_114 = 1;
    local_100 = 0;
    iStack_104 = 0;
    if (iVar2 != 0) {
      pTVar16 = (TBitArray<FDefaultBitArrayAllocator> *)plVar11[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar11[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar16 = pTVar1;
      }
      uVar9 = *(uint *)(pTVar16->AllocatorInstance).InlineData;
      while (uVar9 == 0) {
        lVar12 = (longlong)iStack_118;
        local_100 = local_100 + 0x20;
        iStack_118 = iStack_118 + 1;
        iStack_104 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_118) goto LAB_141de949f;
        uVar9 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar12 * 4 + 4);
      }
      uStack_114 = -uVar9 & uVar9;
      uVar14 = (ulonglong)uStack_114 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_144 = (int)lVar12;
      iStack_104 = local_100 + -1 + local_144;
      if (iVar2 < iStack_104) {
        iStack_104 = iVar2;
      }
    }
LAB_141de949f:
    uVar9 = *(uint *)(plVar11 + 5);
    uStack_fc = local_5c;
    uVar15 = uVar9 & 0xffffffe0;
    iStack_f8 = (int)plVar11[1] - *(int *)((longlong)plVar11 + 0x34);
    uStack_108 = 0xffffffff;
    TStack_e8._padding_ = CONCAT44(uStack_114,iStack_118);
    TStack_e8.CurrentBitIndex = iStack_104;
    TStack_e8.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar9 >> 5;
    TStack_e8._28_4_ = local_5c;
    TStack_e8.BaseBitIndex = local_100;
    uStack_c8 = CONCAT44(uStack_f4,iStack_f8);
    local_120 = plVar11;
    local_110 = pTVar1;
    local_f0 = plVar11;
    TStack_e8.Array = pTVar1;
    if ((((int)uVar9 < 0) || (iVar2 < (int)uVar9)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this_01 = local_13c._4_8_;
    uVar3 = *(uint *)(plVar11 + 5);
    if (uVar9 != uVar3) {
      pTVar16 = (TBitArray<FDefaultBitArrayAllocator> *)plVar11[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar11[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar16 = pTVar1;
      }
      uVar9 = -1 << ((byte)uVar9 & 0x1f) &
              *(uint *)((pTVar16->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
      while (uVar9 == 0) {
        lVar12 = (longlong)iVar13;
        uVar15 = uVar15 + 0x20;
        iVar13 = iVar13 + 1;
        uVar9 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_141de95c0;
        uVar9 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar12 * 4 + 4);
      }
      uVar14 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_140 = (int)lVar12;
      uVar9 = local_140 + -1 + uVar15;
      if ((int)uVar3 < (int)uVar9) {
        uVar9 = uVar3;
      }
    }
LAB_141de95c0:
    while( true ) {
      plVar7 = local_f0;
      if ((int)local_f0[1] - *(int *)((longlong)local_f0 + 0x34) != (int)uStack_c8) {
        local_148[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_148);
      }
      if (((TStack_e8.CurrentBitIndex == uVar9) && (TStack_e8.Array == pTVar1)) &&
         (plVar7 == plVar11)) break;
      lVar12 = *plVar7;
      pFVar5 = *(FJsonValue **)(lVar12 + 0x10 + (longlong)TStack_e8.CurrentBitIndex * 0x28);
      if (pFVar5 != (FJsonValue *)0x0) {
        local_c0 = lVar12 + (longlong)TStack_e8.CurrentBitIndex * 0x28;
        local_b8 = UE::Json::ToSimpleJsonVariant(&local_58,pFVar5);
        TSet<TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FString_const_&,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&&>_>
                  ((TSet<TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>,FDefaultSetAllocator>
                    *)this_01,
                   (TPairInitializer<FString_const_&,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&&>
                    *)local_13c,(bool *)&local_c0);
        uVar14 = (ulonglong)local_58.TypeIndex;
        if ((2 < uVar14) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14])(&local_58);
      }
      TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

// SerializeMap @ 141de96d0

void __thiscall
FJsonSerializerReader::SerializeMap
          (FJsonSerializerReader *this,TStringView<wchar_t> *param_1,
          TMap<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>
          *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  FJsonValue *this_01;
  code *pcVar7;
  TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
  *this_02;
  longlong *plVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  TSharedPtr<FJsonValue,1> *pTVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  undefined1 local_res8 [8];
  int local_res10;
  TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
  *local_res18;
  int local_res20;
  double local_158;
  TPairInitializer<FString_const_&,__int64_const_&> local_150;
  TSharedPtr<FJsonValue,1> local_140;
  longlong *local_130;
  int iStack_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  undefined4 uStack_118;
  int iStack_114;
  int local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  FString local_d0;
  longlong local_c0;
  long64 **local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  wchar_t *local_88;
  undefined8 uStack_80;
  undefined4 local_5c;
  
  local_res18 = (TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
                 *)param_2;
  if (((this->JsonObject).Object == (FJsonObject *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_a8.DataPtr = param_1->DataPtr;
  local_a8.Size = param_1->Size;
  local_a8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             *)(this->JsonObject).Object;
  local_88 = local_a8.DataPtr;
  uStack_80 = local_a8._8_8_;
  uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,local_a8.DataPtr);
  pTVar12 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>(this_00,uVar11,&local_a8);
  if (((pTVar12 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar12->Object != (FJsonValue *)0x0)) &&
     (pTVar12->Object->Type == Object)) {
    if (((this->JsonObject).Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_98.DataPtr = param_1->DataPtr;
    local_98.Size = param_1->Size;
    local_98._12_4_ = *(undefined4 *)&param_1->field_0xc;
    FJsonObject::GetField((this->JsonObject).Object,&local_140,&local_98,Object);
    if ((local_140.Object == (FJsonValue *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    plVar13 = (longlong *)(**(code **)(local_140.Object)->_padding_)(local_140.Object);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_140.SharedReferenceCount.ReferenceController);
    pTVar5 = (TReferenceControllerBase<1> *)plVar13[1];
    plVar13 = (longlong *)*plVar13;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((plVar13 == (longlong *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar3 = (int)plVar13[5];
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar13 + 2);
    iStack_128 = 0;
    uStack_124 = 1;
    local_110 = 0;
    iStack_114 = 0;
    if (iVar3 != 0) {
      pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar13[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar13[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar17 = pTVar1;
      }
      uVar11 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
      while (uVar11 == 0) {
        lVar14 = (longlong)iStack_128;
        local_110 = local_110 + 0x20;
        iStack_128 = iStack_128 + 1;
        iStack_114 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_128) goto LAB_141de98e0;
        uVar11 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar14 * 4 + 4);
      }
      uStack_124 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uStack_124 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_res10 = (int)lVar14;
      iStack_114 = local_110 + -1 + local_res10;
      if (iVar3 < iStack_114) {
        iStack_114 = iVar3;
      }
    }
LAB_141de98e0:
    uVar11 = *(uint *)(plVar13 + 5);
    uStack_10c = local_5c;
    uVar16 = uVar11 & 0xffffffe0;
    iStack_108 = (int)plVar13[1] - *(int *)((longlong)plVar13 + 0x34);
    uStack_118 = 0xffffffff;
    TStack_f8._padding_ = CONCAT44(uStack_124,iStack_128);
    TStack_f8.CurrentBitIndex = iStack_114;
    TStack_f8.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar11 >> 5;
    TStack_f8._28_4_ = local_5c;
    TStack_f8.BaseBitIndex = local_110;
    uStack_d8 = CONCAT44(uStack_104,iStack_108);
    local_130 = plVar13;
    local_120 = pTVar1;
    local_100 = plVar13;
    TStack_f8.Array = pTVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_02 = local_res18;
    uVar4 = *(uint *)(plVar13 + 5);
    if (uVar11 != uVar4) {
      pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar13[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar13[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar17 = pTVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) &
               *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
      while (uVar11 == 0) {
        lVar14 = (longlong)iVar15;
        uVar16 = uVar16 + 0x20;
        iVar15 = iVar15 + 1;
        uVar11 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_141de9a00;
        uVar11 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar14 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_res20 = (int)lVar14;
      uVar11 = local_res20 + -1 + uVar16;
      if ((int)uVar4 < (int)uVar11) {
        uVar11 = uVar4;
      }
    }
LAB_141de9a00:
    while( true ) {
      plVar8 = local_100;
      if ((int)local_100[1] - *(int *)((longlong)local_100 + 0x34) != (int)uStack_d8) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_f8.CurrentBitIndex == uVar11) && (TStack_f8.Array == pTVar1)) &&
         (plVar8 == plVar13)) break;
      lVar6 = *plVar8;
      lVar14 = lVar6 + (longlong)TStack_f8.CurrentBitIndex * 0x28;
      if ((*(longlong *)(lVar6 + 0x10 + (longlong)TStack_f8.CurrentBitIndex * 0x28) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      this_01 = *(FJsonValue **)(lVar14 + 0x10);
      local_158 = 0.0;
      cVar10 = (**(code **)(this_01->_padding_ + 0x50))(this_01,&local_158);
      if (cVar10 == '\0') {
        ::FString::FString(&local_d0,L"Number");
        FJsonValue::ErrorMessage(this_01,&local_d0);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
      }
      local_150.Value = (long64 *)(longlong)local_158;
      local_b8 = &local_150.Value;
      local_c0 = lVar14;
      TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,__int64_const_&>_>
                (this_02,&local_150,(bool *)&local_c0);
      TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  return;
}

// SerializeMapSafe @ 141de9c00

void __thiscall
FJsonSerializerReader::SerializeMapSafe
          (FJsonSerializerReader *this,TStringView<wchar_t> *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *this_01;
  longlong *plVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  TSharedPtr<FJsonValue,1> *pTVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  undefined1 local_res8 [8];
  int local_res10;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *local_res18;
  int local_res20;
  void *local_138;
  undefined8 local_130;
  undefined1 local_128 [16];
  TReferenceControllerBase<1> *local_118;
  longlong *local_110;
  int iStack_108;
  uint uStack_104;
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  undefined4 uStack_f8;
  int iStack_f4;
  int local_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  longlong local_b0;
  void **local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  wchar_t *local_78;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  local_res18 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)param_2;
  if (((this->JsonObject).Object == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_98.DataPtr = param_1->DataPtr;
  local_98.Size = param_1->Size;
  local_98._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             *)(this->JsonObject).Object;
  local_78 = local_98.DataPtr;
  uStack_70 = local_98._8_8_;
  uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,local_98.DataPtr);
  pTVar11 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>(this_00,uVar10,&local_98);
  if (((pTVar11 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar11->Object != (FJsonValue *)0x0)) &&
     (pTVar11->Object->Type == Object)) {
    if (((this->JsonObject).Object == (FJsonObject *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_88.DataPtr = param_1->DataPtr;
    local_88.Size = param_1->Size;
    local_88._12_4_ = *(undefined4 *)&param_1->field_0xc;
    FJsonObject::GetField
              ((this->JsonObject).Object,(TSharedPtr<FJsonValue,1> *)(local_128 + 8),&local_88,
               Object);
    if (((FString *)local_128._8_8_ == (FString *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    plVar12 = (longlong *)
              (**(code **)(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)local_128._8_8_)->
                          AllocatorInstance).Data)(local_128._8_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_118);
    pTVar5 = (TReferenceControllerBase<1> *)plVar12[1];
    plVar12 = (longlong *)*plVar12;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((plVar12 == (longlong *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar3 = (int)plVar12[5];
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar12 + 2);
    iStack_108 = 0;
    local_f0 = 0;
    uStack_104 = 1;
    iStack_f4 = 0;
    if (iVar3 != 0) {
      pTVar16 = (TBitArray<FDefaultBitArrayAllocator> *)plVar12[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar12[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar16 = pTVar1;
      }
      uVar10 = *(uint *)(pTVar16->AllocatorInstance).InlineData;
      while (uVar10 == 0) {
        lVar13 = (longlong)iStack_108;
        local_f0 = local_f0 + 0x20;
        iStack_108 = iStack_108 + 1;
        iStack_f4 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_108) goto LAB_141de9dfe;
        uVar10 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar13 * 4 + 4);
      }
      uStack_104 = -uVar10 & uVar10;
      uVar2 = (ulonglong)uStack_104 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res10 = (int)lVar13;
      iStack_f4 = local_f0 + -1 + local_res10;
      if (iVar3 < iStack_f4) {
        iStack_f4 = iVar3;
      }
    }
LAB_141de9dfe:
    uVar10 = *(uint *)(plVar12 + 5);
    uStack_ec = local_4c;
    uVar15 = uVar10 & 0xffffffe0;
    iStack_e8 = (int)plVar12[1] - *(int *)((longlong)plVar12 + 0x34);
    uStack_f8 = 0xffffffff;
    TStack_d8._padding_ = CONCAT44(uStack_104,iStack_108);
    TStack_d8.CurrentBitIndex = iStack_f4;
    TStack_d8.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar10 >> 5;
    TStack_d8._28_4_ = local_4c;
    TStack_d8.BaseBitIndex = local_f0;
    uStack_b8 = CONCAT44(uStack_e4,iStack_e8);
    local_110 = plVar12;
    local_100 = pTVar1;
    local_e0 = plVar12;
    TStack_d8.Array = pTVar1;
    if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this_01 = local_res18;
    uVar4 = *(uint *)(plVar12 + 5);
    if (uVar10 != uVar4) {
      pTVar16 = (TBitArray<FDefaultBitArrayAllocator> *)plVar12[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar12[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar16 = pTVar1;
      }
      uVar10 = -1 << ((byte)uVar10 & 0x1f) &
               *(uint *)((pTVar16->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
      while (uVar10 == 0) {
        lVar13 = (longlong)iVar14;
        uVar15 = uVar15 + 0x20;
        iVar14 = iVar14 + 1;
        uVar10 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_141de9f20;
        uVar10 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar13 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res20 = (int)lVar13;
      uVar10 = local_res20 + -1 + uVar15;
      if ((int)uVar4 < (int)uVar10) {
        uVar10 = uVar4;
      }
    }
LAB_141de9f20:
    while( true ) {
      plVar7 = local_e0;
      if ((int)local_e0[1] - *(int *)((longlong)local_e0 + 0x34) != (int)uStack_b8) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_d8.CurrentBitIndex == uVar10) && (TStack_d8.Array == pTVar1)) &&
         (plVar7 == plVar12)) break;
      lVar13 = *plVar7 + (longlong)TStack_d8.CurrentBitIndex * 0x28;
      local_138 = (void *)0x0;
      local_130 = 0;
      if ((*(longlong *)(lVar13 + 0x10) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      cVar9 = (**(code **)(**(longlong **)(lVar13 + 0x10) + 0x58))
                        (*(longlong **)(lVar13 + 0x10),&local_138);
      if (cVar9 != '\0') {
        local_a8 = &local_138;
        local_b0 = lVar13;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FString_&&>_>
                  (this_01,(TPairInitializer<FString_const_&,FString_&&> *)local_128,
                   (bool *)&local_b0);
      }
      if (local_138 != (void *)0x0) {
        FMemory::Free(local_138);
      }
      TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  return;
}

// SerializeSimpleMap @ 141dea070

void __thiscall
FJsonSerializerReader::SerializeSimpleMap
          (FJsonSerializerReader *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  code *pcVar5;
  FJsonObject *pFVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  void *local_c8;
  undefined8 local_c0;
  FJsonObject *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  FJsonObject *local_90;
  int iStack_88;
  uint uStack_84;
  undefined1 *local_80;
  undefined4 uStack_78;
  int iStack_74;
  int local_70;
  undefined4 uStack_6c;
  longlong local_60;
  void **local_58;
  undefined4 local_34;
  
  if (((this->JsonObject).Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_b8 = (this->JsonObject).Object;
  iVar2 = *(int *)&(local_b8->Values).field_0x28;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(local_b8->Values).field_0x10;
  iStack_88 = 0;
  uStack_84 = 1;
  local_70 = iStack_88;
  iStack_74 = 0;
  if (iVar2 != 0) {
    puVar11 = *(uint **)&(local_b8->Values).field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)TStack_b0.Array;
    }
    uVar3 = *puVar11;
    local_70 = 0;
    iStack_88 = 0;
    while (uVar3 == 0) {
      lVar10 = (longlong)iStack_88;
      local_70 = local_70 + 0x20;
      iStack_88 = iStack_88 + 1;
      iStack_74 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_88) goto LAB_141dea14d;
      uVar3 = puVar11[lVar10 + 1];
    }
    uStack_84 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_84 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_74 = local_70 + -1 + (int)lVar10;
    if (iVar2 < iStack_74) {
      iStack_74 = iVar2;
    }
  }
LAB_141dea14d:
  uStack_78 = 0xffffffff;
  uStack_6c = local_34;
  TStack_b0._padding_ = CONCAT44(uStack_84,iStack_88);
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  TStack_b0._28_4_ = local_34;
  TStack_b0.BaseBitIndex = local_70;
  local_90 = local_b8;
  local_80 = (undefined1 *)TStack_b0.Array;
  TStack_b0.CurrentBitIndex = iStack_74;
  if (iStack_74 < iVar2) {
    do {
      pFVar6 = local_b8;
      lVar9 = (longlong)TStack_b0.CurrentBitIndex;
      local_c8 = (void *)0x0;
      local_c0 = 0;
      lVar10 = *(longlong *)&local_b8->Values;
      if ((*(longlong *)(lVar10 + 0x10 + lVar9 * 0x28) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar4 = *(longlong **)(lVar10 + lVar9 * 0x28 + 0x10);
      cVar8 = (**(code **)(*plVar4 + 0x58))(plVar4,&local_c8);
      if (cVar8 != '\0') {
        local_60 = *(longlong *)&pFVar6->Values + (longlong)TStack_b0.CurrentBitIndex * 0x28;
        local_58 = &local_c8;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FString_&&>_>
                  ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    *)param_1,(TPairInitializer<FString_const_&,FString_&&> *)&stack0x00000018,
                   (bool *)&local_60);
      }
      if (local_c8 != (void *)0x0) {
        FMemory::Free(local_c8);
      }
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
    } while (TStack_b0.CurrentBitIndex < (TStack_b0.Array)->NumBits);
  }
  return;
}

// StartArray @ 141debe40

void __thiscall
FJsonSerializerReader::StartArray(FJsonSerializerReader *this,TStringView<wchar_t> *param_1)

{
  return;
}

// StartArray @ 141debe50

void __thiscall FJsonSerializerReader::StartArray(FJsonSerializerReader *this)

{
  return;
}

// StartObject @ 141debfd0

void __thiscall
FJsonSerializerReader::StartObject(FJsonSerializerReader *this,TStringView<wchar_t> *param_1)

{
  return;
}

// StartObject @ 141debfe0

void __thiscall FJsonSerializerReader::StartObject(FJsonSerializerReader *this)

{
  return;
}

// WriteIdentifierPrefix @ 141dfeb60

void __thiscall
FJsonSerializerReader::WriteIdentifierPrefix
          (FJsonSerializerReader *this,TStringView<wchar_t> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Serialization\\JsonSerializerReader.cpp"
                     ,0x141,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// WriteRawJSONValue @ 141e00ac0

void __thiscall
FJsonSerializerReader::WriteRawJSONValue(FJsonSerializerReader *this,TStringView<char8_t> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Serialization\\JsonSerializerReader.cpp"
                     ,0x14d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// WriteRawJSONValue @ 141e00b00

void __thiscall
FJsonSerializerReader::WriteRawJSONValue(FJsonSerializerReader *this,TStringView<wchar_t> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Serialization\\JsonSerializerReader.cpp"
                     ,0x147,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

