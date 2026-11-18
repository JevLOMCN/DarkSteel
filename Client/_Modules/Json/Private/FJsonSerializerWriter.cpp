// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 144

// ~FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> @ 141dc54c0

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
~FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this)

{
  this->_padding_ = (longlong)&___7__FJsonSerializerWriter__QU__TCondensedJsonPrintPolicy__Q____6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->JsonWriter).SharedReferenceCount.ReferenceController);
  return;
}

// ~FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> @ 141dc54e0

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
~FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this)

{
  this->_padding_ = (longlong)&___7__FJsonSerializerWriter__QU__TPrettyJsonPrintPolicy__Q____6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->JsonWriter).SharedReferenceCount.ReferenceController);
  return;
}

// ~FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> @ 141dc5500

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
~FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this)

{
  this->_padding_ = (longlong)&___7__FJsonSerializerWriter__WU__TCondensedJsonPrintPolicy__W____6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->JsonWriter).SharedReferenceCount.ReferenceController);
  return;
}

// ~FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> @ 141dc5520

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
~FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this)

{
  this->_padding_ = (longlong)&___7__FJsonSerializerWriter__WU__TPrettyJsonPrintPolicy__W____6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->JsonWriter).SharedReferenceCount.ReferenceController);
  return;
}

// EndArray @ 141dd3d70

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::EndArray
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this)

{
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteArrayEnd((this->JsonWriter).Object)
  ;
  return;
}

// EndArray @ 141dd3d80

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::EndArray
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this)

{
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteArrayEnd((this->JsonWriter).Object);
  return;
}

// EndArray @ 141dd3d90

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::EndArray
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this)

{
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayEnd((this->JsonWriter).Object)
  ;
  return;
}

// EndArray @ 141dd3da0

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::EndArray
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this)

{
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayEnd((this->JsonWriter).Object);
  return;
}

// EndObject @ 141dd3f00

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::EndObject
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this)

{
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteObjectEnd
            ((this->JsonWriter).Object);
  return;
}

// EndObject @ 141dd3f10

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::EndObject
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this)

{
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteObjectEnd((this->JsonWriter).Object);
  return;
}

// EndObject @ 141dd3f20

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::EndObject
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this)

{
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
            ((this->JsonWriter).Object);
  return;
}

// EndObject @ 141dd3f30

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::EndObject
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this)

{
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd((this->JsonWriter).Object);
  return;
}

// GetObject @ 141dd6990

TSharedPtr<FJsonObject,1> * __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::GetObject
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TSharedPtr<FJsonObject,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FJsonObject *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetObject @ 141dd69b0

TSharedPtr<FJsonObject,1> * __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::GetObject
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TSharedPtr<FJsonObject,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FJsonObject *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetObject @ 141dd69d0

TSharedPtr<FJsonObject,1> * __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::GetObject
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TSharedPtr<FJsonObject,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FJsonObject *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetObject @ 141dd69f0

TSharedPtr<FJsonObject,1> * __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::GetObject
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TSharedPtr<FJsonObject,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FJsonObject *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// IsLoading @ 141dd8180

bool __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::IsLoading
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this)

{
  return false;
}

// IsLoading @ 141dd8190

bool __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::IsLoading
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this)

{
  return false;
}

// IsLoading @ 141dd81a0

bool __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::IsLoading
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this)

{
  return false;
}

// IsLoading @ 141dd81b0

bool __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::IsLoading
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this)

{
  return false;
}

// IsSaving @ 141dd81f0

bool __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::IsSaving
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this)

{
  return true;
}

// IsSaving @ 141dd8200

bool __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::IsSaving
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this)

{
  return true;
}

// IsSaving @ 141dd8210

bool __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::IsSaving
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this)

{
  return true;
}

// IsSaving @ 141dd8220

bool __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::IsSaving
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this)

{
  return true;
}

// Serialize @ 141ddeff0

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,int *param_2)

{
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1,param_2);
  return;
}

// Serialize @ 141ddf010

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  EJsonToken EVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  this_00 = (this->JsonWriter).Object;
  uVar1 = *param_2;
  iVar2 = (this_00->Stack).ArrayNum;
  uVar7 = iVar2 - 1;
  uVar5 = 0;
  if ((int)uVar7 < iVar2) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)((this_00->Stack).AllocatorInstance.Data +
              (longlong)(this_00->Stack).ArrayNum * 4 + -4) != 6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EVar6 = this_00->PreviousTokenWritten;
  if ((EVar6 != CurlyOpen) && ((Identifier < EVar6 || ((0x1013U >> (EVar6 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,1);
    this_00->PreviousTokenWritten = Comma;
  }
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->Size;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(this_00->_padding_ + 0x28))(this_00,&local_18);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res10,1);
  this_00->PreviousTokenWritten = Identifier;
  EVar6 = TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteValueOnly
                    (this_00,(ulonglong)uVar1);
  this_00->PreviousTokenWritten = EVar6;
  return;
}

// Serialize @ 141ddf150

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,float *param_2)

{
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
  WriteValue<float_&,TStringView<wchar_t>_&>((this->JsonWriter).Object,param_1,param_2);
  return;
}

// Serialize @ 141ddf170

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,double *param_2)

{
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
  WriteValue<double_&,TStringView<wchar_t>_&>((this->JsonWriter).Object,param_1,param_2);
  return;
}

// Serialize @ 141ddf190

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,FDateTime *param_2)

{
  int iVar1;
  EJsonToken EVar2;
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FString *pFVar8;
  uint uVar9;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  FString local_28;
  
  if (0 < param_2->Ticks) {
    pTVar3 = (this->JsonWriter).Object;
    pFVar8 = FDateTime::ToIso8601(param_2,&local_28);
    iVar1 = (pTVar3->Stack).ArrayNum;
    uVar9 = iVar1 - 1;
    uVar7 = 0;
    if ((int)uVar9 < iVar1) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (*(int *)((pTVar3->Stack).AllocatorInstance.Data +
                (longlong)(pTVar3->Stack).ArrayNum * 4 + -4) != 6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack.Top() == EJson::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x110,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    EVar2 = pTVar3->PreviousTokenWritten;
    if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
      local_res18[0] = 0x2c;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res18,1);
      pTVar3->PreviousTokenWritten = Comma;
    }
    local_48 = *(undefined4 *)&param_1->DataPtr;
    uStack_44 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_40 = param_1->Size;
    uStack_3c = *(undefined4 *)&param_1->field_0xc;
    (**(code **)(pTVar3->_padding_ + 0x28))(pTVar3,&local_48);
    local_res20[0] = 0x3a;
    (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res20,1);
    pTVar3->PreviousTokenWritten = Identifier;
    pFVar4 = (pFVar8->Data).AllocatorInstance.Data;
    iVar1 = (pFVar8->Data).ArrayNum;
    iStack_30 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_30 = 0;
    }
    local_58 = SUB84(pFVar4,0);
    uStack_54 = (undefined4)((ulonglong)pFVar4 >> 0x20);
    local_38 = local_58;
    uStack_34 = uStack_54;
    (**(code **)(pTVar3->_padding_ + 0x28))(pTVar3,&local_38);
    pTVar3->PreviousTokenWritten = String;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Serialize @ 141ddf340

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  <lambda_1> local_18;
  
  local_18.__this = this;
  local_18.Name = param_1;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>,0,1,2,0,TVariant<bool,class_TVariant<int,unsigned_int,__int64,float,double>,class_FString>&___ptr64>(unsigned___int64,`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)'
    ::__l2::Invokers[param_2->TypeIndex])(&local_18,param_2);
  return;
}

// Serialize @ 141ddf380

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,FString *param_2)

{
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
  WriteValue<FString_&,TStringView<wchar_t>_&>((this->JsonWriter).Object,param_1,param_2);
  return;
}

// Serialize @ 141ddf3a0

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,FText *param_2)

{
  int iVar1;
  EJsonToken EVar2;
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FString *pFVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  
  pTVar3 = (this->JsonWriter).Object;
  pFVar8 = FText::ToString(param_2);
  iVar1 = (pTVar3->Stack).ArrayNum;
  uVar9 = iVar1 - 1;
  uVar7 = 0;
  if ((int)uVar9 < iVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*(int *)((pTVar3->Stack).AllocatorInstance.Data + (longlong)(pTVar3->Stack).ArrayNum * 4 + -4)
      != 6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  EVar2 = pTVar3->PreviousTokenWritten;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res8,1);
    pTVar3->PreviousTokenWritten = Comma;
  }
  local_38 = *(undefined4 *)&param_1->DataPtr;
  uStack_34 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_30 = param_1->Size;
  uStack_2c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(pTVar3->_padding_ + 0x28))(pTVar3,&local_38);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res10,1);
  pTVar3->PreviousTokenWritten = Identifier;
  pFVar4 = (pFVar8->Data).AllocatorInstance.Data;
  iVar1 = (pFVar8->Data).ArrayNum;
  iStack_20 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_20 = 0;
  }
  local_48 = SUB84(pFVar4,0);
  uStack_44 = (undefined4)((ulonglong)pFVar4 >> 0x20);
  local_28 = local_48;
  uStack_24 = uStack_44;
  (**(code **)(pTVar3->_padding_ + 0x28))(pTVar3,&local_28);
  pTVar3->PreviousTokenWritten = String;
  return;
}

// Serialize @ 141ddf520

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,FUtf8String *param_2)

{
  int iVar1;
  EJsonToken EVar2;
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  
  pTVar3 = (this->JsonWriter).Object;
  iVar1 = (pTVar3->Stack).ArrayNum;
  uVar8 = iVar1 - 1;
  uVar7 = 0;
  if ((int)uVar8 < iVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*(int *)((pTVar3->Stack).AllocatorInstance.Data + (longlong)(pTVar3->Stack).ArrayNum * 4 + -4)
      != 6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  EVar2 = pTVar3->PreviousTokenWritten;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res8,1);
    pTVar3->PreviousTokenWritten = Comma;
  }
  local_38 = *(undefined4 *)&param_1->DataPtr;
  uStack_34 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_30 = param_1->Size;
  uStack_2c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(pTVar3->_padding_ + 0x28))(pTVar3,&local_38);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res10,1);
  pTVar3->PreviousTokenWritten = Identifier;
  pFVar4 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_20 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_20 = 0;
  }
  local_48 = SUB84(pFVar4,0);
  uStack_44 = (undefined4)((ulonglong)pFVar4 >> 0x20);
  local_28 = local_48;
  uStack_24 = uStack_44;
  (**(code **)(pTVar3->_padding_ + 0x18))(pTVar3,&local_28);
  pTVar3->PreviousTokenWritten = String;
  return;
}

// Serialize @ 141ddf690

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,long64 *param_2)

{
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
  WriteValue<__int64_&,TStringView<wchar_t>_&>((this->JsonWriter).Object,param_1,param_2);
  return;
}

// Serialize @ 141ddf6b0

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,bool *param_2)

{
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
  WriteValue<bool_&,TStringView<wchar_t>_&>((this->JsonWriter).Object,param_1,param_2);
  return;
}

// Serialize @ 141ddf6d0

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,int *param_2)

{
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1,param_2);
  return;
}

// Serialize @ 141ddf6f0

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  EJsonToken EVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  TStringView<wchar_t> local_18;
  
  this_00 = (this->JsonWriter).Object;
  uVar1 = *param_2;
  iVar2 = (this_00->Stack).ArrayNum;
  uVar7 = iVar2 - 1;
  uVar5 = 0;
  if ((int)uVar7 < iVar2) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)((this_00->Stack).AllocatorInstance.Data +
              (longlong)(this_00->Stack).ArrayNum * 4 + -4) != 6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteIdentifier<wchar_t>(this_00,&local_18)
  ;
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,1);
  EVar6 = TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValueOnly
                    (this_00,(ulonglong)uVar1);
  this_00->PreviousTokenWritten = EVar6;
  return;
}

// Serialize @ 141ddf7f0

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,float *param_2)

{
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<float_&,TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1,param_2);
  return;
}

// Serialize @ 141ddf810

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,double *param_2)

{
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<double_&,TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1,param_2);
  return;
}

// Serialize @ 141ddf830

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,FDateTime *param_2)

{
  int iVar1;
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  uint uVar7;
  undefined1 local_res18 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  TStringView<wchar_t> local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  FString local_18;
  
  if (0 < param_2->Ticks) {
    this_00 = (this->JsonWriter).Object;
    pFVar6 = FDateTime::ToIso8601(param_2,&local_18);
    iVar1 = (this_00->Stack).ArrayNum;
    uVar7 = iVar1 - 1;
    uVar5 = 0;
    if ((int)uVar7 < iVar1) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)((this_00->Stack).AllocatorInstance.Data +
                (longlong)(this_00->Stack).ArrayNum * 4 + -4) != 6) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack.Top() == EJson::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x110,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_38.DataPtr = param_1->DataPtr;
    local_38.Size = param_1->Size;
    local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteIdentifier<wchar_t>
              (this_00,&local_38);
    local_res18[0] = 0x20;
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res18,1);
    pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
    iVar1 = (pFVar6->Data).ArrayNum;
    iStack_20 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_20 = 0;
    }
    local_48 = SUB84(pFVar2,0);
    uStack_44 = (undefined4)((ulonglong)pFVar2 >> 0x20);
    local_28 = local_48;
    uStack_24 = uStack_44;
    (**(code **)(this_00->_padding_ + 0x28))(this_00,&local_28);
    this_00->PreviousTokenWritten = String;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Serialize @ 141ddf990

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  <lambda_1> local_18;
  
  local_18.__this = this;
  local_18.Name = param_1;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>,0,1,2,0,TVariant<bool,class_TVariant<int,unsigned_int,__int64,float,double>,class_FString>&___ptr64>(unsigned___int64,`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)'
    ::__l2::Invokers[param_2->TypeIndex])(&local_18,param_2);
  return;
}

