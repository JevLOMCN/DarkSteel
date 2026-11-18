// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 1

// Format<unsigned_int,FText> @ 146b3c310

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::Format<unsigned_int,FText>
          (FText *__return_storage_ptr__,FTextFormat *param_1,uint param_2,FText *param_3)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_68;
  FTextFormat local_58;
  FFormatArgumentValue local_48;
  undefined4 local_28;
  FText local_18;
  
  local_48.Type = UInt;
  local_48.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_48.TextValue.field0_0x0.TypedValue.Flags = 0;
  local_48.field1_0x8.IntValue._4_4_ = 0;
  local_48.field1_0x8.FloatValue = (float)param_2;
  local_28 = 4;
  FText(&local_18,param_3);
  if (local_18.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_68.AllocatorInstance,2,&local_68.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_68.AllocatorInstance.Data,&local_48,2);
  local_58.TextFormatData.Object = (param_1->TextFormatData).Object;
  local_58.TextFormatData.SharedReferenceCount.ReferenceController =
       (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_58.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  Format(__return_storage_ptr__,&local_58,&local_68);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if ((FFormatArgumentValue *)local_68.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (local_48.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_48.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar1 = (param_3->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return __return_storage_ptr__;
}

