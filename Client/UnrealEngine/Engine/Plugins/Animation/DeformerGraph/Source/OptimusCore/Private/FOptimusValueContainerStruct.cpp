// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 9

// StaticStruct @ 14e114260

UScriptStruct * __cdecl FOptimusValueContainerStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusValueContainerStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusValueContainerStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusValueContainerStruct,(UObject *)pUVar1,
                         L"OptimusValueContainerStruct");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusValueContainerStruct.OuterSingleton;
}

// operator= @ 14e165b40

FOptimusValueContainerStruct * __thiscall
FOptimusValueContainerStruct::operator=
          (FOptimusValueContainerStruct *this,FOptimusValueContainerStruct *param_1)

{
  uchar *puVar1;
  UScriptStruct *pUVar2;
  
  if (this != param_1) {
    FInstancedStruct::Reset((FInstancedStruct *)this);
    puVar1 = (param_1->Value).Value.StructMemory;
    pUVar2 = (param_1->Value).Value.ScriptStruct.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->Value).Value.ScriptStruct.field0_0x0.DebugPtr = pUVar2;
    (this->Value).Value.StructMemory = puVar1;
    (param_1->Value).Value.ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    (param_1->Value).Value.StructMemory = (uchar *)0x0;
  }
  return this;
}

// GetShaderValue @ 14e1e3580

FShaderValueContainer * __thiscall
FOptimusValueContainerStruct::GetShaderValue
          (FOptimusValueContainerStruct *this,FShaderValueContainer *__return_storage_ptr__,
          FOptimusDataTypeRef *param_1)

{
  int iVar1;
  FOptimusDataType *pFVar2;
  uchar *puVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  FProperty *pFVar7;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar8;
  FShaderValueContainer *pFVar9;
  int iVar10;
  undefined4 uStack_7c;
  TSharedPtr<FOptimusDataType_const_,1> local_78;
  TSharedPtr<FOptimusDataType_const_,1> local_68;
  TSharedPtr<FOptimusDataType_const_,1> local_58;
  TArrayView<unsigned_char_const_,int> local_48;
  FShaderValueContainer local_38;
  
  pFVar7 = GetValueProperty(this);
  pTVar8 = FOptimusDataTypeRef::Resolve(param_1,&local_78);
  pFVar2 = pTVar8->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  if (pFVar2 == (FOptimusDataType *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7677652687579512866>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusValueContainerStruct.cpp"
                       ,0x22,"InDataType.IsValid()");
    if (bVar6) {
code_r0x00014e1e363b:
      pcVar5 = (code *)swi(3);
      pFVar9 = (FShaderValueContainer *)(*pcVar5)();
      return pFVar9;
    }
  }
  else if (pFVar7 == (FProperty *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7677652687579512866>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusValueContainerStruct.cpp"
                       ,0x22,"Property");
    if (bVar6) goto code_r0x00014e1e363b;
  }
  else {
    iVar10 = pFVar7->ArrayDim * pFVar7->ElementSize;
    puVar3 = (this->Value).Value.StructMemory;
    if ((pFVar7->ArrayDim < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar6)
       ) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FShaderValueContainer *)(*pcVar5)();
      return pFVar9;
    }
    if ((puVar3 == (uchar *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FShaderValueContainer *)(*pcVar5)();
      return pFVar9;
    }
    iVar1 = pFVar7->Offset_Internal;
    if ((iVar10 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FShaderValueContainer *)(*pcVar5)();
      return pFVar9;
    }
    pTVar8 = FOptimusDataTypeRef::Resolve(param_1,&local_68);
    pFVar2 = pTVar8->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    FOptimusDataType::MakeShaderValue(pFVar2,&local_38);
    pTVar8 = FOptimusDataTypeRef::Resolve(param_1,&local_58);
    pFVar2 = pTVar8->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    local_48._12_4_ = uStack_7c;
    local_48.ArrayNum = iVar10;
    local_48.DataPtr = puVar3 + iVar1;
    bVar6 = FOptimusDataType::ConvertPropertyValueToShader(pFVar2,&local_48,&local_38);
    if (bVar6) {
      (__return_storage_ptr__->ShaderValue).AllocatorInstance.Data =
           local_38.ShaderValue.AllocatorInstance.Data;
      (__return_storage_ptr__->ShaderValue).ArrayNum = local_38.ShaderValue.ArrayNum;
      (__return_storage_ptr__->ShaderValue).ArrayMax = local_38.ShaderValue.ArrayMax;
      (__return_storage_ptr__->ArrayList).AllocatorInstance.Data =
           local_38.ArrayList.AllocatorInstance.Data;
      (__return_storage_ptr__->ArrayList).ArrayNum = local_38.ArrayList.ArrayNum;
      (__return_storage_ptr__->ArrayList).ArrayMax = local_38.ArrayList.ArrayMax;
      local_38.ArrayList.ArrayNum = 0;
      local_38.ArrayList.ArrayMax = 0;
      local_38.ShaderValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ShaderValue.ArrayNum = 0;
      local_38.ShaderValue.ArrayMax = 0;
      local_38.ArrayList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      DestructItems<FArrayShaderValue,int>((FArrayShaderValue *)0x0,0);
      if (local_38.ArrayList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.ArrayList.AllocatorInstance.Data);
      }
      if (local_38.ShaderValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.ShaderValue.AllocatorInstance.Data);
      }
      goto LAB_14e1e37d2;
    }
    DestructItems<FArrayShaderValue,int>
              ((FArrayShaderValue *)local_38.ArrayList.AllocatorInstance.Data,
               local_38.ArrayList.ArrayNum);
    if (local_38.ArrayList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.ArrayList.AllocatorInstance.Data);
    }
    if (local_38.ShaderValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.ShaderValue.AllocatorInstance.Data);
    }
  }
  (__return_storage_ptr__->ShaderValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ShaderValue).ArrayNum = 0;
  (__return_storage_ptr__->ShaderValue).ArrayMax = 0;
  (__return_storage_ptr__->ArrayList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayList).ArrayNum = 0;
  (__return_storage_ptr__->ArrayList).ArrayMax = 0;