// Serialize @ 141ddf9d0

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,FString *param_2)

{
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
  WriteValue<FString_&,TStringView<wchar_t>_&>((this->JsonWriter).Object,param_1,param_2);
  return;
}

// Serialize @ 141ddf9f0

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,FText *param_2)

{
  int iVar1;
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  TStringView<wchar_t> local_28;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  
  this_00 = (this->JsonWriter).Object;
  pFVar6 = FText::ToString(param_2);
  iVar1 = (this_00->Stack).ArrayNum;
  uVar7 = iVar1 - 1;
  uVar5 = 0;
  if ((int)uVar7 < iVar1) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)((this_00->Stack).AllocatorInstance.Data +
              (longlong)(this_00->Stack).ArrayNum * 4 + -4) != 6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteIdentifier<wchar_t>(this_00,&local_28)
  ;
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,1);
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  iVar1 = (pFVar6->Data).ArrayNum;
  iStack_10 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_10 = 0;
  }
  local_38 = SUB84(pFVar2,0);
  uStack_34 = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_18 = local_38;
  uStack_14 = uStack_34;
  (**(code **)(this_00->_padding_ + 0x28))(this_00,&local_18);
  this_00->PreviousTokenWritten = String;
  return;
}

// Serialize @ 141ddfb30

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,FUtf8String *param_2)

{
  int iVar1;
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  TStringView<wchar_t> local_28;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  
  this_00 = (this->JsonWriter).Object;
  iVar1 = (this_00->Stack).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar5 = 0;
  if ((int)uVar6 < iVar1) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)((this_00->Stack).AllocatorInstance.Data +
              (longlong)(this_00->Stack).ArrayNum * 4 + -4) != 6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteIdentifier<wchar_t>(this_00,&local_28)
  ;
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,1);
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_10 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_10 = 0;
  }
  local_38 = SUB84(pFVar2,0);
  uStack_34 = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_18 = local_38;
  uStack_14 = uStack_34;
  (**(code **)(this_00->_padding_ + 0x18))(this_00,&local_18);
  this_00->PreviousTokenWritten = String;
  return;
}

// Serialize @ 141ddfc60

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,long64 *param_2)

{
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
  WriteValue<__int64_&,TStringView<wchar_t>_&>((this->JsonWriter).Object,param_1,param_2);
  return;
}

// Serialize @ 141ddfc80

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,bool *param_2)

{
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<bool_&,TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1,param_2);
  return;
}

// Serialize @ 141ddfca0

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,int *param_2)

{
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1,param_2);
  return;
}

// Serialize @ 141ddfcc0

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  EJsonToken EVar6;
  uint uVar7;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  this_00 = (this->JsonWriter).Object;
  uVar1 = *param_2;
  iVar2 = (this_00->Stack).ArrayNum;
  uVar7 = iVar2 - 1;
  uVar5 = 0;
  if ((int)uVar7 < iVar2) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)((this_00->Stack).AllocatorInstance.Data +
              (longlong)(this_00->Stack).ArrayNum * 4 + -4) != 6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EVar6 = this_00->PreviousTokenWritten;
  if ((EVar6 != CurlyOpen) && ((Identifier < EVar6 || ((0x1013U >> (EVar6 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,2);
    this_00->PreviousTokenWritten = Comma;
  }
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->Size;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(this_00->_padding_ + 0x28))(this_00,&local_18);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res10,2);
  this_00->PreviousTokenWritten = Identifier;
  EVar6 = TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                    (this_00,(ulonglong)uVar1);
  this_00->PreviousTokenWritten = EVar6;
  return;
}

// Serialize @ 141ddfe00

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,float *param_2)

{
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
  WriteValue<float_&,TStringView<wchar_t>_&>((this->JsonWriter).Object,param_1,param_2);
  return;
}

// Serialize @ 141ddfe20

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,double *param_2)

{
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
  WriteValue<double_&,TStringView<wchar_t>_&>((this->JsonWriter).Object,param_1,param_2);
  return;
}

// Serialize @ 141ddfe40

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,FDateTime *param_2)

{
  int iVar1;
  EJsonToken EVar2;
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FString *pFVar8;
  uint uVar9;
  undefined2 local_res18 [4];
  undefined2 local_res20 [4];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  FString local_28;
  
  if (0 < param_2->Ticks) {
    pTVar3 = (this->JsonWriter).Object;
    pFVar8 = FDateTime::ToIso8601(param_2,&local_28);
    iVar1 = (pTVar3->Stack).ArrayNum;
    uVar9 = iVar1 - 1;
    uVar7 = 0;
    if ((int)uVar9 < iVar1) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (*(int *)((pTVar3->Stack).AllocatorInstance.Data +
                (longlong)(pTVar3->Stack).ArrayNum * 4 + -4) != 6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack.Top() == EJson::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x110,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    EVar2 = pTVar3->PreviousTokenWritten;
    if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
      local_res18[0] = 0x2c;
      (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res18,2);
      pTVar3->PreviousTokenWritten = Comma;
    }
    local_48 = *(undefined4 *)&param_1->DataPtr;
    uStack_44 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_40 = param_1->Size;
    uStack_3c = *(undefined4 *)&param_1->field_0xc;
    (**(code **)(pTVar3->_padding_ + 0x28))(pTVar3,&local_48);
    local_res20[0] = 0x3a;
    (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res20,2);
    pTVar3->PreviousTokenWritten = Identifier;
    pFVar4 = (pFVar8->Data).AllocatorInstance.Data;
    iVar1 = (pFVar8->Data).ArrayNum;
    iStack_30 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_30 = 0;
    }
    local_58 = SUB84(pFVar4,0);
    uStack_54 = (undefined4)((ulonglong)pFVar4 >> 0x20);
    local_38 = local_58;
    uStack_34 = uStack_54;
    (**(code **)(pTVar3->_padding_ + 0x28))(pTVar3,&local_38);
    pTVar3->PreviousTokenWritten = String;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Serialize @ 141ddfff0

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  <lambda_1> local_18;
  
  local_18.__this = this;
  local_18.Name = param_1;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>,0,1,2,0,TVariant<bool,class_TVariant<int,unsigned_int,__int64,float,double>,class_FString>&___ptr64>(unsigned___int64,`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)'
    ::__l2::Invokers[param_2->TypeIndex])(&local_18,param_2);
  return;
}

// Serialize @ 141de0030

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,FString *param_2)

{
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
  WriteValue<FString_&,TStringView<wchar_t>_&>((this->JsonWriter).Object,param_1,param_2);
  return;
}

// Serialize @ 141de0050

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,FText *param_2)

{
  int iVar1;
  EJsonToken EVar2;
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FString *pFVar8;
  uint uVar9;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  
  pTVar3 = (this->JsonWriter).Object;
  pFVar8 = FText::ToString(param_2);
  iVar1 = (pTVar3->Stack).ArrayNum;
  uVar9 = iVar1 - 1;
  uVar7 = 0;
  if ((int)uVar9 < iVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*(int *)((pTVar3->Stack).AllocatorInstance.Data + (longlong)(pTVar3->Stack).ArrayNum * 4 + -4)
      != 6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  EVar2 = pTVar3->PreviousTokenWritten;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res8,2);
    pTVar3->PreviousTokenWritten = Comma;
  }
  local_38 = *(undefined4 *)&param_1->DataPtr;
  uStack_34 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_30 = param_1->Size;
  uStack_2c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(pTVar3->_padding_ + 0x28))(pTVar3,&local_38);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res10,2);
  pTVar3->PreviousTokenWritten = Identifier;
  pFVar4 = (pFVar8->Data).AllocatorInstance.Data;
  iVar1 = (pFVar8->Data).ArrayNum;
  iStack_20 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_20 = 0;
  }
  local_48 = SUB84(pFVar4,0);
  uStack_44 = (undefined4)((ulonglong)pFVar4 >> 0x20);
  local_28 = local_48;
  uStack_24 = uStack_44;
  (**(code **)(pTVar3->_padding_ + 0x28))(pTVar3,&local_28);
  pTVar3->PreviousTokenWritten = String;
  return;
}

// Serialize @ 141de01d0

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,FUtf8String *param_2)

{
  int iVar1;
  EJsonToken EVar2;
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  
  pTVar3 = (this->JsonWriter).Object;
  iVar1 = (pTVar3->Stack).ArrayNum;
  uVar8 = iVar1 - 1;
  uVar7 = 0;
  if ((int)uVar8 < iVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*(int *)((pTVar3->Stack).AllocatorInstance.Data + (longlong)(pTVar3->Stack).ArrayNum * 4 + -4)
      != 6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  EVar2 = pTVar3->PreviousTokenWritten;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res8,2);
    pTVar3->PreviousTokenWritten = Comma;
  }
  local_38 = *(undefined4 *)&param_1->DataPtr;
  uStack_34 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_30 = param_1->Size;
  uStack_2c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(pTVar3->_padding_ + 0x28))(pTVar3,&local_38);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res10,2);
  pTVar3->PreviousTokenWritten = Identifier;
  pFVar4 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_20 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_20 = 0;
  }
  local_48 = SUB84(pFVar4,0);
  uStack_44 = (undefined4)((ulonglong)pFVar4 >> 0x20);
  local_28 = local_48;
  uStack_24 = uStack_44;
  (**(code **)(pTVar3->_padding_ + 0x18))(pTVar3,&local_28);
  pTVar3->PreviousTokenWritten = String;
  return;
}

// Serialize @ 141de0350

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,long64 *param_2)

{
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
  WriteValue<__int64_&,TStringView<wchar_t>_&>((this->JsonWriter).Object,param_1,param_2);
  return;
}

// Serialize @ 141de0370

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,bool *param_2)

{
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
  WriteValue<bool_&,TStringView<wchar_t>_&>((this->JsonWriter).Object,param_1,param_2);
  return;
}

// Serialize @ 141de0390

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,int *param_2)

{
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1,param_2);
  return;
}

// Serialize @ 141de03b0

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  EJsonToken EVar6;
  uint uVar7;
  undefined2 local_res8 [4];
  TStringView<wchar_t> local_18;
  
  this_00 = (this->JsonWriter).Object;
  uVar1 = *param_2;
  iVar2 = (this_00->Stack).ArrayNum;
  uVar7 = iVar2 - 1;
  uVar5 = 0;
  if ((int)uVar7 < iVar2) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)((this_00->Stack).AllocatorInstance.Data +
              (longlong)(this_00->Stack).ArrayNum * 4 + -4) != 6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>(this_00,&local_18)
  ;
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,2);
  EVar6 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                    (this_00,(ulonglong)uVar1);
  this_00->PreviousTokenWritten = EVar6;
  return;
}

// Serialize @ 141de04b0

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,float *param_2)

{
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<float_&,TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1,param_2);
  return;
}

// Serialize @ 141de04d0

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,double *param_2)

{
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<double_&,TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1,param_2);
  return;
}

// Serialize @ 141de04f0

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,FDateTime *param_2)

{
  int iVar1;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  uint uVar7;
  undefined2 local_res18 [4];
  undefined4 local_48;
  undefined4 uStack_44;
  TStringView<wchar_t> local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  FString local_18;
  
  if (0 < param_2->Ticks) {
    this_00 = (this->JsonWriter).Object;
    pFVar6 = FDateTime::ToIso8601(param_2,&local_18);
    iVar1 = (this_00->Stack).ArrayNum;
    uVar7 = iVar1 - 1;
    uVar5 = 0;
    if ((int)uVar7 < iVar1) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)((this_00->Stack).AllocatorInstance.Data +
                (longlong)(this_00->Stack).ArrayNum * 4 + -4) != 6) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack.Top() == EJson::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x110,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_38.DataPtr = param_1->DataPtr;
    local_38.Size = param_1->Size;
    local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>
              (this_00,&local_38);
    local_res18[0] = 0x20;
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res18,2);
    pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
    iVar1 = (pFVar6->Data).ArrayNum;
    iStack_20 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_20 = 0;
    }
    local_48 = SUB84(pFVar2,0);
    uStack_44 = (undefined4)((ulonglong)pFVar2 >> 0x20);
    local_28 = local_48;
    uStack_24 = uStack_44;
    (**(code **)(this_00->_padding_ + 0x28))(this_00,&local_28);
    this_00->PreviousTokenWritten = String;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Serialize @ 141de0650

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  <lambda_1> local_18;
  
  local_18.__this = this;
  local_18.Name = param_1;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>,0,1,2,0,TVariant<bool,class_TVariant<int,unsigned_int,__int64,float,double>,class_FString>&___ptr64>(unsigned___int64,`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)'
    ::__l2::Invokers[param_2->TypeIndex])(&local_18,param_2);
  return;
}

