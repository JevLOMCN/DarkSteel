// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// CalculateCaretWidth @ 142856fa0

float __cdecl FTextEditHelper::CalculateCaretWidth(float param_1)

{
  float fVar1;
  
  fVar1 = param_1 * __real_3da3d70a;
  if (__real_40000000 <= param_1 * __real_3da3d70a) {
    fVar1 = __real_40000000;
  }
  if (fVar1 <= __real_3f800000) {
    fVar1 = __real_3f800000;
  }
  return fVar1;
}

// GetFontHeight @ 1428768f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

float __cdecl FTextEditHelper::GetFontHeight(FSlateFontInfo *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  FSlateApplication *pFVar5;
  float fVar6;
  TSharedRef<FSlateFontMeasure,1> local_28 [2];
  
  pFVar5 = FSlateApplication::Get();
  lVar1 = *(longlong *)&pFVar5->field_0x60;
  if (*(longlong *)(lVar1 + 8) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar1 + 8),local_28);
  uVar4 = FSlateFontMeasure::GetMaxCharacterHeight(local_28[0].Object,param_1,__real_3f800000);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  return (float)uVar4;
}

// VerifyTextLength @ 14289fcc0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl FTextEditHelper::VerifyTextLength(FText *param_1,FText *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  FString *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  int iVar6;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_a8;
  FTextFormat local_98;
  FText local_88;
  FFormatArgumentValue local_78;
  undefined4 local_58;
  longlong local_50;
  longlong *local_48;
  undefined4 local_40;
  FText local_38;
  FTextFormat local_28;
  
  pFVar3 = FText::ToString(param_1);
  iVar1 = (pFVar3->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  if ((param_3 < 1) || (iVar6 <= param_3)) {
    bVar2 = true;
  }
  else {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"FTextEditHelper",L"TextTooLong",
                        L"This text is too long. It uses {0} characters of {1} allowed.");
    pFVar5 = FTextFormat::FTextFormat(&local_28,pFVar4,Default);
    local_78.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)iVar6;
    local_78.Type = Int;
    local_78.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_78.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_58 = 0;
    local_48 = (longlong *)0x0;
    local_40 = 0;
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 2;
    local_50 = (longlong)param_3;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_a8.AllocatorInstance,2,&local_a8.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_a8.AllocatorInstance.Data,&local_78,2);
    local_98.TextFormatData.Object = (pFVar5->TextFormatData).Object;
    local_98.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar5->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_98.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_88,&local_98,&local_a8);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
    if ((FFormatArgumentValue *)local_a8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
    }
    if (local_78.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_78.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar5->TextFormatData).SharedReferenceCount.ReferenceController);
    FText::operator=(param_2,&local_88);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    bVar2 = false;
  }
  return bVar2;
}

