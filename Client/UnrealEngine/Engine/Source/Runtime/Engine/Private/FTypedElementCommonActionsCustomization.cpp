// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// ~FTypedElementCommonActionsCustomization @ 147b3d2b0

void __thiscall
FTypedElementCommonActionsCustomization::~FTypedElementCommonActionsCustomization
          (FTypedElementCommonActionsCustomization *this)

{
  return;
}

// CopyElements @ 147b4cd40

void __thiscall
FTypedElementCommonActionsCustomization::CopyElements
          (FTypedElementCommonActionsCustomization *this,ITypedElementWorldInterface *param_1,
          TArrayView<FTypedElementHandle_const_,int> *param_2,FOutputDevice *param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_2->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_10 = param_2->ArrayNum;
  uStack_c = *(undefined4 *)&param_2->field_0xc;
  (**(code **)((longlong)*param_1 + 0x188))(param_1,&local_18,param_3);
  return;
}

// DeleteElements @ 147b4fde0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FTypedElementCommonActionsCustomization::DeleteElements
          (FTypedElementCommonActionsCustomization *this,ITypedElementWorldInterface *param_1,
          TArrayView<FTypedElementHandle_const_,int> *param_2,UWorld *param_3,
          UTypedElementSelectionSet *param_4,FTypedElementDeletionOptions *param_5)

{
  undefined1 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_2->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_10 = param_2->ArrayNum;
  uStack_c = *(undefined4 *)&param_2->field_0xc;
  uVar1 = (**(code **)((longlong)*param_1 + 0x148))(param_1,&local_18,param_3,param_4,param_5);
  return (bool)uVar1;
}

// DuplicateElements @ 147b5e3b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTypedElementCommonActionsCustomization::DuplicateElements
          (FTypedElementCommonActionsCustomization *this,ITypedElementWorldInterface *param_1,
          TArrayView<FTypedElementHandle_const_,int> *param_2,UWorld *param_3,
          TVector<double> *param_4,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *param_5)

{
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_2->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_10 = param_2->ArrayNum;
  uStack_c = *(undefined4 *)&param_2->field_0xc;
  (**(code **)((longlong)*param_1 + 0x170))(param_1,&local_18,param_3,param_4,param_5);
  return;
}

// GetPasteImporter @ 147b6a7e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FWorldElementPasteImporter,1> * __thiscall
FTypedElementCommonActionsCustomization::GetPasteImporter
          (FTypedElementCommonActionsCustomization *this,
          TSharedPtr<FWorldElementPasteImporter,1> *__return_storage_ptr__,
          ITypedElementWorldInterface *param_1,
          TSharedPtr<TTypedElementList<FTypedElementHandle>_const_,1> *param_2,UWorld *param_3)

{
  (**(code **)((longlong)*param_1 + 400))(param_1);
  return __return_storage_ptr__;
}