// Serialize @ 141de0690

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,FString *param_2)

{
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
  WriteValue<FString_&,TStringView<wchar_t>_&>((this->JsonWriter).Object,param_1,param_2);
  return;
}

// Serialize @ 141de06b0

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,FText *param_2)

{
  int iVar1;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  uint uVar7;
  undefined2 local_res8 [4];
  undefined4 local_38;
  undefined4 uStack_34;
  TStringView<wchar_t> local_28;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  
  this_00 = (this->JsonWriter).Object;
  pFVar6 = FText::ToString(param_2);
  iVar1 = (this_00->Stack).ArrayNum;
  uVar7 = iVar1 - 1;
  uVar5 = 0;
  if ((int)uVar7 < iVar1) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)((this_00->Stack).AllocatorInstance.Data +
              (longlong)(this_00->Stack).ArrayNum * 4 + -4) != 6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>(this_00,&local_28)
  ;
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,2);
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  iVar1 = (pFVar6->Data).ArrayNum;
  iStack_10 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_10 = 0;
  }
  local_38 = SUB84(pFVar2,0);
  uStack_34 = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_18 = local_38;
  uStack_14 = uStack_34;
  (**(code **)(this_00->_padding_ + 0x28))(this_00,&local_18);
  this_00->PreviousTokenWritten = String;
  return;
}

// Serialize @ 141de07f0

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,FUtf8String *param_2)

{
  int iVar1;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined2 local_res8 [4];
  undefined4 local_38;
  undefined4 uStack_34;
  TStringView<wchar_t> local_28;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  
  this_00 = (this->JsonWriter).Object;
  iVar1 = (this_00->Stack).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar5 = 0;
  if ((int)uVar6 < iVar1) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)((this_00->Stack).AllocatorInstance.Data +
              (longlong)(this_00->Stack).ArrayNum * 4 + -4) != 6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>(this_00,&local_28)
  ;
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,2);
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_10 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_10 = 0;
  }
  local_38 = SUB84(pFVar2,0);
  uStack_34 = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_18 = local_38;
  uStack_14 = uStack_34;
  (**(code **)(this_00->_padding_ + 0x18))(this_00,&local_18);
  this_00->PreviousTokenWritten = String;
  return;
}

// Serialize @ 141de0920

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,long64 *param_2)

{
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
  WriteValue<__int64_&,TStringView<wchar_t>_&>((this->JsonWriter).Object,param_1,param_2);
  return;
}

// Serialize @ 141de0940

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,bool *param_2)

{
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<bool_&,TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1,param_2);
  return;
}

// SerializeArray @ 141de25c0

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeArray
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  EJsonToken EVar1;
  int iVar2;
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this_00;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteArrayStart
            ((this->JsonWriter).Object);
  for (iVar6 = 0; (-1 < iVar6 && (iVar6 < param_1->ArrayNum)); iVar6 = iVar6 + 1) {
    this_00 = (this->JsonWriter).Object;
    if (iVar6 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar7 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    bVar5 = TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::CanWriteValueWithoutIdentifier
                      (this_00);
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0xde,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    EVar1 = this_00->PreviousTokenWritten;
    if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
      local_res8[0] = 0x2c;
      (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,1);
      this_00->PreviousTokenWritten = Comma;
    }
    uVar3 = *(undefined8 *)pFVar7;
    iVar2 = *(int *)(pFVar7 + 8);
    iStack_30 = iVar2 + -1;
    if (iVar2 == 0) {
      iStack_30 = 0;
    }
    local_48 = (undefined4)uVar3;
    uStack_44 = (undefined4)((ulonglong)uVar3 >> 0x20);
    local_38 = local_48;
    uStack_34 = uStack_44;
    (**(code **)(this_00->_padding_ + 0x28))(this_00,&local_38);
    this_00->PreviousTokenWritten = String;
  }
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteArrayEnd((this->JsonWriter).Object)
  ;
  return;
}

// SerializeArray @ 141de2750

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeArray
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this_00;
  code *pcVar3;
  bool bVar4;
  EJsonToken EVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteArrayStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  pFVar6 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    this_00 = (this->JsonWriter).Object;
    if (pFVar6 == pFVar1) break;
    bVar4 = TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::CanWriteValueWithoutIdentifier
                      (this_00);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0xde,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    EVar5 = this_00->PreviousTokenWritten;
    if ((EVar5 != CurlyOpen) && ((Identifier < EVar5 || ((0x1013U >> (EVar5 & 0x1f) & 1) == 0)))) {
      local_res10[0] = 0x2c;
      (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res10,1);
      this_00->PreviousTokenWritten = Comma;
    }
    EVar5 = TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteValueOnly
                      (this_00,(longlong)*(int *)pFVar6);
    this_00->PreviousTokenWritten = EVar5;
    pFVar6 = pFVar6 + 4;
  }
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteArrayEnd(this_00);
  return;
}

// SerializeArray @ 141de2850

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeArray
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  EJsonToken EVar3;
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this_00;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteArrayStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  pFVar6 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    this_00 = (this->JsonWriter).Object;
    if (pFVar6 == pFVar1) break;
    bVar5 = TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::CanWriteValueWithoutIdentifier
                      (this_00);
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0xde,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    EVar3 = this_00->PreviousTokenWritten;
    if ((EVar3 != CurlyOpen) && ((Identifier < EVar3 || ((0x1013U >> (EVar3 & 0x1f) & 1) == 0)))) {
      local_res10[0] = 0x2c;
      (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res10,1);
      this_00->PreviousTokenWritten = Comma;
    }
    TJsonPrintPolicy<char8_t>::WriteFloat(this_00->Stream,*(float *)pFVar6);
    pFVar6 = pFVar6 + 4;
    this_00->PreviousTokenWritten = Number;
  }
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteArrayEnd(this_00);
  return;
}

// SerializeArray @ 141de2950

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeArray
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  EJsonToken EVar2;
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this_00;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteArrayStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar1 = param_2->ArrayNum;
  pFVar6 = (param_2->AllocatorInstance).Data;
  pFVar5 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    this_00 = (this->JsonWriter).Object;
    if (pFVar6 == pFVar5) break;
    bVar4 = TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::CanWriteValueWithoutIdentifier
                      (this_00);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0xde,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    EVar2 = this_00->PreviousTokenWritten;
    if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
      local_res10[0] = 0x2c;
      (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res10,1);
      this_00->PreviousTokenWritten = Comma;
    }
    iStack_40 = *(int *)(pFVar6 + 8) + -1;
    if (*(int *)(pFVar6 + 8) == 0) {
      iStack_40 = 0;
    }
    local_58 = (undefined4)*(undefined8 *)pFVar6;
    uStack_54 = (undefined4)((ulonglong)*(undefined8 *)pFVar6 >> 0x20);
    local_48 = local_58;
    uStack_44 = uStack_54;
    (**(code **)(this_00->_padding_ + 0x28))(this_00,&local_48);
    pFVar6 = pFVar6 + 0x10;
    this_00->PreviousTokenWritten = String;
  }
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteArrayEnd(this_00);
  return;
}

