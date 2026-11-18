// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 13

// Set<Metasound::FAnyDataReference> @ 14ad34860

void __thiscall
Metasound::VertexDataPrivate::FInputBinding::Set<Metasound::FAnyDataReference>
          (FInputBinding *this,FAnyDataReference *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  
  pFVar4 = (FName *)(**(code **)(param_1->_padding_ + 8))(param_1);
  bVar3 = IsCastable((FName)(this->Vertex)._padding_,*pFVar4);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (((this->Data).bIsSet != false) &&
     (pIVar1 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  FAnyDataReference::FAnyDataReference
            (&(this->Data).TypedValue,param_1->AccessType,(param_1->DataRefPtr).Ptr);
  (this->Data).TypedValue._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// FInputBinding @ 14ad3a2e0

FInputBinding * __thiscall
Metasound::VertexDataPrivate::FInputBinding::FInputBinding
          (FInputBinding *this,FInputDataVertex *param_1)

{
  (this->Vertex)._padding_ = (longlong)&___7FDataVertex_Metasound__6B_;
  (this->Vertex)._padding_ = param_1->_padding_;
  (this->Vertex)._padding_ = param_1->_padding_;
  *(int *)&(this->Vertex)._padding_ = (int)param_1->_padding_;
  (this->Vertex)._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&(this->Vertex).Literal.Value,&(param_1->Literal).Value);
  (this->Data).bIsSet = false;
  return this;
}

// FInputBinding @ 14ad3a340

FInputBinding * __thiscall
Metasound::VertexDataPrivate::FInputBinding::FInputBinding
          (FInputBinding *this,FInputBinding *param_1)

{
  bool bVar1;
  
  (this->Vertex)._padding_ = (longlong)&___7FDataVertex_Metasound__6B_;
  (this->Vertex)._padding_ = (param_1->Vertex)._padding_;
  (this->Vertex)._padding_ = (param_1->Vertex)._padding_;
  *(int *)&(this->Vertex)._padding_ = (int)(param_1->Vertex)._padding_;
  (this->Vertex)._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&(this->Vertex).Literal.Value,&(param_1->Vertex).Literal.Value);
  (this->Data).bIsSet = false;
  bVar1 = (param_1->Data).bIsSet;
  (this->Data).bIsSet = bVar1;
  if (bVar1 != false) {
    FAnyDataReference::FAnyDataReference
              (&(this->Data).TypedValue,(param_1->Data).TypedValue.AccessType,
               (param_1->Data).TypedValue.DataRefPtr.Ptr);
    (this->Data).TypedValue._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  }
  return this;
}

// FInputBinding @ 14ad3a3d0

FInputBinding * __thiscall
Metasound::VertexDataPrivate::FInputBinding::FInputBinding
          (FInputBinding *this,FInputDataVertex *param_1)

{
  (this->Vertex)._padding_ = (longlong)&___7FDataVertex_Metasound__6B_;
  (this->Vertex)._padding_ = param_1->_padding_;
  (this->Vertex)._padding_ = param_1->_padding_;
  *(int *)&(this->Vertex)._padding_ = (int)param_1->_padding_;
  (this->Vertex)._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&(this->Vertex).Literal.Value,&(param_1->Literal).Value);
  (this->Data).bIsSet = false;
  return this;
}

// FInputBinding @ 14ad3a430

FInputBinding * __thiscall
Metasound::VertexDataPrivate::FInputBinding::FInputBinding
          (FInputBinding *this,FName *param_1,FAnyDataReference *param_2)