LAB_14e1e37d2:
  pvVar4 = *(void **)&(param_1->TypeObject).SoftObjectPtr.field_0x18;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  return __return_storage_ptr__;
}

// GetValueAsString @ 14e1e9360

FString * __thiscall
FOptimusValueContainerStruct::GetValueAsString
          (FOptimusValueContainerStruct *this,FString *__return_storage_ptr__)

{
  FProperty *pFVar1;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  pFVar1 = GetValueProperty(this);
  if (pFVar1 != (FProperty *)0x0) {
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10 = 0;
    (**(code **)(pFVar1->_padding_ + 0xe0))
              (pFVar1,&local_18,(this->Value).Value.StructMemory,1,0,0,0,0);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data;
    (__return_storage_ptr__->Data).ArrayNum = (int)local_10;
    (__return_storage_ptr__->Data).ArrayMax = local_10._4_4_;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetValueMemory @ 14e1e9730

uchar * __thiscall FOptimusValueContainerStruct::GetValueMemory(FOptimusValueContainerStruct *this)

{
  return (this->Value).Value.StructMemory;
}

// GetValueProperty @ 14e1e9750

FProperty * __thiscall
FOptimusValueContainerStruct::GetValueProperty(FOptimusValueContainerStruct *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FProperty *pFVar5;
  UPropertyBag *pUVar6;
  
  iVar4 = FInstancedPropertyBag::GetNumPropertiesInBag(&this->Value);
  if (iVar4 != 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value.GetNumPropertiesInBag() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusValueContainerStruct.cpp"
                       ,0x3e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FProperty *)(*pcVar2)();
      return pFVar5;
    }
  }
  pUVar6 = FInstancedPropertyBag::GetPropertyBagStruct(&this->Value);
  iVar4 = (pUVar6->PropertyDescs).ArrayNum;
  pFVar1 = (pUVar6->PropertyDescs).AllocatorInstance.Data;
  if (iVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FProperty *)(*pcVar2)();
      return pFVar5;
    }
  }
  else if (0 < iVar4) goto LAB_14e1e9805;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FProperty *)(*pcVar2)();
    return pFVar5;
  }
