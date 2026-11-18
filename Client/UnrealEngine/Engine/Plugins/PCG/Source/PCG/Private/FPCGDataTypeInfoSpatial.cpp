// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// GetAssociatedLegacyType @ 149789a10

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall
FPCGDataTypeInfoSpatial::GetAssociatedLegacyType(FPCGDataTypeInfoSpatial *this)

{
  return Spatial;
}

// StaticStruct @ 149852e40

UScriptStruct * __cdecl FPCGDataTypeInfoSpatial::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpatial.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpatial.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoSpatial,(UObject *)pUVar1,
                         L"PCGDataTypeInfoSpatial");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpatial.OuterSingleton;
}

// GetAssociatedClass @ 149852ec0

TSubclassOf<UPCGData> __thiscall
FPCGDataTypeInfoSpatial::GetAssociatedClass(FPCGDataTypeInfoSpatial *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = UPCGSpatialData::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RDX.field0_0x0;
}

// SupportsConversionTo @ 149853040

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

bool __thiscall
FPCGDataTypeInfoSpatial::SupportsConversionTo
          (FPCGDataTypeInfoSpatial *this,FPCGDataTypeIdentifier *param_1,
          FPCGDataTypeIdentifier *param_2,TSubclassOf<UPCGSettings> *param_3,FText *param_4)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UClass *pUVar3;
  int iVar4;
  int iVar5;
  ForAnyElementType FVar7;
  undefined1 local_28 [8];
  FPCGDataTypeIdentifier local_20;
  undefined8 uVar6;
  
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_20,Point);
  bVar2 = FPCGDataTypeIdentifier::IsValid(param_2);
  iVar4 = local_20.Ids.ArrayNum;
  iVar5 = iVar4;
  if (bVar2) {
LAB_1498530b4:
    if ((param_2->Ids).ArrayNum == iVar5) {
      bVar2 = FPCGDataTypeIdentifier::SupportsType(param_2,&local_20);
      if (bVar2) goto LAB_1498530ca;
    }
    bVar2 = false;
  }
  else {
    if (iVar4 != 0) {
      pFVar1 = local_20.Ids.AllocatorInstance.Data + (longlong)iVar4 * 8;
      uVar6 = local_20.Ids._8_8_;
      FVar7.Data = local_20.Ids.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar6 != iVar4) {
          `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_28);
          uVar6 = local_20.Ids._8_8_;
        }
        iVar5 = (int)uVar6;
        if (FVar7.Data == pFVar1) goto LAB_1498530b4;
        if (*(longlong *)FVar7.Data == 0) break;
        FVar7.Data = FVar7.Data + 8;
      }
    }
LAB_1498530ca:
    bVar2 = true;
  }
  if (local_20.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Ids.AllocatorInstance.Data);
  }
  if (bVar2) {
    if (param_3 != (TSubclassOf<UPCGSettings> *)0x0) {
      pUVar3 = Z_Construct_UClass_UPCGCollapseSettings_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (param_3->Class).field0_0x0.DebugPtr = pUVar3;
    }
    return true;
  }
  return false;
}

// AsId @ 14989f590

FPCGDataTypeBaseId * __cdecl FPCGDataTypeInfoSpatial::AsId(void)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar4;
  
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSpatial::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSpatial::AsId(void)'
            ::__l2::Id;
  }
  _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSpatial::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSpatial::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSpatial::AsId(void)'
            ::__l2::Id;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpatial.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpatial.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoSpatial,(UObject *)pUVar3,
                         L"PCGDataTypeInfoSpatial");
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpatial.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14989f613;
  }
  else {
LAB_14989f613:
    TVar4.DebugPtr = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpatial.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar3,
                           L"PCGDataTypeInfo");
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_14989f66a;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_;
    if (((int)(TVar4.DebugPtr)->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)((TVar4.DebugPtr)->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14989f66c;
  }
LAB_14989f66a:
  TVar4.DebugPtr = (UScriptStruct *)0x0;
LAB_14989f66c:
  `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSpatial::AsId(void)'
  ::__l2::Id.Struct.field0_0x0 =
       (TObjectPtr<UScriptStruct_const_>)(TObjectPtr<UScriptStruct_const_>)TVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar4.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSpatial::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSpatial::AsId(void)'
          ::__l2::Id;
}

// GetStaticAssociatedClass @ 1498c71c0

TSubclassOf<UPCGData> __cdecl FPCGDataTypeInfoSpatial::GetStaticAssociatedClass(void)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RCX;
  
  pUVar1 = UPCGSpatialData::StaticClass();
  *(UClass **)in_RCX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RCX.field0_0x0;
}

