// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// JsonArrayToUStruct<FDS_ServerInfo> @ 14bba4ff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl
FJsonObjectConverter::JsonArrayToUStruct<FDS_ServerInfo>
          (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FDS_ServerInfo,TSizedDefaultAllocator<32>_> *param_2,long64 param_3,long64 param_4,
          bool param_5,FText *param_6,
          TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
          *param_7)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UScriptStruct *pUVar7;
  longlong *plVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_188;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_178;
  longlong local_168;
  longlong local_160;
  TSharedRef<FJsonObject,1> local_158;
  undefined1 local_148 [8];
  FText local_140;
  FTextFormat local_130;
  FText local_120;
  FTextFormat local_110;
  FText local_100;
  FFormatArgumentValue local_f0;
  FFormatArgumentValue local_c8;
  undefined4 local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FTextFormat local_68;
  FTextFormat local_58;
  
  iVar11 = param_2->ArrayNum;
  uVar14 = param_1->ArrayNum;
  if (iVar11 < (int)uVar14) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,uVar14 - iVar11,&param_2->AllocatorInstance,&param_2->ArrayNum,
                       &param_2->ArrayMax);
    DefaultConstructItems<FDS_ServerInfo,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x68,uVar14 - iVar11);
  }
  else {
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    if ((int)uVar14 < iVar11) {
      uVar13 = iVar11 - uVar14;
      if (((int)(uVar13 | uVar14) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      if (uVar13 != 0) {
        TArray<FDS_ServerInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl(param_2,uVar14,uVar13);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax);
      }
    }
  }
  iVar11 = param_1->ArrayNum;
  uVar14 = 0;
  if (0 < iVar11) {
    local_160 = 0;
    lVar15 = 0;
    local_168 = 0;
    do {
      lVar3 = local_160;
      uVar13 = 0;
      if ((int)uVar14 < iVar11) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar12 = (param_1->AllocatorInstance).Data + lVar15;
      if ((*(longlong *)pFVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      if (*(int *)(*(longlong *)pFVar12 + 8) != 6) {
        if (2 < (byte)LogJson._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&`public:_static_bool___cdecl_FJsonObjectConverter::JsonArrayToUStruct<FDS_ServerInfo>(TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<FDS_ServerInfo,TSizedDefaultAllocator<32>_>*___ptr64,__int64,__int64,bool,FText*___ptr64,TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const&___ptr64,FProperty*___ptr64,void*___ptr64),FDefaultDelegateUserPolicy>_const*___ptr64)'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogJson);
        }
        if (param_6 == (FText *)0x0) {
          return false;
        }
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_78,L"JsonObjectConverter",L"FailJsonArrayElementObject",
                            L"JsonArrayToUStruct - Array element [{0}] was not an object.");
        pFVar10 = FTextFormat::FTextFormat(&local_58,pFVar9,Default);
        local_f0.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)(int)uVar14;
        local_f0.Type = Int;
        local_f0.TextValue.field0_0x0.TypedValue.TextData.Reference =
             (TRefCountPtr<ITextData>)(ITextData *)0x0;
        local_f0.TextValue.field0_0x0.TypedValue.Flags = 0;
        local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_178.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_178.AllocatorInstance,1,&local_178.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_178.AllocatorInstance.Data,&local_f0,1);
        local_110.TextFormatData.Object = (pFVar10->TextFormatData).Object;
        local_110.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar10->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_110.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_110.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_110.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_100,&local_110,&local_178);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
        if ((FFormatArgumentValue *)local_178.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_178.AllocatorInstance.Data);
        }
        if (local_f0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_f0.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar10->TextFormatData).SharedReferenceCount.ReferenceController);
        FText::operator=(param_6,&local_100);
        if (local_100.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
        }
LAB_14bba564a:
        if (local_78.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
        }
        return false;
      }
      uVar13 = 0;
      if ((int)uVar14 < param_2->ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      pUVar7 = FDS_ServerInfo::StaticStruct();
      if ((*(longlong *)pFVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      plVar8 = (longlong *)(**(code **)**(undefined8 **)pFVar12)();
      if ((*plVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      local_158.Object = (FJsonObject *)*plVar8;
      local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)plVar8[1];
      if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_158.Object == (FJsonObject *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      bVar4 = JsonObjectToUStruct(&local_158,(UStruct *)pUVar7,pFVar1 + lVar3,param_3,param_4,
                                  param_5,param_6,param_7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.SharedReferenceCount.ReferenceController);
      if (!bVar4) {
        if (2 < (byte)LogJson._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&`public:_static_bool___cdecl_FJsonObjectConverter::JsonArrayToUStruct<FDS_ServerInfo>(TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<FDS_ServerInfo,TSizedDefaultAllocator<32>_>*___ptr64,__int64,__int64,bool,FText*___ptr64,TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const&___ptr64,FProperty*___ptr64,void*___ptr64),FDefaultDelegateUserPolicy>_const*___ptr64)'
                      ::__l23::LOG_Static,(FLogCategoryBase *)&LogJson);
        }
        if (param_6 == (FText *)0x0) {
          return false;
        }
        local_140.TextData.Reference = (param_6->TextData).Reference;
        if (local_140.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_140.TextData.Reference + 8))
                    (local_140.TextData.Reference,local_148);
        }
        local_140.Flags = param_6->Flags;
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_88,L"JsonObjectConverter",L"FailJsonArrayElementConversion",
                            L"JsonArrayToUStruct - Unable to convert element [{0}].\n{1}");
        pFVar10 = FTextFormat::FTextFormat(&local_68,pFVar9,Default);
        local_c8.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)(int)uVar14;
        local_c8.Type = Int;
        local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference =
             (TRefCountPtr<ITextData>)(ITextData *)0x0;
        local_c8.TextValue.field0_0x0.TypedValue.Flags = 0;
        local_a8 = 4;
        FText::FText(&local_98,&local_140);
        if ((local_98.TextData.Reference == (ITextData *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_188.ArrayNum = 2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,2,0,&local_188.AllocatorInstance,2,&local_188.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_188.AllocatorInstance.Data,&local_c8,2);
        local_130.TextFormatData.Object = (pFVar10->TextFormatData).Object;
        local_130.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar10->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_130.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_130.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_130.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_120,&local_130,&local_188);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_188.AllocatorInstance.Data,local_188.ArrayNum);
        if ((FFormatArgumentValue *)local_188.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_188.AllocatorInstance.Data);
        }
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        }
        if (local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar10->TextFormatData).SharedReferenceCount.ReferenceController);
        if (local_140.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
        }
        FText::operator=(param_6,&local_120);
        local_78.TextData.Reference = local_88.TextData.Reference;
        if (local_120.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
          local_78.TextData.Reference = local_88.TextData.Reference;
        }
        goto LAB_14bba564a;
      }
      uVar14 = uVar14 + 1;
      local_160 = local_160 + 0x68;
      local_168 = local_168 + 1;
      lVar15 = lVar15 + 0x10;
      iVar11 = param_1->ArrayNum;
    } while ((int)uVar14 < iVar11);
  }
  return true;
}