LAB_14e1e9805:
  return *(FProperty **)(pFVar1 + 0x30);
}

// IsInitialized @ 14e1ef050

bool __thiscall FOptimusValueContainerStruct::IsInitialized(FOptimusValueContainerStruct *this)

{
  int iVar1;
  
  iVar1 = FInstancedPropertyBag::GetNumPropertiesInBag(&this->Value);
  return iVar1 == 1;
}

// SetType @ 14e222dc0

/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

void __thiscall
FOptimusValueContainerStruct::SetType
          (FOptimusValueContainerStruct *this,FOptimusDataTypeRef *param_1)

{
  FOptimusDataType *this_00;
  void *pvVar1;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar2;
  FName *pFVar3;
  FProperty *pFVar4;
  FName local_res8;
  FName local_res10;
  TSharedPtr<FOptimusDataType_const_,1> local_18;
  
  FInstancedStruct::Reset((FInstancedStruct *)this);
  pTVar2 = FOptimusDataTypeRef::Resolve(param_1,&local_18);
  this_00 = pTVar2->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  pFVar3 = ::FName::FName(&local_res8,ValuePropertyName);
  pFVar4 = FOptimusDataType::CreateProperty(this_00,(UStruct *)0x0,*pFVar3);
  pFVar3 = ::FName::FName(&local_res10,ValuePropertyName);
  FInstancedPropertyBag::AddProperty(&this->Value,*pFVar3,pFVar4,true);
  pvVar1 = *(void **)&(param_1->TypeObject).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

// SetValue @ 14e222e60

void __thiscall
FOptimusValueContainerStruct::SetValue
          (FOptimusValueContainerStruct *this,FOptimusDataTypeRef *param_1,
          TArrayView<unsigned_char_const_,int> *param_2)

{
  code *pcVar1;
  FOptimusDataType *this_00;
  uchar *_Src;
  uchar *_Dst;
  void *pvVar2;
  char cVar3;
  bool bVar4;
  FProperty *pFVar5;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar6;
  TSharedPtr<FOptimusDataType_const_,1> local_28;
  
  pFVar5 = GetValueProperty(this);
  pcVar1 = *(code **)(pFVar5->_padding_ + 0x1a0);
  pTVar6 = FOptimusDataTypeRef::Resolve(param_1,&local_28);
  this_00 = pTVar6->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  FOptimusDataType::CreateProperty(this_00,(UStruct *)0x0,(FName)0x0);
  cVar3 = (*pcVar1)(pFVar5);
  if (cVar3 == '\0') {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7677652687579512856>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusValueContainerStruct.cpp"
                       ,0x18,"Property->SameType(InDataType->CreateProperty(nullptr, NAME_None))");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    _Src = param_2->DataPtr;
    _Dst = (this->Value).Value.StructMemory;
    if (_Dst != _Src) {
      if (((uint)(int)pFVar5->PropertyFlags >> 0x1e & 1) == 0) {
        (**(code **)(pFVar5->_padding_ + 0xf0))(pFVar5,_Dst,_Src,pFVar5->ArrayDim);
      }
      else {
        memcpy(_Dst,_Src,(longlong)pFVar5->ElementSize * (longlong)pFVar5->ArrayDim);
      }
    }
  }
  pvVar2 = *(void **)&(param_1->TypeObject).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return;
}