// SerializeArray @ 141de2a90

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeArray
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  EJsonToken EVar1;
  int iVar2;
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this_00;
  FArchive *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  TStringView<wchar_t> local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteArrayStart((this->JsonWriter).Object);
  iVar8 = 0;
  while( true ) {
    if ((iVar8 < 0) || (param_1->ArrayNum <= iVar8)) {
      TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteArrayEnd
                ((this->JsonWriter).Object);
      return;
    }
    this_00 = (this->JsonWriter).Object;
    if ((iVar8 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    pFVar9 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    bVar6 = TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::CanWriteValueWithoutIdentifier
                      (this_00);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteValueWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0xde,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EVar1 = this_00->PreviousTokenWritten;
    if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
      local_res8[0] = 0x2c;
      (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,1);
      this_00->PreviousTokenWritten = Comma;
    }
    local_58._12_4_ = uStack_6c;
    local_58.Size = 2;
    local_58.DataPtr = L"\r\n";
    TJsonPrintPolicy<char8_t>::WriteString(this_00->Stream,&local_58);
    pFVar3 = this_00->Stream;
    if (0 < this_00->IndentLevel) {
      uVar7 = (ulonglong)(uint)this_00->IndentLevel;
      do {
        local_res10[0] = 9;
        (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res10,1);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    uVar4 = *(undefined8 *)pFVar9;
    iVar2 = *(int *)(pFVar9 + 8);
    iStack_40 = iVar2 + -1;
    if (iVar2 == 0) {
      iStack_40 = 0;
    }
    local_68 = (undefined4)uVar4;
    uStack_64 = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_48 = local_68;
    uStack_44 = uStack_64;
    (**(code **)(this_00->_padding_ + 0x28))(this_00,&local_48);
    iVar8 = iVar8 + 1;
    this_00->PreviousTokenWritten = String;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// SerializeArray @ 141de2c70

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeArray
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this_00;
  FArchive *pFVar3;
  code *pcVar4;
  bool bVar5;
  EJsonToken EVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteArrayStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  pFVar8 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    this_00 = (this->JsonWriter).Object;
    if (pFVar8 == pFVar1) break;
    bVar5 = TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::CanWriteValueWithoutIdentifier
                      (this_00);
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteValueWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0xde,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EVar6 = this_00->PreviousTokenWritten;
    if ((EVar6 != CurlyOpen) && ((Identifier < EVar6 || ((0x1013U >> (EVar6 & 0x1f) & 1) == 0)))) {
      local_res10[0] = 0x2c;
      (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res10,1);
      this_00->PreviousTokenWritten = Comma;
    }
    local_48._12_4_ = uStack_4c;
    local_48.Size = 2;
    local_48.DataPtr = L"\r\n";
    TJsonPrintPolicy<char8_t>::WriteString(this_00->Stream,&local_48);
    pFVar3 = this_00->Stream;
    if (0 < this_00->IndentLevel) {
      uVar7 = (ulonglong)(uint)this_00->IndentLevel;
      do {
        local_res18[0] = 9;
        (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res18,1);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    EVar6 = TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValueOnly
                      (this_00,(longlong)*(int *)pFVar8);
    this_00->PreviousTokenWritten = EVar6;
    pFVar8 = pFVar8 + 4;
  }
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteArrayEnd(this_00);
  return;
}

// SerializeArray @ 141de2de0

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeArray
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  EJsonToken EVar3;
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this_00;
  FArchive *pFVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteArrayStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  pFVar8 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    this_00 = (this->JsonWriter).Object;
    if (pFVar8 == pFVar1) break;
    bVar6 = TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::CanWriteValueWithoutIdentifier
                      (this_00);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteValueWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0xde,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EVar3 = this_00->PreviousTokenWritten;
    if ((EVar3 != CurlyOpen) && ((Identifier < EVar3 || ((0x1013U >> (EVar3 & 0x1f) & 1) == 0)))) {
      local_res10[0] = 0x2c;
      (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res10,1);
      this_00->PreviousTokenWritten = Comma;
    }
    local_48._12_4_ = uStack_4c;
    local_48.Size = 2;
    local_48.DataPtr = L"\r\n";
    TJsonPrintPolicy<char8_t>::WriteString(this_00->Stream,&local_48);
    pFVar4 = this_00->Stream;
    if (0 < this_00->IndentLevel) {
      uVar7 = (ulonglong)(uint)this_00->IndentLevel;
      do {
        local_res18[0] = 9;
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_res18,1);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    TJsonPrintPolicy<char8_t>::WriteFloat(this_00->Stream,*(float *)pFVar8);
    pFVar8 = pFVar8 + 4;
    this_00->PreviousTokenWritten = Number;
  }
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteArrayEnd(this_00);
  return;
}

// SerializeArray @ 141de2f50

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeArray
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  EJsonToken EVar2;
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this_00;
  FArchive *pFVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  TStringView<wchar_t> local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteArrayStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar1 = param_2->ArrayNum;
  pFVar8 = (param_2->AllocatorInstance).Data;
  pFVar7 = pFVar8 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    this_00 = (this->JsonWriter).Object;
    if (pFVar8 == pFVar7) break;
    bVar5 = TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::CanWriteValueWithoutIdentifier
                      (this_00);
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteValueWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0xde,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EVar2 = this_00->PreviousTokenWritten;
    if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
      local_res10[0] = 0x2c;
      (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res10,1);
      this_00->PreviousTokenWritten = Comma;
    }
    local_58._12_4_ = uStack_6c;
    local_58.Size = 2;
    local_58.DataPtr = L"\r\n";
    TJsonPrintPolicy<char8_t>::WriteString(this_00->Stream,&local_58);
    pFVar3 = this_00->Stream;
    if (0 < this_00->IndentLevel) {
      uVar6 = (ulonglong)(uint)this_00->IndentLevel;
      do {
        local_res18[0] = 9;
        (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res18,1);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    iStack_40 = *(int *)(pFVar8 + 8) + -1;
    if (*(int *)(pFVar8 + 8) == 0) {
      iStack_40 = 0;
    }
    local_68 = (undefined4)*(undefined8 *)pFVar8;
    uStack_64 = (undefined4)((ulonglong)*(undefined8 *)pFVar8 >> 0x20);
    local_48 = local_68;
    uStack_44 = uStack_64;
    (**(code **)(this_00->_padding_ + 0x28))(this_00,&local_48);
    pFVar8 = pFVar8 + 0x10;
    this_00->PreviousTokenWritten = String;
  }
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteArrayEnd(this_00);
  return;
}

// SerializeArray @ 141de3100

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeArray
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  EJsonToken EVar1;
  int iVar2;
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this_00;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined2 local_res8 [4];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart
            ((this->JsonWriter).Object);
  for (iVar6 = 0; (-1 < iVar6 && (iVar6 < param_1->ArrayNum)); iVar6 = iVar6 + 1) {
    this_00 = (this->JsonWriter).Object;
    if (iVar6 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar7 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    bVar5 = TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::CanWriteValueWithoutIdentifier
                      (this_00);
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0xde,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    EVar1 = this_00->PreviousTokenWritten;
    if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
      local_res8[0] = 0x2c;
      (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,2);
      this_00->PreviousTokenWritten = Comma;
    }
    uVar3 = *(undefined8 *)pFVar7;
    iVar2 = *(int *)(pFVar7 + 8);
    iStack_30 = iVar2 + -1;
    if (iVar2 == 0) {
      iStack_30 = 0;
    }
    local_48 = (undefined4)uVar3;
    uStack_44 = (undefined4)((ulonglong)uVar3 >> 0x20);
    local_38 = local_48;
    uStack_34 = uStack_44;
    (**(code **)(this_00->_padding_ + 0x28))(this_00,&local_38);
    this_00->PreviousTokenWritten = String;
  }
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayEnd((this->JsonWriter).Object)
  ;
  return;
}

// SerializeArray @ 141de3290

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeArray
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this_00;
  code *pcVar3;
  bool bVar4;
  EJsonToken EVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  undefined2 local_res10 [4];
  
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  pFVar6 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    this_00 = (this->JsonWriter).Object;
    if (pFVar6 == pFVar1) break;
    bVar4 = TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::CanWriteValueWithoutIdentifier
                      (this_00);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0xde,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    EVar5 = this_00->PreviousTokenWritten;
    if ((EVar5 != CurlyOpen) && ((Identifier < EVar5 || ((0x1013U >> (EVar5 & 0x1f) & 1) == 0)))) {
      local_res10[0] = 0x2c;
      (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res10,2);
      this_00->PreviousTokenWritten = Comma;
    }
    EVar5 = TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                      (this_00,(longlong)*(int *)pFVar6);
    this_00->PreviousTokenWritten = EVar5;
    pFVar6 = pFVar6 + 4;
  }
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayEnd(this_00);
  return;
}

// SerializeArray @ 141de3390

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeArray
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  EJsonToken EVar3;
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this_00;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  undefined2 local_res10 [4];
  
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  pFVar6 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    this_00 = (this->JsonWriter).Object;
    if (pFVar6 == pFVar1) break;
    bVar5 = TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::CanWriteValueWithoutIdentifier
                      (this_00);
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0xde,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    EVar3 = this_00->PreviousTokenWritten;
    if ((EVar3 != CurlyOpen) && ((Identifier < EVar3 || ((0x1013U >> (EVar3 & 0x1f) & 1) == 0)))) {
      local_res10[0] = 0x2c;
      (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res10,2);
      this_00->PreviousTokenWritten = Comma;
    }
    TJsonPrintPolicy<wchar_t>::WriteFloat(this_00->Stream,*(float *)pFVar6);
    pFVar6 = pFVar6 + 4;
    this_00->PreviousTokenWritten = Number;
  }
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayEnd(this_00);
  return;
}

// SerializeArray @ 141de34a0

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeArray
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  EJsonToken EVar2;
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this_00;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  undefined2 local_res10 [4];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar1 = param_2->ArrayNum;
  pFVar6 = (param_2->AllocatorInstance).Data;
  pFVar5 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    this_00 = (this->JsonWriter).Object;
    if (pFVar6 == pFVar5) break;
    bVar4 = TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::CanWriteValueWithoutIdentifier
                      (this_00);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0xde,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    EVar2 = this_00->PreviousTokenWritten;
    if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
      local_res10[0] = 0x2c;
      (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res10,2);
      this_00->PreviousTokenWritten = Comma;
    }
    iStack_40 = *(int *)(pFVar6 + 8) + -1;
    if (*(int *)(pFVar6 + 8) == 0) {
      iStack_40 = 0;
    }
    local_58 = (undefined4)*(undefined8 *)pFVar6;
    uStack_54 = (undefined4)((ulonglong)*(undefined8 *)pFVar6 >> 0x20);
    local_48 = local_58;
    uStack_44 = uStack_54;
    (**(code **)(this_00->_padding_ + 0x28))(this_00,&local_48);
    pFVar6 = pFVar6 + 0x10;
    this_00->PreviousTokenWritten = String;
  }
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayEnd(this_00);
  return;
}

// SerializeArray @ 141de35e0

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeArray
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  EJsonToken EVar1;
  int iVar2;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this_00;
  FArchive *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart((this->JsonWriter).Object);
  iVar8 = 0;
  while( true ) {
    if ((iVar8 < 0) || (param_1->ArrayNum <= iVar8)) {
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayEnd
                ((this->JsonWriter).Object);
      return;
    }
    this_00 = (this->JsonWriter).Object;
    if ((iVar8 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    pFVar9 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    bVar6 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::CanWriteValueWithoutIdentifier
                      (this_00);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteValueWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0xde,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EVar1 = this_00->PreviousTokenWritten;
    if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
      local_res10[0] = 0x2c;
      (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res10,2);
      this_00->PreviousTokenWritten = Comma;
    }
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,L"\r\n",4);
    pFVar3 = this_00->Stream;
    if (0 < this_00->IndentLevel) {
      uVar7 = (ulonglong)(uint)this_00->IndentLevel;
      do {
        local_res18[0] = 9;
        (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res18,2);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    uVar4 = *(undefined8 *)pFVar9;
    iVar2 = *(int *)(pFVar9 + 8);
    iStack_40 = iVar2 + -1;
    if (iVar2 == 0) {
      iStack_40 = 0;
    }
    local_58 = (undefined4)uVar4;
    uStack_54 = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_48 = local_58;
    uStack_44 = uStack_54;
    (**(code **)(this_00->_padding_ + 0x28))(this_00,&local_48);
    iVar8 = iVar8 + 1;
    this_00->PreviousTokenWritten = String;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// SerializeArray @ 141de37d0

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeArray
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this_00;
  FArchive *pFVar3;
  code *pcVar4;
  bool bVar5;
  EJsonToken EVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined2 local_res10 [4];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res18;
  undefined2 local_res20 [4];
  
  local_res18 = param_2;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  pFVar8 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    this_00 = (this->JsonWriter).Object;
    if (pFVar8 == pFVar1) break;
    bVar5 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::CanWriteValueWithoutIdentifier
                      (this_00);
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteValueWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0xde,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EVar6 = this_00->PreviousTokenWritten;
    if ((EVar6 != CurlyOpen) && ((Identifier < EVar6 || ((0x1013U >> (EVar6 & 0x1f) & 1) == 0)))) {
      local_res10[0] = 0x2c;
      (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res10,2);
      this_00->PreviousTokenWritten = Comma;
    }
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,L"\r\n",4);
    pFVar3 = this_00->Stream;
    if (0 < this_00->IndentLevel) {
      uVar7 = (ulonglong)(uint)this_00->IndentLevel;
      do {
        local_res20[0] = 9;
        (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res20,2);
        uVar7 = uVar7 - 1;
        param_2 = local_res18;
      } while (uVar7 != 0);
    }
    EVar6 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                      (this_00,(longlong)*(int *)pFVar8);
    this_00->PreviousTokenWritten = EVar6;
    pFVar8 = pFVar8 + 4;
  }
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayEnd(this_00);
  return;
}

// SerializeArray @ 141de3930

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeArray
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  EJsonToken EVar3;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this_00;
  FArchive *pFVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined2 local_res10 [4];
  TArray<float,TSizedDefaultAllocator<32>_> *local_res18;
  undefined2 local_res20 [4];
  
  local_res18 = param_2;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  pFVar8 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    this_00 = (this->JsonWriter).Object;
    if (pFVar8 == pFVar1) break;
    bVar6 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::CanWriteValueWithoutIdentifier
                      (this_00);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteValueWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0xde,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EVar3 = this_00->PreviousTokenWritten;
    if ((EVar3 != CurlyOpen) && ((Identifier < EVar3 || ((0x1013U >> (EVar3 & 0x1f) & 1) == 0)))) {
      local_res10[0] = 0x2c;
      (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res10,2);
      this_00->PreviousTokenWritten = Comma;
    }
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,L"\r\n",4);
    pFVar4 = this_00->Stream;
    if (0 < this_00->IndentLevel) {
      uVar7 = (ulonglong)(uint)this_00->IndentLevel;
      do {
        local_res20[0] = 9;
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_res20,2);
        uVar7 = uVar7 - 1;
        param_2 = local_res18;
      } while (uVar7 != 0);
    }
    TJsonPrintPolicy<wchar_t>::WriteFloat(this_00->Stream,*(float *)pFVar8);
    pFVar8 = pFVar8 + 4;
    this_00->PreviousTokenWritten = Number;
  }
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayEnd(this_00);
  return;
}

