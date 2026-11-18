// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// StaticStruct @ 149f1f9c0

UScriptStruct * __cdecl FPCGDataTypeInfoParam::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoParam.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoParam.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoParam,(UObject *)pUVar1,
                         L"PCGDataTypeInfoParam");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoParam.OuterSingleton;
}

// GetAssociatedClass @ 149f1fa00

TSubclassOf<UPCGData> __thiscall
FPCGDataTypeInfoParam::GetAssociatedClass(FPCGDataTypeInfoParam *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = UPCGParamData::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RDX.field0_0x0;
}

// GetAssociatedLegacyType @ 149f1fa40

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall FPCGDataTypeInfoParam::GetAssociatedLegacyType(FPCGDataTypeInfoParam *this)

{
  return Param;
}

// IsCompatibleForSubtype @ 149f1fa50

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

EPCGDataTypeCompatibilityResult __thiscall
FPCGDataTypeInfoParam::IsCompatibleForSubtype
          (FPCGDataTypeInfoParam *this,FPCGDataTypeIdentifier *param_1,
          FPCGDataTypeIdentifier *param_2,FText *param_3)

{
  ushort uVar1;
  uint uVar2;
  bool (*pabVar3) [15];
  FPCGDataTypeBaseId FVar4;
  FPCGDataTypeBaseId *pFVar5;
  ulonglong uVar6;
  FText *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  ushort uVar11;
  ulonglong uVar12;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  if ((param_1->Ids).ArrayNum < 2) {
    FVar4 = FPCGDataTypeIdentifier::GetId(param_1);
    pFVar5 = AsId();
    if (*(UScriptStruct **)FVar4.Struct.field0_0x0 != (pFVar5->Struct).field0_0x0.DebugPtr) {
      return Compatible;
    }
    if (0xe < (uint)param_1->CustomSubtype) {
      return Compatible;
    }
    if (1 < (param_2->Ids).ArrayNum) {
      return Compatible;
    }
    FVar4 = FPCGDataTypeIdentifier::GetId(param_2);
    pFVar5 = AsId();
    if (*(UScriptStruct **)FVar4.Struct.field0_0x0 != (pFVar5->Struct).field0_0x0.DebugPtr) {
      return Compatible;
    }
    uVar2 = param_2->CustomSubtype;
    if (0xe < uVar2) {
      return Compatible;
    }
    uVar1 = (ushort)param_1->CustomSubtype;
    uVar6 = (ulonglong)uVar1;
    uVar11 = (ushort)uVar2;
    if ((uVar1 < 0xf) && (uVar11 < 0xf)) {
      uVar12 = (ulonglong)(uVar2 & 0xffff);
      pabVar3 = PCG::Private::BroadcastableTypes.Values + uVar6;
      uVar6 = (ulonglong)(uint)uVar1;
      if ((*pabVar3)[uVar12] != false) {
        return Compatible;
      }
    }
    else {
      uVar12 = (ulonglong)(uVar2 & 0xffff);
      if ((0xe < uVar11) || (0xe < uVar1)) goto LAB_149f1fb30;
    }
    if (PCG::Private::ConstructibleTypes.Values[uVar12][uVar6] == false) {
LAB_149f1fb30:
      if (param_3 != (FText *)0x0) {
        pFVar7 = PCG::Private::GetTypeNameText(&local_38,uVar11);
        pFVar8 = PCG::Private::GetTypeNameText(&local_28,(ushort)param_1->CustomSubtype);
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_48,L"PCGParamData",L"IncompatibleSubtypes",
                            L"Input pin type \'{0}\' is not a compatible with type \'{1}\'");
        pFVar10 = FTextFormat::FTextFormat(&local_18,pFVar9,Default);
        pFVar7 = FText::Format<FText,FText>(&local_58,pFVar10,pFVar8,pFVar7);
        FText::operator=(param_3,pFVar7);
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
        if (local_48.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
        }
      }
      return TypeCompatibleSubtypeNotCompatible;
    }
  }
  return Compatible;
}

// SupportsConversionTo @ 149f1fbe0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

bool __thiscall
FPCGDataTypeInfoParam::SupportsConversionTo
          (FPCGDataTypeInfoParam *this,FPCGDataTypeIdentifier *param_1,
          FPCGDataTypeIdentifier *param_2,TSubclassOf<UPCGSettings> *param_3,FText *param_4)

{
  bool bVar1;
  UClass *pUVar2;
  FPCGDataTypeIdentifier local_28;
  
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  bVar1 = FPCGDataTypeIdentifier::IsSameType(param_2,&local_28);
  if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Ids.AllocatorInstance.Data);
  }
  if (bVar1) {
    if (param_3 != (TSubclassOf<UPCGSettings> *)0x0) {
      pUVar2 = Z_Construct_UClass_UPCGConvertToPointDataSettings_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      (param_3->Class).field0_0x0.DebugPtr = pUVar2;
    }
    bVar1 = true;
  }
  else {
    bVar1 = FPCGDataTypeInfo::SupportsConversionTo
                      ((FPCGDataTypeInfo *)this,param_1,param_2,param_3,param_4);
  }
  return bVar1;
}

// AsId @ 149f3c7a0

FPCGDataTypeBaseId * __cdecl FPCGDataTypeInfoParam::AsId(void)

{
  UPackage *pUVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoParam::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoParam::AsId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoParam::AsId(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoParam.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar1 = Z_Construct_UPackage__Script_PCG();
        Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoParam.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoParam,(UObject *)pUVar1,
                             L"PCGDataTypeInfoParam");
      }
      FPCGDataTypeBaseId::FPCGDataTypeBaseId
                (&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoParam::AsId(void)'
                  ::__l2::Id,Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoParam.OuterSingleton)
      ;
      _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoParam::AsId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoParam::AsId(void)'
              ::__l2::Id;
    }
  }
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoParam::AsId(void)'
          ::__l2::Id;
}

// GetStaticAssociatedClass @ 149f4f1e0

TSubclassOf<UPCGData> __cdecl FPCGDataTypeInfoParam::GetStaticAssociatedClass(void)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RCX;
  
  pUVar1 = UPCGParamData::StaticClass();
  *(UClass **)in_RCX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RCX.field0_0x0;
}

// HasValidSubtype @ 149f50490

bool __cdecl FPCGDataTypeInfoParam::HasValidSubtype(FPCGDataTypeIdentifier *param_1)

{
  FPCGDataTypeBaseId FVar1;
  FPCGDataTypeBaseId *pFVar2;
  
  if ((param_1->Ids).ArrayNum < 2) {
    FVar1 = FPCGDataTypeIdentifier::GetId(param_1);
    pFVar2 = AsId();
    if ((*(UScriptStruct **)FVar1.Struct.field0_0x0 == (pFVar2->Struct).field0_0x0.DebugPtr) &&
       ((uint)param_1->CustomSubtype < 0xf)) {
      return true;
    }
  }
  return false;
}