{
  EDataReferenceAccessType EVar1;
  longlong *plVar2;
  undefined4 uVar3;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  EVar1 = param_2->AccessType;
  if (((EVar1 == Read) || (EVar1 == Write)) || (EVar1 != Value)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  plVar2 = (longlong *)(**(code **)(param_2->_padding_ + 8))(param_2);
  (this->Vertex)._padding_ = (longlong)&___7FDataVertex_Metasound__6B_;
  (this->Vertex)._padding_ = (longlong)*param_1;
  (this->Vertex)._padding_ = *plVar2;
  (this->Vertex)._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  *(undefined4 *)&(this->Vertex)._padding_ = uVar3;
  (this->Vertex).Literal.Value.TypeIndex = '\0';
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  (this->Data).bIsSet = false;
  Set(this,param_2);
  return this;
}

// Bind @ 14ad47770

void __thiscall
Metasound::VertexDataPrivate::FInputBinding::Bind(FInputBinding *this,FInputBinding *param_1)

{
  TOptional<Metasound::FAnyDataReference> *pTVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar4 = IsCastable((FName)(this->Vertex)._padding_,(FName)(param_1->Vertex)._padding_);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCastable(Vertex.DataTypeName, InBinding.GetVertex().DataTypeName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                       ,0x83,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar4 = (param_1->Data).bIsSet;
  if ((this->Data).bIsSet == false) {
    if (bVar4 != false) {
      pTVar1 = &this->Data;
      if (&param_1->Data == pTVar1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        if (((this->Data).bIsSet != false) &&
           (pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
          (**(code **)*pIVar2)(pIVar2,1);
        }
        FAnyDataReference::FAnyDataReference
                  (&pTVar1->TypedValue,(param_1->Data).TypedValue.AccessType,
                   (param_1->Data).TypedValue.DataRefPtr.Ptr);
        (pTVar1->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
        (this->Data).bIsSet = true;
      }
      CheckAccessTypeCompatibility((FDataVertex *)this,&pTVar1->TypedValue);
    }
  }
  else {
    pTVar1 = &param_1->Data;
    if (bVar4 != false) {
      if ((param_1->Data).bIsSet == false) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FAnyDataReference::operator=(&pTVar1->TypedValue,&(this->Data).TypedValue);
      return;
    }
    if (&this->Data != pTVar1) {
      if (((param_1->Data).bIsSet != false) &&
         (pIVar2 = (param_1->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
        (**(code **)*pIVar2)(pIVar2,1);
      }
      FAnyDataReference::FAnyDataReference
                (&pTVar1->TypedValue,(this->Data).TypedValue.AccessType,
                 (this->Data).TypedValue.DataRefPtr.Ptr);
      (pTVar1->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
      (param_1->Data).bIsSet = true;
      return;
    }
  }
  return;
}

// GetAccessType @ 14ad54e10

EDataReferenceAccessType __thiscall
Metasound::VertexDataPrivate::FInputBinding::GetAccessType(FInputBinding *this)

{
  if ((this->Data).bIsSet != false) {
    return (this->Data).TypedValue.AccessType;
  }
  return None;
}

// GetDataReference @ 14ad54f60

FAnyDataReference * __thiscall
Metasound::VertexDataPrivate::FInputBinding::GetDataReference(FInputBinding *this)

{
  FAnyDataReference *pFVar1;
  
  pFVar1 = &(this->Data).TypedValue;
  if ((this->Data).bIsSet == false) {
    pFVar1 = (FAnyDataReference *)0x0;
  }
  return pFVar1;
}

// GetDataReferenceID @ 14ad54fa0

void * __thiscall
Metasound::VertexDataPrivate::FInputBinding::GetDataReferenceID(FInputBinding *this)

{
  void *pvVar1;
  
  if ((this->Data).bIsSet != false) {
                    /* WARNING: Could not recover jumptable at 0x00014ad54fae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(**(code **)((this->Data).TypedValue._padding_ + 0x20))(&this->Data);
    return pvVar1;
  }
  return (void *)0x0;
}

// GetVertex @ 14ad57210

FInputDataVertex * __thiscall
Metasound::VertexDataPrivate::FInputBinding::GetVertex(FInputBinding *this)

{
  return &this->Vertex;
}

// IsBound @ 14ad5a5e0

bool __thiscall Metasound::VertexDataPrivate::FInputBinding::IsBound(FInputBinding *this)

{
  return (this->Data).bIsSet;
}

// Set @ 14ad62cc0

void __thiscall
Metasound::VertexDataPrivate::FInputBinding::Set(FInputBinding *this,FAnyDataReference *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  
  pFVar4 = (FName *)(**(code **)(param_1->_padding_ + 8))(param_1);
  bVar3 = IsCastable((FName)(this->Vertex)._padding_,*pFVar4);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCastable(Vertex.DataTypeName,InAnyDataReference.GetDataTypeName())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                       ,0x54,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (((this->Data).bIsSet != false) &&
     (pIVar1 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  FAnyDataReference::FAnyDataReference
            (&(this->Data).TypedValue,param_1->AccessType,(param_1->DataRefPtr).Ptr);
  (this->Data).TypedValue._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// SetDefaultLiteral @ 14ad63860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::VertexDataPrivate::FInputBinding::SetDefaultLiteral
          (FInputBinding *this,FLiteral *param_1)

{
  FLiteral *pFVar1;
  ulonglong uVar2;
  byte bVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  longlong lStack_38;
  longlong lStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  pFVar1 = &(this->Vertex).Literal;
  if (param_1 != pFVar1) {
    bVar3 = (param_1->Value).TypeIndex;
    uStack_28 = CONCAT71(uStack_28._1_7_,bVar3);
    if (0xc < (ulonglong)bVar3) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xec,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                ::__l2::CopyConstructors)[bVar3])(&lStack_38,param_1);
    uVar2 = *(ulonglong *)&(this->Vertex).Literal.Value.TypeIndex;
    lVar5 = (pFVar1->Value)._padding_;
    lVar6 = (this->Vertex).Literal.Value._padding_;
    (pFVar1->Value)._padding_ = lStack_38;
    (this->Vertex).Literal.Value._padding_ = lStack_30;
    *(ulonglong *)&(this->Vertex).Literal.Value.TypeIndex = uStack_28;
    lStack_38 = lVar5;
    lStack_30 = lVar6;
    uStack_28 = uVar2;
    if (0xc < (uVar2 & 0xff)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar2 & 0xff])(&lStack_38);
  }
  return;
}