// SerializeArray @ 141de3a90

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeArray
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  EJsonToken EVar2;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this_00;
  FArchive *pFVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined2 local_res10 [4];
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res18;
  undefined2 local_res20 [4];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  
  local_res18 = param_2;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar1 = param_2->ArrayNum;
  pFVar8 = (param_2->AllocatorInstance).Data;
  pFVar7 = pFVar8 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    this_00 = (this->JsonWriter).Object;
    if (pFVar8 == pFVar7) break;
    bVar5 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::CanWriteValueWithoutIdentifier
                      (this_00);
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteValueWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0xde,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EVar2 = this_00->PreviousTokenWritten;
    if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
      local_res10[0] = 0x2c;
      (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res10,2);
      this_00->PreviousTokenWritten = Comma;
    }
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,L"\r\n",4);
    pFVar3 = this_00->Stream;
    if (0 < this_00->IndentLevel) {
      uVar6 = (ulonglong)(uint)this_00->IndentLevel;
      do {
        local_res20[0] = 9;
        (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res20,2);
        uVar6 = uVar6 - 1;
        param_2 = local_res18;
      } while (uVar6 != 0);
    }
    iStack_50 = *(int *)(pFVar8 + 8) + -1;
    if (*(int *)(pFVar8 + 8) == 0) {
      iStack_50 = 0;
    }
    local_68 = (undefined4)*(undefined8 *)pFVar8;
    uStack_64 = (undefined4)((ulonglong)*(undefined8 *)pFVar8 >> 0x20);
    local_58 = local_68;
    uStack_54 = uStack_64;
    (**(code **)(this_00->_padding_ + 0x28))(this_00,&local_58);
    pFVar8 = pFVar8 + 0x10;
    this_00->PreviousTokenWritten = String;
  }
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayEnd(this_00);
  return;
}

// SerializeMap @ 141de45e0

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
          *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *pTVar6;
  bool bVar7;
  undefined4 uVar8;
  size_t sVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar3 = *(int *)&param_2->field_0x28;
  puVar2 = &param_2->field_0x10;
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141de468d;
      uVar14 = puVar16[lVar10 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_141de468d:
  uVar14 = *(uint *)&param_2->field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_70 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar2;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x28;
  if (uVar14 != uVar4) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141de4790;
      uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar14 = (int)lVar10 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_141de4790:
  do {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar6 == param_2))
    {
      TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteObjectEnd
                ((this->JsonWriter).Object);
      return;
    }
    plVar12 = (longlong *)(*(longlong *)pTVar6 + (longlong)TStack_60.CurrentBitIndex * 0x20);
    pcVar5 = *(code **)(this->_padding_ + 0x90);
    if ((int)plVar12[1] == 0) {
      local_b8 = L"";
LAB_141de47f4:
      sVar9 = wcslen(local_b8);
      uVar8 = (undefined4)sVar9;
    }
    else {
      local_b8 = (wchar_t *)*plVar12;
      uVar8 = 0;
      if (local_b8 != (wchar_t *)0x0) goto LAB_141de47f4;
    }
    local_a8 = (undefined4)local_b8;
    uStack_a4 = local_b8._4_4_;
    uStack_a0 = uVar8;
    (*pcVar5)(this,&local_a8,plVar12 + 2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// SerializeMap @ 141de4860

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,float,0>_>
          *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,float,0>_> *pTVar6;
  bool bVar7;
  undefined4 uVar8;
  size_t sVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  TMap<FString,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,float,0>_> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,float,0>_> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar3 = *(int *)&param_2->field_0x28;
  puVar2 = &param_2->field_0x10;
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141de490d;
      uVar14 = puVar16[lVar10 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_141de490d:
  uVar14 = *(uint *)&param_2->field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_70 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar2;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x28;
  if (uVar14 != uVar4) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141de4a10;
      uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar14 = (int)lVar10 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_141de4a10:
  do {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar6 == param_2))
    {
      TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteObjectEnd
                ((this->JsonWriter).Object);
      return;
    }
    plVar12 = (longlong *)(*(longlong *)pTVar6 + (longlong)TStack_60.CurrentBitIndex * 0x20);
    pcVar5 = *(code **)(this->_padding_ + 0x58);
    if ((int)plVar12[1] == 0) {
      local_b8 = L"";
LAB_141de4a71:
      sVar9 = wcslen(local_b8);
      uVar8 = (undefined4)sVar9;
    }
    else {
      local_b8 = (wchar_t *)*plVar12;
      uVar8 = 0;
      if (local_b8 != (wchar_t *)0x0) goto LAB_141de4a71;
    }
    local_a8 = (undefined4)local_b8;
    uStack_a4 = local_b8._4_4_;
    uStack_a0 = uVar8;
    (*pcVar5)(this,&local_a8,plVar12 + 2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// SerializeMap @ 141de4ad0

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar7
  ;
  bool bVar8;
  undefined4 uVar9;
  size_t sVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar4 = *(int *)&param_2->field_0x28;
  puVar3 = &param_2->field_0x10;
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar3;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141de4b7d;
      uVar14 = puVar16[lVar11 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_141de4b7d:
  uVar14 = *(uint *)&param_2->field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_70 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar3;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&param_2->field_0x28;
  if (uVar14 != uVar5) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar3;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_141de4c80;
      uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_141de4c80:
  do {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar7 == param_2))
    {
      TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteObjectEnd
                ((this->JsonWriter).Object);
      return;
    }
    lVar11 = *(longlong *)pTVar7;
    plVar1 = (longlong *)(lVar11 + (longlong)TStack_60.CurrentBitIndex * 0x28);
    pcVar6 = *(code **)(this->_padding_ + 0x70);
    if (*(int *)(lVar11 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x28) == 0) {
      local_b8 = L"";
LAB_141de4ce0:
      sVar10 = wcslen(local_b8);
      uVar9 = (undefined4)sVar10;
    }
    else {
      local_b8 = (wchar_t *)*plVar1;
      uVar9 = 0;
      if (local_b8 != (wchar_t *)0x0) goto LAB_141de4ce0;
    }
    local_a8 = (undefined4)local_b8;
    uStack_a4 = local_b8._4_4_;
    uStack_a0 = uVar9;
    (*pcVar6)(this,&local_a8,plVar1 + 2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// SerializeMap @ 141de4d40

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
          *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FString,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar7;
  bool bVar8;
  undefined4 uVar9;
  size_t sVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  TMap<FString,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar4 = *(int *)&param_2->field_0x28;
  puVar3 = &param_2->field_0x10;
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar3;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141de4ded;
      uVar14 = puVar16[lVar11 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_141de4ded:
  uVar14 = *(uint *)&param_2->field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_70 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar3;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&param_2->field_0x28;
  if (uVar14 != uVar5) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar3;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_141de4ef0;
      uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_141de4ef0:
  do {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar7 == param_2))
    {
      TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteObjectEnd
                ((this->JsonWriter).Object);
      return;
    }
    lVar11 = *(longlong *)pTVar7;
    plVar1 = (longlong *)(lVar11 + (longlong)TStack_60.CurrentBitIndex * 0x28);
    pcVar6 = *(code **)(this->_padding_ + 0xa0);
    if (*(int *)(lVar11 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x28) == 0) {
      local_b8 = L"";
LAB_141de4f53:
      sVar10 = wcslen(local_b8);
      uVar9 = (undefined4)sVar10;
    }
    else {
      local_b8 = (wchar_t *)*plVar1;
      uVar9 = 0;
      if (local_b8 != (wchar_t *)0x0) goto LAB_141de4f53;
    }
    local_a8 = (undefined4)local_b8;
    uStack_a4 = local_b8._4_4_;
    uStack_a0 = uVar9;
    (*pcVar6)(this,&local_a8,plVar1 + 2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// SerializeMap @ 141de4fb0

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>
          *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined1 local_res8 [8];
  int local_res10;
  <lambda_1> local_a8;
  TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar3 = *(int *)&param_2->field_0x28;
  puVar1 = &param_2->field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar11 = *puVar13;
    while (uVar11 == 0) {
      lVar8 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141de505d;
      uVar11 = puVar13[lVar8 + 1];
    }
    uStack_8c = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_7c = local_res10 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_141de505d:
  uVar11 = *(uint *)&param_2->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  iStack_70 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_141de5160;
      uVar11 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_141de5160:
  while( true ) {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar11) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_2))
    break;
    local_a8.Pair =
         (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_> *)
         ((longlong)TStack_60.CurrentBitIndex * 0x30 + *(longlong *)pTVar6);
    local_a8.__this = this;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>,0,1,2,0,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64>(unsigned___int64,`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)'
      ::__l2::Invokers[(byte)(local_a8.Pair)->field_0x20])
              (&local_a8,
               (TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *)
               &(local_a8.Pair)->field_0x10);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteObjectEnd
            ((this->JsonWriter).Object);
  return;
}

// SerializeMap @ 141de51f0

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>
          *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_> *pTVar6
  ;
  bool bVar7;
  undefined4 uVar8;
  size_t sVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  TMap<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar3 = *(int *)&param_2->field_0x28;
  puVar2 = &param_2->field_0x10;
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141de529d;
      uVar14 = puVar16[lVar10 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_141de529d:
  uVar14 = *(uint *)&param_2->field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_70 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar2;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x28;
  if (uVar14 != uVar4) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141de53a0;
      uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar14 = (int)lVar10 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_141de53a0:
  do {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar6 == param_2))
    {
      TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteObjectEnd
                ((this->JsonWriter).Object);
      return;
    }
    plVar12 = (longlong *)(*(longlong *)pTVar6 + (longlong)TStack_60.CurrentBitIndex * 0x20);
    pcVar5 = *(code **)(this->_padding_ + 0x80);
    if ((int)plVar12[1] == 0) {
      local_b8 = L"";
LAB_141de5404:
      sVar9 = wcslen(local_b8);
      uVar8 = (undefined4)sVar9;
    }
    else {
      local_b8 = (wchar_t *)*plVar12;
      uVar8 = 0;
      if (local_b8 != (wchar_t *)0x0) goto LAB_141de5404;
    }
    local_a8 = (undefined4)local_b8;
    uStack_a4 = local_b8._4_4_;
    uStack_a0 = uVar8;
    (*pcVar5)(this,&local_a8,plVar12 + 2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// SerializeMap @ 141de5470

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
          *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *pTVar6;
  bool bVar7;
  undefined4 uVar8;
  size_t sVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar3 = *(int *)&param_2->field_0x28;
  puVar2 = &param_2->field_0x10;
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141de551d;
      uVar14 = puVar16[lVar10 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_141de551d:
  uVar14 = *(uint *)&param_2->field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_70 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar2;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x28;
  if (uVar14 != uVar4) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141de5620;
      uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar14 = (int)lVar10 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_141de5620:
  do {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar6 == param_2))
    {
      TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteObjectEnd
                ((this->JsonWriter).Object);
      return;
    }
    plVar12 = (longlong *)(*(longlong *)pTVar6 + (longlong)TStack_60.CurrentBitIndex * 0x20);
    pcVar5 = *(code **)(this->_padding_ + 0x90);
    if ((int)plVar12[1] == 0) {
      local_b8 = L"";
LAB_141de5684:
      sVar9 = wcslen(local_b8);
      uVar8 = (undefined4)sVar9;
    }
    else {
      local_b8 = (wchar_t *)*plVar12;
      uVar8 = 0;
      if (local_b8 != (wchar_t *)0x0) goto LAB_141de5684;
    }
    local_a8 = (undefined4)local_b8;
    uStack_a4 = local_b8._4_4_;
    uStack_a0 = uVar8;
    (*pcVar5)(this,&local_a8,plVar12 + 2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// SerializeMap @ 141de56f0

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,float,0>_>
          *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,float,0>_> *pTVar6;
  bool bVar7;
  undefined4 uVar8;
  size_t sVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  TMap<FString,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,float,0>_> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,float,0>_> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar3 = *(int *)&param_2->field_0x28;
  puVar2 = &param_2->field_0x10;
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141de579d;
      uVar14 = puVar16[lVar10 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_141de579d:
  uVar14 = *(uint *)&param_2->field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_70 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar2;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x28;
  if (uVar14 != uVar4) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141de58a0;
      uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar14 = (int)lVar10 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_141de58a0:
  do {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar6 == param_2))
    {
      TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteObjectEnd
                ((this->JsonWriter).Object);
      return;
    }
    plVar12 = (longlong *)(*(longlong *)pTVar6 + (longlong)TStack_60.CurrentBitIndex * 0x20);
    pcVar5 = *(code **)(this->_padding_ + 0x58);
    if ((int)plVar12[1] == 0) {
      local_b8 = L"";
LAB_141de5901:
      sVar9 = wcslen(local_b8);
      uVar8 = (undefined4)sVar9;
    }
    else {
      local_b8 = (wchar_t *)*plVar12;
      uVar8 = 0;
      if (local_b8 != (wchar_t *)0x0) goto LAB_141de5901;
    }
    local_a8 = (undefined4)local_b8;
    uStack_a4 = local_b8._4_4_;
    uStack_a0 = uVar8;
    (*pcVar5)(this,&local_a8,plVar12 + 2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// SerializeMap @ 141de5960

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar7
  ;
  bool bVar8;
  undefined4 uVar9;
  size_t sVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar4 = *(int *)&param_2->field_0x28;
  puVar3 = &param_2->field_0x10;
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar3;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141de5a0d;
      uVar14 = puVar16[lVar11 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_141de5a0d:
  uVar14 = *(uint *)&param_2->field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_70 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar3;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&param_2->field_0x28;
  if (uVar14 != uVar5) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar3;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_141de5b10;
      uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_141de5b10:
  do {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar7 == param_2))
    {
      TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteObjectEnd
                ((this->JsonWriter).Object);
      return;
    }
    lVar11 = *(longlong *)pTVar7;
    plVar1 = (longlong *)(lVar11 + (longlong)TStack_60.CurrentBitIndex * 0x28);
    pcVar6 = *(code **)(this->_padding_ + 0x70);
    if (*(int *)(lVar11 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x28) == 0) {
      local_b8 = L"";
LAB_141de5b70:
      sVar10 = wcslen(local_b8);
      uVar9 = (undefined4)sVar10;
    }
    else {
      local_b8 = (wchar_t *)*plVar1;
      uVar9 = 0;
      if (local_b8 != (wchar_t *)0x0) goto LAB_141de5b70;
    }
    local_a8 = (undefined4)local_b8;
    uStack_a4 = local_b8._4_4_;
    uStack_a0 = uVar9;
    (*pcVar6)(this,&local_a8,plVar1 + 2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// SerializeMap @ 141de5bd0

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
          *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FString,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar7;
  bool bVar8;
  undefined4 uVar9;
  size_t sVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  TMap<FString,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar4 = *(int *)&param_2->field_0x28;
  puVar3 = &param_2->field_0x10;
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar3;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141de5c7d;
      uVar14 = puVar16[lVar11 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_141de5c7d:
  uVar14 = *(uint *)&param_2->field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_70 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar3;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&param_2->field_0x28;
  if (uVar14 != uVar5) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar3;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_141de5d80;
      uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_141de5d80:
  do {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar7 == param_2))
    {
      TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteObjectEnd
                ((this->JsonWriter).Object);
      return;
    }
    lVar11 = *(longlong *)pTVar7;
    plVar1 = (longlong *)(lVar11 + (longlong)TStack_60.CurrentBitIndex * 0x28);
    pcVar6 = *(code **)(this->_padding_ + 0xa0);
    if (*(int *)(lVar11 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x28) == 0) {
      local_b8 = L"";
LAB_141de5de3:
      sVar10 = wcslen(local_b8);
      uVar9 = (undefined4)sVar10;
    }
    else {
      local_b8 = (wchar_t *)*plVar1;
      uVar9 = 0;
      if (local_b8 != (wchar_t *)0x0) goto LAB_141de5de3;
    }
    local_a8 = (undefined4)local_b8;
    uStack_a4 = local_b8._4_4_;
    uStack_a0 = uVar9;
    (*pcVar6)(this,&local_a8,plVar1 + 2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// SerializeMap @ 141de5e40

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>
          *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined1 local_res8 [8];
  int local_res10;
  <lambda_1> local_a8;
  TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar3 = *(int *)&param_2->field_0x28;
  puVar1 = &param_2->field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar11 = *puVar13;
    while (uVar11 == 0) {
      lVar8 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141de5eed;
      uVar11 = puVar13[lVar8 + 1];
    }
    uStack_8c = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_7c = local_res10 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_141de5eed:
  uVar11 = *(uint *)&param_2->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  iStack_70 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_141de5ff0;
      uVar11 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_141de5ff0:
  while( true ) {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar11) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_2))
    break;
    local_a8.Pair =
         (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_> *)
         ((longlong)TStack_60.CurrentBitIndex * 0x30 + *(longlong *)pTVar6);
    local_a8.__this = this;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>,0,1,2,0,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64>(unsigned___int64,`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)'
      ::__l2::Invokers[(byte)(local_a8.Pair)->field_0x20])
              (&local_a8,
               (TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *)
               &(local_a8.Pair)->field_0x10);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteObjectEnd((this->JsonWriter).Object);
  return;
}

