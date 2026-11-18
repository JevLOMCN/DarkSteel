// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 25

// StaticClass @ 147d46500

UClass * __cdecl UKismetStringTableLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKismetStringTableLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"KismetStringTableLibrary",
               &Z_Registration_Info_UClass_UKismetStringTableLibrary.InnerSingleton,
               StaticRegisterNativesUKismetStringTableLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UKismetStringTableLibrary>,
               InternalVTableHelperCtorCaller<UKismetStringTableLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKismetStringTableLibrary.InnerSingleton;
}

// UKismetStringTableLibrary @ 147d7a520

UKismetStringTableLibrary * __thiscall
UKismetStringTableLibrary::UKismetStringTableLibrary
          (UKismetStringTableLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UKismetStringTableLibrary__6B_;
  return this;
}

// UKismetStringTableLibrary @ 147d7a550

UKismetStringTableLibrary * __thiscall
UKismetStringTableLibrary::UKismetStringTableLibrary
          (UKismetStringTableLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UKismetStringTableLibrary__6B_;
  return this;
}

// ~UKismetStringTableLibrary @ 147d7bb50

void __thiscall
UKismetStringTableLibrary::~UKismetStringTableLibrary(UKismetStringTableLibrary *this)

{
  *(undefined ***)this = &___7UKismetStringTableLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 147d7ed20

bool __thiscall
`UKismetStringTableLibrary::GetRegisteredStringTables'::__l2::<lambda_1>::operator()
          (void *this,FName *param_1,TSharedRef<FStringTable_const_,1> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  
  pFVar2 = *(ForAnyElementType **)this;
  if (((FName *)pFVar2->Data <= param_1) &&
     (param_1 < (FName *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  *(FName *)(pFVar2->Data + (longlong)iVar6 * 8) = *param_1;
  return true;
}

// operator() @ 147d7fea0

bool __thiscall
`UKismetStringTableLibrary::GetKeysFromStringTable'::__l5::<lambda_1>::operator()
          (void *this,FString *param_1,FString *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  
  pFVar2 = *(ForAnyElementType **)this;
  if ((pFVar2->Data <= param_1) &&
     (param_1 < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  ::FString::FString((FString *)(pFVar2->Data + (longlong)iVar6 * 0x10),param_1);
  return true;
}

// operator() @ 147d7ff60

bool __thiscall
`UKismetStringTableLibrary::GetMetaDataIdsFromStringTableEntry'::__l5::<lambda_1>::operator()
          (void *this,FName param_1,FString *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FName local_res10 [3];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if (((FName *)pFVar2->Data <= local_res10) &&
     (local_res10 < (FName *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  *(FName *)(pFVar2->Data + (longlong)iVar6 * 8) = local_res10[0];
  return true;
}

// GetKeysFromStringTable @ 147da63a0

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UKismetStringTableLibrary::GetKeysFromStringTable
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  FStringTableRegistry *this;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res8;
  TSharedPtr<FStringTable_const_,1> local_28;
  code *local_18;
  TArray<FString,TSizedDefaultAllocator<32>_> **local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this = FStringTableRegistry::Get();
  FStringTableRegistry::FindStringTable(this,&local_28,param_1);
  if (local_28.Object != (FStringTable *)0x0) {
    if ((local_28.Object == (FStringTable *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
    local_10 = &local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UKismetStringTableLibrary::GetKeysFromStringTable'::__l5::<lambda_1>,bool,FString_const_&,FString_const_&>
               ::Call;
    local_res8 = __return_storage_ptr__;
    FStringTable::EnumerateSourceStrings
              (local_28.Object,
               (TFunctionRef<bool___cdecl(FString_const_&,FString_const_&)> *)&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetMetaDataIdsFromStringTableEntry @ 147da6720

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
UKismetStringTableLibrary::GetMetaDataIdsFromStringTableEntry
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName param_1,
          FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  FStringTableRegistry *this;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  FStringTable *this_00;
  FTextKey local_res8 [2];
  TArray<FName,TSizedDefaultAllocator<32>_> *local_res20;
  TSharedPtr<FStringTable_const_,1> local_28;
  code *local_18;
  TArray<FName,TSizedDefaultAllocator<32>_> **local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this = FStringTableRegistry::Get();
  FStringTableRegistry::FindStringTable(this,&local_28,param_1);
  if (local_28.Object != (FStringTable *)0x0) {
    this_00 = local_28.Object;
    if ((local_28.Object == (FStringTable *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), this_00 = local_28.Object, bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
    local_10 = &local_res20;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UKismetStringTableLibrary::GetMetaDataIdsFromStringTableEntry'::__l5::<lambda_1>,bool,FName,FString_const_&>
               ::Call;
    local_res20 = __return_storage_ptr__;
    FTextKey::FTextKey(local_res8,param_2);
    FStringTable::EnumerateMetaData
              (this_00,local_res8,(TFunctionRef<bool___cdecl(FName,FString_const_&)> *)&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147da83b0

UClass * __cdecl UKismetStringTableLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKismetStringTableLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"KismetStringTableLibrary",
               &Z_Registration_Info_UClass_UKismetStringTableLibrary.InnerSingleton,
               StaticRegisterNativesUKismetStringTableLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UKismetStringTableLibrary>,
               InternalVTableHelperCtorCaller<UKismetStringTableLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKismetStringTableLibrary.InnerSingleton;
}

// GetRegisteredStringTables @ 147da8940

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
UKismetStringTableLibrary::GetRegisteredStringTables
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FStringTableRegistry *this;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_res8 [4];
  code *local_18;
  TArray<FName,TSizedDefaultAllocator<32>_> **local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this = FStringTableRegistry::Get();
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKismetStringTableLibrary::GetRegisteredStringTables'::__l2::<lambda_1>,bool,FName_const_&,TSharedRef<FStringTable_const_,1>_const_&>
             ::Call;
  local_res8[0] = __return_storage_ptr__;
  FStringTableRegistry::EnumerateStringTables
            (this,(TFunctionRef<bool___cdecl(FName_const_&,TSharedRef<FStringTable_const_,1>_const_&)>
                   *)&local_18);
  return __return_storage_ptr__;
}

// GetTableEntryMetaData @ 147da9d30

FString * __cdecl
UKismetStringTableLibrary::GetTableEntryMetaData
          (FString *__return_storage_ptr__,FName param_1,FString *param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  FStringTableRegistry *this;
  FString *pFVar3;
  FStringTable *this_00;
  FTextKey local_28 [2];
  TSharedPtr<FStringTable_const_,1> local_20;
  
  this = FStringTableRegistry::Get();
  FStringTableRegistry::FindStringTable(this,&local_20,param_1);
  if (local_20.Object == (FStringTable *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    this_00 = local_20.Object;
    if ((local_20.Object == (FStringTable *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), this_00 = local_20.Object, bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    FTextKey::FTextKey(local_28,param_2);
    FStringTable::GetMetaData(this_00,__return_storage_ptr__,local_28,param_3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetTableEntrySourceString @ 147da9e00

FString * __cdecl
UKismetStringTableLibrary::GetTableEntrySourceString
          (FString *__return_storage_ptr__,FName param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  FStringTableRegistry *this;
  FString *pFVar3;
  FStringTable *this_00;
  FTextKey local_res8 [2];
  TSharedPtr<FStringTable_const_,1> local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  this = FStringTableRegistry::Get();
  FStringTableRegistry::FindStringTable(this,&local_18,param_1);
  if (local_18.Object != (FStringTable *)0x0) {
    this_00 = local_18.Object;
    if ((local_18.Object == (FStringTable *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), this_00 = local_18.Object, bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    FTextKey::FTextKey(local_res8,param_2);
    FStringTable::GetSourceString(this_00,local_res8,__return_storage_ptr__);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetTableNamespace @ 147da9ec0

FString * __cdecl
UKismetStringTableLibrary::GetTableNamespace(FString *__return_storage_ptr__,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  FStringTableRegistry *this;
  FString *pFVar3;
  TSharedPtr<FStringTable_const_,1> local_18;
  
  this = FStringTableRegistry::Get();
  FStringTableRegistry::FindStringTable(this,&local_18,param_1);
  if (local_18.Object == (FStringTable *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    if ((local_18.Object == (FStringTable *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    FStringTable::GetNamespace(local_18.Object,__return_storage_ptr__);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// IsRegisteredTableEntry @ 147dadf20

bool __cdecl UKismetStringTableLibrary::IsRegisteredTableEntry(FName param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FStringTableRegistry *this;
  TSharedPtr<FStringTableEntry_const_,1> *pTVar4;
  bool bVar5;
  FStringTable *this_00;
  FTextKey local_res18 [4];
  TSharedPtr<FStringTable_const_,1> local_28;
  TSharedPtr<FStringTableEntry_const_,1> local_18;
  
  bVar2 = false;
  local_res18[0].Index = 0;
  this = FStringTableRegistry::Get();
  FStringTableRegistry::FindStringTable(this,&local_28,param_1);
  if (local_28.Object != (FStringTable *)0x0) {
    this_00 = local_28.Object;
    if ((local_28.Object == (FStringTable *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), this_00 = local_28.Object, bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    FTextKey::FTextKey(local_res18,param_2);
    bVar2 = true;
    pTVar4 = FStringTable::FindEntry(this_00,&local_18,local_res18);
    if (pTVar4->Object != (FStringTableEntry *)0x0) {
      bVar5 = true;
      goto LAB_147dadfc1;
    }
  }
  bVar5 = false;
LAB_147dadfc1:
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return bVar5;
}

// IsRegisteredTableId @ 147dae000

bool __cdecl UKismetStringTableLibrary::IsRegisteredTableId(FName param_1)

{
  FStringTableRegistry *this;
  TSharedPtr<FStringTable_const_,1> local_18;
  
  this = FStringTableRegistry::Get();
  FStringTableRegistry::FindStringTable(this,&local_18,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return local_18.Object != (FStringTable *)0x0;
}

// StaticRegisterNativesUKismetStringTableLibrary @ 147dc42d0

void __cdecl UKismetStringTableLibrary::StaticRegisterNativesUKismetStringTableLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UKismetStringTableLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetKeysFromStringTable @ 147dfb110

void __cdecl
UKismetStringTableLibrary::execGetKeysFromStringTable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FStringTableRegistry *this;
  FName local_res10;
  FString **local_res18 [2];
  FString *local_48;
  undefined8 local_40;
  TSharedPtr<FStringTable_const_,1> local_38;
  code *local_28;
  undefined8 **local_20;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar3 = local_res10;
  local_48 = (FString *)0x0;
  local_40 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FStringTableRegistry::Get();
  FStringTableRegistry::FindStringTable(this,&local_38,FVar3);
  if (local_38.Object != (FStringTable *)0x0) {
    if ((local_38.Object == (FStringTable *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_res18[0] = &local_48;
    local_20 = local_res18;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`UKismetStringTableLibrary::GetKeysFromStringTable'::__l5::<lambda_1>,bool,FString_const_&,FString_const_&>
               ::Call;
    FStringTable::EnumerateSourceStrings
              (local_38.Object,
               (TFunctionRef<bool___cdecl(FString_const_&,FString_const_&)> *)&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (param_3 == &local_48) {
  }
  else {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FString **)param_3 = local_48;
    *(int *)((longlong)param_3 + 8) = (int)local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_40._4_4_;
    local_48 = (FString *)0x0;
    local_40 = 0;
    local_40._0_4_ = 0;
  }
  DestructItems<FString,int>(local_48,(int)local_40);
  if (local_48 != (FString *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execGetMetaDataIdsFromStringTableEntry @ 147dfb800

void __cdecl
UKismetStringTableLibrary::execGetMetaDataIdsFromStringTableEntry
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FStringTableRegistry *this;
  FStringTable *this_00;
  FTextKey local_res10 [2];
  FName local_res18;
  void **local_res20;
  void *local_58;
  undefined8 local_50;
  FString local_48;
  TSharedPtr<FStringTable_const_,1> local_38;
  code *local_28;
  void ***local_20;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  FVar3 = local_res18;
  local_58 = (void *)0x0;
  local_50 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FStringTableRegistry::Get();
  FStringTableRegistry::FindStringTable(this,&local_38,FVar3);
  if (local_38.Object != (FStringTable *)0x0) {
    this_00 = local_38.Object;
    if ((local_38.Object == (FStringTable *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), this_00 = local_38.Object, bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_res20 = &local_58;
    local_20 = &local_res20;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`UKismetStringTableLibrary::GetMetaDataIdsFromStringTableEntry'::__l5::<lambda_1>,bool,FName,FString_const_&>
               ::Call;
    FTextKey::FTextKey(local_res10,&local_48);
    FStringTable::EnumerateMetaData
              (this_00,local_res10,(TFunctionRef<bool___cdecl(FName,FString_const_&)> *)&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (param_3 != &local_58) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(void **)param_3 = local_58;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_50._4_4_;
    local_50 = 0;
    local_58 = (void *)0x0;
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetRegisteredStringTables @ 147dfd9f0

void __cdecl
UKismetStringTableLibrary::execGetRegisteredStringTables
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FStringTableRegistry *this;
  void **local_res10 [3];
  void *local_28;
  undefined8 local_20;
  code *local_18;
  void ***local_10;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FStringTableRegistry::Get();
  local_res10[0] = &local_28;
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKismetStringTableLibrary::GetRegisteredStringTables'::__l2::<lambda_1>,bool,FName_const_&,TSharedRef<FStringTable_const_,1>_const_&>
             ::Call;
  FStringTableRegistry::EnumerateStringTables
            (this,(TFunctionRef<bool___cdecl(FName_const_&,TSharedRef<FStringTable_const_,1>_const_&)>
                   *)&local_18);
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(void **)param_3 = local_28;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_20._4_4_;
    local_20 = 0;
    local_28 = (void *)0x0;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execGetTableEntryMetaData @ 147dff760

void __cdecl
UKismetStringTableLibrary::execGetTableEntryMetaData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  FStringTableRegistry *this;
  FStringTable *this_00;
  FTextKey local_res10 [2];
  FName local_res18;
  FName local_res20;
  FString local_58;
  FString local_48;
  TSharedPtr<FStringTable_const_,1> local_38;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  FVar4 = local_res20;
  FVar3 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FStringTableRegistry::Get();
  FStringTableRegistry::FindStringTable(this,&local_38,FVar4);
  if (local_38.Object == (FStringTable *)0x0) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
  }
  else {
    this_00 = local_38.Object;
    if ((local_38.Object == (FStringTable *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), this_00 = local_38.Object, bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FTextKey::FTextKey(local_res10,&local_48);
    FStringTable::GetMetaData(this_00,&local_58,local_res10,FVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (param_3 != &local_58) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_58.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_58.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetTableEntrySourceString @ 147dff940

void __cdecl
UKismetStringTableLibrary::execGetTableEntrySourceString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FStringTableRegistry *this;
  FStringTable *this_00;
  FTextKey local_res10 [2];
  FName local_res18 [2];
  FString local_48;
  FString local_38;
  TSharedPtr<FStringTable_const_,1> local_28;
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  FVar3 = local_res18[0];
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FStringTableRegistry::Get();
  FStringTableRegistry::FindStringTable(this,&local_28,FVar3);
  if (local_28.Object != (FStringTable *)0x0) {
    this_00 = local_28.Object;
    if ((local_28.Object == (FStringTable *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), this_00 = local_28.Object, bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FTextKey::FTextKey(local_res10,&local_38);
    FStringTable::GetSourceString(this_00,local_res10,&local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (param_3 != &local_48) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_48.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_48.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetTableNamespace @ 147dffad0

void __cdecl
UKismetStringTableLibrary::execGetTableNamespace(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FStringTableRegistry *this;
  FName local_res10;
  FString local_28;
  TSharedPtr<FStringTable_const_,1> local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FStringTableRegistry::Get();
  FStringTableRegistry::FindStringTable(this,&local_18,FVar3);
  if (local_18.Object == (FStringTable *)0x0) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  else {
    if ((local_18.Object == (FStringTable *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FStringTable::GetNamespace(local_18.Object,&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execIsRegisteredTableEntry @ 147e05c40

void __cdecl
UKismetStringTableLibrary::execIsRegisteredTableEntry
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FStringTableRegistry *this;
  TSharedPtr<FStringTableEntry_const_,1> *pTVar5;
  FStringTable *this_00;
  undefined1 uVar6;
  FTextKey local_res10 [2];
  FName local_res18;
  FString local_38;
  TSharedPtr<FStringTable_const_,1> local_28;
  TSharedPtr<FStringTableEntry_const_,1> local_18;
  
  bVar4 = false;
  local_res10[0].Index = 0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  FVar3 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FStringTableRegistry::Get();
  FStringTableRegistry::FindStringTable(this,&local_28,FVar3);
  if (local_28.Object != (FStringTable *)0x0) {
    this_00 = local_28.Object;
    if ((local_28.Object == (FStringTable *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), this_00 = local_28.Object, bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FTextKey::FTextKey(local_res10,&local_38);
    bVar4 = true;
    pTVar5 = FStringTable::FindEntry(this_00,&local_18,local_res10);
    if (pTVar5->Object != (FStringTableEntry *)0x0) {
      uVar6 = 1;
      goto LAB_147e05d7f;
    }
  }
  uVar6 = 0;
LAB_147e05d7f:
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  *(undefined1 *)param_3 = uVar6;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execIsRegisteredTableId @ 147e05dc0

void __cdecl
UKismetStringTableLibrary::execIsRegisteredTableId(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FStringTableRegistry *this;
  FName local_res10;
  TSharedPtr<FStringTable_const_,1> local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FStringTableRegistry::Get();
  FStringTableRegistry::FindStringTable(this,&local_18,FVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  *(bool *)param_3 = local_18.Object != (FStringTable *)0x0;
  return;
}