// SerializeMap @ 141de6080

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>
          *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_> *pTVar6
  ;
  bool bVar7;
  undefined4 uVar8;
  size_t sVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  TMap<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar3 = *(int *)&param_2->field_0x28;
  puVar2 = &param_2->field_0x10;
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141de612d;
      uVar14 = puVar16[lVar10 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_141de612d:
  uVar14 = *(uint *)&param_2->field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_70 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar2;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x28;
  if (uVar14 != uVar4) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141de6230;
      uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar14 = (int)lVar10 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_141de6230:
  do {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar6 == param_2))
    {
      TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteObjectEnd
                ((this->JsonWriter).Object);
      return;
    }
    plVar12 = (longlong *)(*(longlong *)pTVar6 + (longlong)TStack_60.CurrentBitIndex * 0x20);
    pcVar5 = *(code **)(this->_padding_ + 0x80);
    if ((int)plVar12[1] == 0) {
      local_b8 = L"";
LAB_141de6294:
      sVar9 = wcslen(local_b8);
      uVar8 = (undefined4)sVar9;
    }
    else {
      local_b8 = (wchar_t *)*plVar12;
      uVar8 = 0;
      if (local_b8 != (wchar_t *)0x0) goto LAB_141de6294;
    }
    local_a8 = (undefined4)local_b8;
    uStack_a4 = local_b8._4_4_;
    uStack_a0 = uVar8;
    (*pcVar5)(this,&local_a8,plVar12 + 2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// SerializeMap @ 141de6300

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
          *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *pTVar6;
  bool bVar7;
  undefined4 uVar8;
  size_t sVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar3 = *(int *)&param_2->field_0x28;
  puVar2 = &param_2->field_0x10;
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141de63ad;
      uVar14 = puVar16[lVar10 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_141de63ad:
  uVar14 = *(uint *)&param_2->field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_70 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar2;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x28;
  if (uVar14 != uVar4) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141de64b0;
      uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar14 = (int)lVar10 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_141de64b0:
  do {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar6 == param_2))
    {
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                ((this->JsonWriter).Object);
      return;
    }
    plVar12 = (longlong *)(*(longlong *)pTVar6 + (longlong)TStack_60.CurrentBitIndex * 0x20);
    pcVar5 = *(code **)(this->_padding_ + 0x90);
    if ((int)plVar12[1] == 0) {
      local_b8 = L"";
LAB_141de6514:
      sVar9 = wcslen(local_b8);
      uVar8 = (undefined4)sVar9;
    }
    else {
      local_b8 = (wchar_t *)*plVar12;
      uVar8 = 0;
      if (local_b8 != (wchar_t *)0x0) goto LAB_141de6514;
    }
    local_a8 = (undefined4)local_b8;
    uStack_a4 = local_b8._4_4_;
    uStack_a0 = uVar8;
    (*pcVar5)(this,&local_a8,plVar12 + 2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// SerializeMap @ 141de6580

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,float,0>_>
          *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,float,0>_> *pTVar6;
  bool bVar7;
  undefined4 uVar8;
  size_t sVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  TMap<FString,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,float,0>_> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,float,0>_> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar3 = *(int *)&param_2->field_0x28;
  puVar2 = &param_2->field_0x10;
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141de662d;
      uVar14 = puVar16[lVar10 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_141de662d:
  uVar14 = *(uint *)&param_2->field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_70 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar2;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x28;
  if (uVar14 != uVar4) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141de6730;
      uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar14 = (int)lVar10 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_141de6730:
  do {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar6 == param_2))
    {
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                ((this->JsonWriter).Object);
      return;
    }
    plVar12 = (longlong *)(*(longlong *)pTVar6 + (longlong)TStack_60.CurrentBitIndex * 0x20);
    pcVar5 = *(code **)(this->_padding_ + 0x58);
    if ((int)plVar12[1] == 0) {
      local_b8 = L"";
LAB_141de6791:
      sVar9 = wcslen(local_b8);
      uVar8 = (undefined4)sVar9;
    }
    else {
      local_b8 = (wchar_t *)*plVar12;
      uVar8 = 0;
      if (local_b8 != (wchar_t *)0x0) goto LAB_141de6791;
    }
    local_a8 = (undefined4)local_b8;
    uStack_a4 = local_b8._4_4_;
    uStack_a0 = uVar8;
    (*pcVar5)(this,&local_a8,plVar12 + 2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// SerializeMap @ 141de67f0

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar7
  ;
  bool bVar8;
  undefined4 uVar9;
  size_t sVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar4 = *(int *)&param_2->field_0x28;
  puVar3 = &param_2->field_0x10;
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar3;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141de689d;
      uVar14 = puVar16[lVar11 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_141de689d:
  uVar14 = *(uint *)&param_2->field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_70 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar3;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&param_2->field_0x28;
  if (uVar14 != uVar5) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar3;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_141de69a0;
      uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_141de69a0:
  do {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar7 == param_2))
    {
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                ((this->JsonWriter).Object);
      return;
    }
    lVar11 = *(longlong *)pTVar7;
    plVar1 = (longlong *)(lVar11 + (longlong)TStack_60.CurrentBitIndex * 0x28);
    pcVar6 = *(code **)(this->_padding_ + 0x70);
    if (*(int *)(lVar11 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x28) == 0) {
      local_b8 = L"";
LAB_141de6a00:
      sVar10 = wcslen(local_b8);
      uVar9 = (undefined4)sVar10;
    }
    else {
      local_b8 = (wchar_t *)*plVar1;
      uVar9 = 0;
      if (local_b8 != (wchar_t *)0x0) goto LAB_141de6a00;
    }
    local_a8 = (undefined4)local_b8;
    uStack_a4 = local_b8._4_4_;
    uStack_a0 = uVar9;
    (*pcVar6)(this,&local_a8,plVar1 + 2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// SerializeMap @ 141de6a60

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
          *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FString,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar7;
  bool bVar8;
  undefined4 uVar9;
  size_t sVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  TMap<FString,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar4 = *(int *)&param_2->field_0x28;
  puVar3 = &param_2->field_0x10;
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar3;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141de6b0d;
      uVar14 = puVar16[lVar11 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_141de6b0d:
  uVar14 = *(uint *)&param_2->field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_70 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar3;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&param_2->field_0x28;
  if (uVar14 != uVar5) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar3;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_141de6c10;
      uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_141de6c10:
  do {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar7 == param_2))
    {
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                ((this->JsonWriter).Object);
      return;
    }
    lVar11 = *(longlong *)pTVar7;
    plVar1 = (longlong *)(lVar11 + (longlong)TStack_60.CurrentBitIndex * 0x28);
    pcVar6 = *(code **)(this->_padding_ + 0xa0);
    if (*(int *)(lVar11 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x28) == 0) {
      local_b8 = L"";
LAB_141de6c73:
      sVar10 = wcslen(local_b8);
      uVar9 = (undefined4)sVar10;
    }
    else {
      local_b8 = (wchar_t *)*plVar1;
      uVar9 = 0;
      if (local_b8 != (wchar_t *)0x0) goto LAB_141de6c73;
    }
    local_a8 = (undefined4)local_b8;
    uStack_a4 = local_b8._4_4_;
    uStack_a0 = uVar9;
    (*pcVar6)(this,&local_a8,plVar1 + 2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// SerializeMap @ 141de6cd0

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>
          *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined1 local_res8 [8];
  int local_res10;
  <lambda_1> local_a8;
  TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar3 = *(int *)&param_2->field_0x28;
  puVar1 = &param_2->field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar11 = *puVar13;
    while (uVar11 == 0) {
      lVar8 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141de6d7d;
      uVar11 = puVar13[lVar8 + 1];
    }
    uStack_8c = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_7c = local_res10 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_141de6d7d:
  uVar11 = *(uint *)&param_2->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  iStack_70 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_141de6e80;
      uVar11 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_141de6e80:
  while( true ) {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar11) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_2))
    break;
    local_a8.Pair =
         (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_> *)
         ((longlong)TStack_60.CurrentBitIndex * 0x30 + *(longlong *)pTVar6);
    local_a8.__this = this;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>,0,1,2,0,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64>(unsigned___int64,`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)'
      ::__l2::Invokers[(byte)(local_a8.Pair)->field_0x20])
              (&local_a8,
               (TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *)
               &(local_a8.Pair)->field_0x10);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
            ((this->JsonWriter).Object);
  return;
}

// SerializeMap @ 141de6f10

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>
          *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_> *pTVar6
  ;
  bool bVar7;
  undefined4 uVar8;
  size_t sVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  TMap<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar3 = *(int *)&param_2->field_0x28;
  puVar2 = &param_2->field_0x10;
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141de6fbd;
      uVar14 = puVar16[lVar10 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_141de6fbd:
  uVar14 = *(uint *)&param_2->field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_70 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar2;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x28;
  if (uVar14 != uVar4) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141de70c0;
      uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar14 = (int)lVar10 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_141de70c0:
  do {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar6 == param_2))
    {
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                ((this->JsonWriter).Object);
      return;
    }
    plVar12 = (longlong *)(*(longlong *)pTVar6 + (longlong)TStack_60.CurrentBitIndex * 0x20);
    pcVar5 = *(code **)(this->_padding_ + 0x80);
    if ((int)plVar12[1] == 0) {
      local_b8 = L"";
LAB_141de7124:
      sVar9 = wcslen(local_b8);
      uVar8 = (undefined4)sVar9;
    }
    else {
      local_b8 = (wchar_t *)*plVar12;
      uVar8 = 0;
      if (local_b8 != (wchar_t *)0x0) goto LAB_141de7124;
    }
    local_a8 = (undefined4)local_b8;
    uStack_a4 = local_b8._4_4_;
    uStack_a0 = uVar8;
    (*pcVar5)(this,&local_a8,plVar12 + 2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// SerializeMap @ 141de7190

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
          *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *pTVar6;
  bool bVar7;
  undefined4 uVar8;
  size_t sVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar3 = *(int *)&param_2->field_0x28;
  puVar2 = &param_2->field_0x10;
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141de723d;
      uVar14 = puVar16[lVar10 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_141de723d:
  uVar14 = *(uint *)&param_2->field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_70 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar2;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x28;
  if (uVar14 != uVar4) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141de7340;
      uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar14 = (int)lVar10 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_141de7340:
  do {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar6 == param_2))
    {
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                ((this->JsonWriter).Object);
      return;
    }
    plVar12 = (longlong *)(*(longlong *)pTVar6 + (longlong)TStack_60.CurrentBitIndex * 0x20);
    pcVar5 = *(code **)(this->_padding_ + 0x90);
    if ((int)plVar12[1] == 0) {
      local_b8 = L"";
LAB_141de73a4:
      sVar9 = wcslen(local_b8);
      uVar8 = (undefined4)sVar9;
    }
    else {
      local_b8 = (wchar_t *)*plVar12;
      uVar8 = 0;
      if (local_b8 != (wchar_t *)0x0) goto LAB_141de73a4;
    }
    local_a8 = (undefined4)local_b8;
    uStack_a4 = local_b8._4_4_;
    uStack_a0 = uVar8;
    (*pcVar5)(this,&local_a8,plVar12 + 2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// SerializeMap @ 141de7410

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,float,0>_>
          *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,float,0>_> *pTVar6;
  bool bVar7;
  undefined4 uVar8;
  size_t sVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  TMap<FString,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,float,0>_> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,float,0>_> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar3 = *(int *)&param_2->field_0x28;
  puVar2 = &param_2->field_0x10;
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141de74bd;
      uVar14 = puVar16[lVar10 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_141de74bd:
  uVar14 = *(uint *)&param_2->field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_70 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar2;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x28;
  if (uVar14 != uVar4) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141de75c0;
      uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar14 = (int)lVar10 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_141de75c0:
  do {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar6 == param_2))
    {
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                ((this->JsonWriter).Object);
      return;
    }
    plVar12 = (longlong *)(*(longlong *)pTVar6 + (longlong)TStack_60.CurrentBitIndex * 0x20);
    pcVar5 = *(code **)(this->_padding_ + 0x58);
    if ((int)plVar12[1] == 0) {
      local_b8 = L"";
LAB_141de7621:
      sVar9 = wcslen(local_b8);
      uVar8 = (undefined4)sVar9;
    }
    else {
      local_b8 = (wchar_t *)*plVar12;
      uVar8 = 0;
      if (local_b8 != (wchar_t *)0x0) goto LAB_141de7621;
    }
    local_a8 = (undefined4)local_b8;
    uStack_a4 = local_b8._4_4_;
    uStack_a0 = uVar8;
    (*pcVar5)(this,&local_a8,plVar12 + 2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// SerializeMap @ 141de7680

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar7
  ;
  bool bVar8;
  undefined4 uVar9;
  size_t sVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar4 = *(int *)&param_2->field_0x28;
  puVar3 = &param_2->field_0x10;
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar3;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141de772d;
      uVar14 = puVar16[lVar11 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_141de772d:
  uVar14 = *(uint *)&param_2->field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_70 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar3;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&param_2->field_0x28;
  if (uVar14 != uVar5) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar3;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_141de7830;
      uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_141de7830:
  do {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar7 == param_2))
    {
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                ((this->JsonWriter).Object);
      return;
    }
    lVar11 = *(longlong *)pTVar7;
    plVar1 = (longlong *)(lVar11 + (longlong)TStack_60.CurrentBitIndex * 0x28);
    pcVar6 = *(code **)(this->_padding_ + 0x70);
    if (*(int *)(lVar11 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x28) == 0) {
      local_b8 = L"";
LAB_141de7890:
      sVar10 = wcslen(local_b8);
      uVar9 = (undefined4)sVar10;
    }
    else {
      local_b8 = (wchar_t *)*plVar1;
      uVar9 = 0;
      if (local_b8 != (wchar_t *)0x0) goto LAB_141de7890;
    }
    local_a8 = (undefined4)local_b8;
    uStack_a4 = local_b8._4_4_;
    uStack_a0 = uVar9;
    (*pcVar6)(this,&local_a8,plVar1 + 2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// SerializeMap @ 141de78f0

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
          *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FString,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar7;
  bool bVar8;
  undefined4 uVar9;
  size_t sVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  TMap<FString,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar4 = *(int *)&param_2->field_0x28;
  puVar3 = &param_2->field_0x10;
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar3;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141de799d;
      uVar14 = puVar16[lVar11 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_141de799d:
  uVar14 = *(uint *)&param_2->field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_70 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar3;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&param_2->field_0x28;
  if (uVar14 != uVar5) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar3;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_141de7aa0;
      uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_141de7aa0:
  do {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar7 == param_2))
    {
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                ((this->JsonWriter).Object);
      return;
    }
    lVar11 = *(longlong *)pTVar7;
    plVar1 = (longlong *)(lVar11 + (longlong)TStack_60.CurrentBitIndex * 0x28);
    pcVar6 = *(code **)(this->_padding_ + 0xa0);
    if (*(int *)(lVar11 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x28) == 0) {
      local_b8 = L"";
LAB_141de7b03:
      sVar10 = wcslen(local_b8);
      uVar9 = (undefined4)sVar10;
    }
    else {
      local_b8 = (wchar_t *)*plVar1;
      uVar9 = 0;
      if (local_b8 != (wchar_t *)0x0) goto LAB_141de7b03;
    }
    local_a8 = (undefined4)local_b8;
    uStack_a4 = local_b8._4_4_;
    uStack_a0 = uVar9;
    (*pcVar6)(this,&local_a8,plVar1 + 2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// SerializeMap @ 141de7b60

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>
          *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined1 local_res8 [8];
  int local_res10;
  <lambda_1> local_a8;
  TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar3 = *(int *)&param_2->field_0x28;
  puVar1 = &param_2->field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar11 = *puVar13;
    while (uVar11 == 0) {
      lVar8 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141de7c0d;
      uVar11 = puVar13[lVar8 + 1];
    }
    uStack_8c = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_7c = local_res10 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_141de7c0d:
  uVar11 = *(uint *)&param_2->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  iStack_70 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_141de7d10;
      uVar11 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_141de7d10:
  while( true ) {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar11) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_2))
    break;
    local_a8.Pair =
         (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_> *)
         ((longlong)TStack_60.CurrentBitIndex * 0x30 + *(longlong *)pTVar6);
    local_a8.__this = this;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>,0,1,2,0,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64>(unsigned___int64,`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)'
      ::__l2::Invokers[(byte)(local_a8.Pair)->field_0x20])
              (&local_a8,
               (TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *)
               &(local_a8.Pair)->field_0x10);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd((this->JsonWriter).Object);
  return;
}

// SerializeMap @ 141de7da0

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>
          *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_> *pTVar6
  ;
  bool bVar7;
  undefined4 uVar8;
  size_t sVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  TMap<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  iVar3 = *(int *)&param_2->field_0x28;
  puVar2 = &param_2->field_0x10;
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141de7e4d;
      uVar14 = puVar16[lVar10 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_141de7e4d:
  uVar14 = *(uint *)&param_2->field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_70 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar2;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x28;
  if (uVar14 != uVar4) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141de7f50;
      uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar14 = (int)lVar10 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_141de7f50:
  do {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar6 == param_2))
    {
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                ((this->JsonWriter).Object);
      return;
    }
    plVar12 = (longlong *)(*(longlong *)pTVar6 + (longlong)TStack_60.CurrentBitIndex * 0x20);
    pcVar5 = *(code **)(this->_padding_ + 0x80);
    if ((int)plVar12[1] == 0) {
      local_b8 = L"";
LAB_141de7fb4:
      sVar9 = wcslen(local_b8);
      uVar8 = (undefined4)sVar9;
    }
    else {
      local_b8 = (wchar_t *)*plVar12;
      uVar8 = 0;
      if (local_b8 != (wchar_t *)0x0) goto LAB_141de7fb4;
    }
    local_a8 = (undefined4)local_b8;
    uStack_a4 = local_b8._4_4_;
    uStack_a0 = uVar8;
    (*pcVar5)(this,&local_a8,plVar12 + 2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// SerializeMapSafe @ 141de9b40

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMapSafe
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->Size;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(this->_padding_ + 0xe0))(local_18,&local_18);
  return;
}

// SerializeMapSafe @ 141de9b70

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMapSafe
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->Size;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(this->_padding_ + 0xe0))(local_18,&local_18);
  return;
}

// SerializeMapSafe @ 141de9ba0

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMapSafe
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->Size;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(this->_padding_ + 0xe0))(local_18,&local_18);
  return;
}

// SerializeMapSafe @ 141de9bd0

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMapSafe
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->Size;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(this->_padding_ + 0xe0))(local_18,&local_18);
  return;
}

// SerializeSimpleMap @ 141dea030

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeSimpleMap
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1)

{
  return;
}

// SerializeSimpleMap @ 141dea040

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeSimpleMap
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1)

{
  return;
}

// SerializeSimpleMap @ 141dea050

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeSimpleMap
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1)

{
  return;
}

// SerializeSimpleMap @ 141dea060

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeSimpleMap
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1)

{
  return;
}

// StartArray @ 141debcd0

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::StartArray
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1)

{
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteArrayStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  return;
}

// StartArray @ 141debcf0

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::StartArray
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this)

{
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteArrayStart
            ((this->JsonWriter).Object);
  return;
}

// StartArray @ 141debd00

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::StartArray
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1)

{
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteArrayStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  return;
}

// StartArray @ 141debd20

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::StartArray
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this)

{
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteArrayStart((this->JsonWriter).Object);
  return;
}

// StartArray @ 141debd30

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::StartArray
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1)

{
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  return;
}

// StartArray @ 141debd50

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::StartArray
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this)

{
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart
            ((this->JsonWriter).Object);
  return;
}

// StartArray @ 141debd60

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::StartArray
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1)

{
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  return;
}

// StartArray @ 141debd80

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::StartArray
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this)

{
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart((this->JsonWriter).Object);
  return;
}

// StartObject @ 141debe60

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::StartObject
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1)

{
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  return;
}

// StartObject @ 141debe80

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::StartObject
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this)

{
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteObjectStart
            ((this->JsonWriter).Object);
  return;
}

// StartObject @ 141debe90

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::StartObject
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1)

{
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  return;
}

// StartObject @ 141debeb0

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::StartObject
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this)

{
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteObjectStart((this->JsonWriter).Object)
  ;
  return;
}

// StartObject @ 141debec0

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::StartObject
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1)

{
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  return;
}

// StartObject @ 141debee0

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::StartObject
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this)

{
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart
            ((this->JsonWriter).Object);
  return;
}

// StartObject @ 141debef0

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::StartObject
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1)

{
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<TStringView<wchar_t>_&>
            ((this->JsonWriter).Object,param_1);
  return;
}

// StartObject @ 141debf10

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::StartObject
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this)

{
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart((this->JsonWriter).Object)
  ;
  return;
}

// WriteIdentifierPrefix @ 141dfe740

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteIdentifierPrefix
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1)

{
  int iVar1;
  EJsonToken EVar2;
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  pTVar3 = (this->JsonWriter).Object;
  iVar1 = (pTVar3->Stack).ArrayNum;
  uVar7 = iVar1 - 1;
  uVar6 = 0;
  if ((int)uVar7 < iVar1) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)((pTVar3->Stack).AllocatorInstance.Data + (longlong)(pTVar3->Stack).ArrayNum * 4 + -4)
      != 6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x177,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar2 = pTVar3->PreviousTokenWritten;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res8,1);
    pTVar3->PreviousTokenWritten = Comma;
  }
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->Size;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(pTVar3->_padding_ + 0x28))(pTVar3,&local_18);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res10,1);
  pTVar3->PreviousTokenWritten = Identifier;
  return;
}

// WriteIdentifierPrefix @ 141dfe860

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteIdentifierPrefix
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1)

{
  int iVar1;
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  TStringView<wchar_t> local_18;
  
  this_00 = (this->JsonWriter).Object;
  iVar1 = (this_00->Stack).ArrayNum;
  uVar5 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar5 < iVar1) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)((this_00->Stack).AllocatorInstance.Data +
              (longlong)(this_00->Stack).ArrayNum * 4 + -4) != 6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x177,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteIdentifier<wchar_t>(this_00,&local_18)
  ;
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,1);
  this_00->PreviousTokenWritten = Identifier;
  return;
}

// WriteIdentifierPrefix @ 141dfe940

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifierPrefix
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1)

{
  int iVar1;
  EJsonToken EVar2;
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  pTVar3 = (this->JsonWriter).Object;
  iVar1 = (pTVar3->Stack).ArrayNum;
  uVar7 = iVar1 - 1;
  uVar6 = 0;
  if ((int)uVar7 < iVar1) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)((pTVar3->Stack).AllocatorInstance.Data + (longlong)(pTVar3->Stack).ArrayNum * 4 + -4)
      != 6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x177,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar2 = pTVar3->PreviousTokenWritten;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res8,2);
    pTVar3->PreviousTokenWritten = Comma;
  }
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->Size;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(pTVar3->_padding_ + 0x28))(pTVar3,&local_18);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res10,2);
  pTVar3->PreviousTokenWritten = Identifier;
  return;
}

// WriteIdentifierPrefix @ 141dfea70

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifierPrefix
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1)

{
  int iVar1;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined2 local_res8 [4];
  TStringView<wchar_t> local_18;
  
  this_00 = (this->JsonWriter).Object;
  iVar1 = (this_00->Stack).ArrayNum;
  uVar5 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar5 < iVar1) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)((this_00->Stack).AllocatorInstance.Data +
              (longlong)(this_00->Stack).ArrayNum * 4 + -4) != 6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x177,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier<wchar_t>(this_00,&local_18)
  ;
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,2);
  this_00->PreviousTokenWritten = Identifier;
  return;
}

// WriteRawJSONValue @ 141e00250

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteRawJSONValue
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<char8_t> *param_1)

{
  EJsonToken EVar1;
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this_00;
  FArchive *pFVar2;
  undefined8 uVar3;
  bool bVar4;
  size_t sVar5;
  int iVar6;
  uchar *_Str;
  code *pcVar7;
  undefined1 local_res8 [8];
  
  _Str = param_1->DataPtr;
  uVar3 = *(undefined8 *)&param_1->Size;
  this_00 = (this->JsonWriter).Object;
  bVar4 = TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::CanWriteValueWithoutIdentifier
                    (this_00);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanWriteValueWithoutIdentifier()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x27a,L"");
    if (bVar4) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  EVar1 = this_00->PreviousTokenWritten;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,1);
    this_00->PreviousTokenWritten = Comma;
  }
  pFVar2 = this_00->Stream;
  iVar6 = (int)uVar3;
  if (_Str == (uchar *)0x0) {
    iVar6 = 0;
    _Str = (uchar *)0x0;
    pcVar7 = *(code **)(*(longlong *)pFVar2 + 0x188);
  }
  else {
    if ((0 < iVar6) && (_Str[(longlong)iVar6 + -1] == '\0')) {
      iVar6 = iVar6 + -1;
    }
    pcVar7 = *(code **)(*(longlong *)pFVar2 + 0x188);
    if (iVar6 == -1) {
      sVar5 = strlen((char *)_Str);
      iVar6 = (int)sVar5;
    }
  }
  (*pcVar7)(pFVar2,_Str,(longlong)iVar6);
  this_00->PreviousTokenWritten = String;
  return;
}

// WriteRawJSONValue @ 141e00370

void __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteRawJSONValue
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1)

{
  EJsonToken EVar1;
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this_00;
  code *pcVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 local_res8 [32];
  TStringView<wchar_t> local_28 [2];
  
  this_00 = (this->JsonWriter).Object;
  pwVar3 = param_1->DataPtr;
  uVar4._0_4_ = param_1->Size;
  uVar4._4_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar5 = TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::CanWriteValueWithoutIdentifier
                    (this_00);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanWriteValueWithoutIdentifier()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x27a,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar1 = this_00->PreviousTokenWritten;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,1);
    this_00->PreviousTokenWritten = Comma;
  }
  local_28[0].DataPtr = pwVar3;
  local_28[0]._8_8_ = uVar4;
  TJsonPrintPolicy<char8_t>::WriteString(this_00->Stream,local_28);
  this_00->PreviousTokenWritten = String;
  return;
}

// WriteRawJSONValue @ 141e00420

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteRawJSONValue
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TStringView<char8_t> *param_1)

{
  TStringView<char8_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteRawJSONValueImpl<char8_t>
            ((this->JsonWriter).Object,&local_18);
  return;
}

// WriteRawJSONValue @ 141e00450

void __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteRawJSONValue
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,
          TStringView<wchar_t> *param_1)

{
  EJsonToken EVar1;
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this_00;
  code *pcVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28 [2];
  
  this_00 = (this->JsonWriter).Object;
  pwVar3 = param_1->DataPtr;
  uVar4._0_4_ = param_1->Size;
  uVar4._4_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar5 = TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::CanWriteValueWithoutIdentifier
                    (this_00);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanWriteValueWithoutIdentifier()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x27a,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar1 = this_00->PreviousTokenWritten;
  if (EVar1 != CurlyOpen) {
    if (EVar1 == SquareOpen) {
      local_res10[0] = 0x20;
      (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res10,1);
      goto LAB_141e0050c;
    }
    if ((EVar1 != Identifier) && (Comma < EVar1)) {
      local_res8[0] = 0x2c;
      (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,1);
      this_00->PreviousTokenWritten = Comma;
    }
  }
  local_38._12_4_ = uStack_3c;
  local_38.Size = 2;
  local_38.DataPtr = L"\r\n";
  TJsonPrintPolicy<char8_t>::WriteString(this_00->Stream,&local_38);
  TPrettyJsonPrintPolicy<char8_t>::WriteTabs(this_00->Stream,this_00->IndentLevel);
LAB_141e0050c:
  local_28[0].DataPtr = pwVar3;
  local_28[0]._8_8_ = uVar4;
  TJsonPrintPolicy<char8_t>::WriteString(this_00->Stream,local_28);
  this_00->PreviousTokenWritten = String;
  return;
}

// WriteRawJSONValue @ 141e00560

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteRawJSONValue
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<char8_t> *param_1)

{
  EJsonToken EVar1;
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this_00;
  code *pcVar2;
  uchar *puVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined2 local_res8 [16];
  TStringView<char8_t> local_28 [2];
  
  this_00 = (this->JsonWriter).Object;
  puVar3 = param_1->DataPtr;
  uVar4._0_4_ = param_1->Size;
  uVar4._4_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar5 = TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::CanWriteValueWithoutIdentifier
                    (this_00);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanWriteValueWithoutIdentifier()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x27a,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar1 = this_00->PreviousTokenWritten;
  if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,2);
    this_00->PreviousTokenWritten = Comma;
  }
  local_28[0].DataPtr = puVar3;
  local_28[0]._8_8_ = uVar4;
  TJsonPrintPolicy<wchar_t>::WriteString(this_00->Stream,local_28);
  this_00->PreviousTokenWritten = String;
  return;
}

// WriteRawJSONValue @ 141e00610

void __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteRawJSONValue
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteRawJSONValue
            ((this->JsonWriter).Object,&local_18);
  return;
}

// WriteRawJSONValue @ 141e00640

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteRawJSONValue
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TStringView<char8_t> *param_1)

{
  EJsonToken EVar1;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this_00;
  code *pcVar2;
  uchar *puVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined2 local_res8 [4];
  undefined2 local_res10 [12];
  TStringView<char8_t> local_28 [2];
  
  this_00 = (this->JsonWriter).Object;
  puVar3 = param_1->DataPtr;
  uVar4._0_4_ = param_1->Size;
  uVar4._4_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar5 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::CanWriteValueWithoutIdentifier
                    (this_00);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanWriteValueWithoutIdentifier()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x27a,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar1 = this_00->PreviousTokenWritten;
  if (EVar1 != CurlyOpen) {
    if (EVar1 == SquareOpen) {
      local_res10[0] = 0x20;
      (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res10,2);
      goto LAB_141e006ea;
    }
    if ((EVar1 != Identifier) && (Comma < EVar1)) {
      local_res8[0] = 0x2c;
      (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,local_res8,2);
      this_00->PreviousTokenWritten = Comma;
    }
  }
  (**(code **)(*(longlong *)this_00->Stream + 0x188))(this_00->Stream,L"\r\n",4);
  TPrettyJsonPrintPolicy<wchar_t>::WriteTabs(this_00->Stream,this_00->IndentLevel);
LAB_141e006ea:
  local_28[0].DataPtr = puVar3;
  local_28[0]._8_8_ = uVar4;
  TJsonPrintPolicy<wchar_t>::WriteString(this_00->Stream,local_28);
  this_00->PreviousTokenWritten = String;
  return;
}

// WriteRawJSONValue @ 141e00740

void __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteRawJSONValue
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,
          TStringView<wchar_t> *param_1)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteRawJSONValueImpl<wchar_t>
            ((this->JsonWriter).Object,&local_18);
  return;
}

