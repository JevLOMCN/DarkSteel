// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 7

// ~FIKRigLogger @ 14df1be50

void __thiscall FIKRigLogger::~FIKRigLogger(FIKRigLogger *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FText,int>
            ((FText *)(this->Messages).AllocatorInstance.Data,(this->Messages).ArrayNum);
  pFVar1 = (this->Messages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FText,int>
            ((FText *)(this->Warnings).AllocatorInstance.Data,(this->Warnings).ArrayNum);
  pFVar1 = (this->Warnings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FText,int>((FText *)(this->Errors).AllocatorInstance.Data,(this->Errors).ArrayNum);
  pFVar1 = (this->Errors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Clear @ 14df2a7f0

void __thiscall FIKRigLogger::Clear(FIKRigLogger *this)

{
  int *piVar1;
  
  DestructItems<FText,int>((FText *)(this->Errors).AllocatorInstance.Data,(this->Errors).ArrayNum);
  piVar1 = &(this->Errors).ArrayMax;
  (this->Errors).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Errors).AllocatorInstance,0,piVar1);
  }
  DestructItems<FText,int>
            ((FText *)(this->Warnings).AllocatorInstance.Data,(this->Warnings).ArrayNum);
  piVar1 = &(this->Warnings).ArrayMax;
  (this->Warnings).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Warnings).AllocatorInstance,0,piVar1);
  }
  DestructItems<FText,int>
            ((FText *)(this->Messages).AllocatorInstance.Data,(this->Messages).ArrayNum);
  piVar1 = &(this->Messages).ArrayMax;
  (this->Messages).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Messages).AllocatorInstance,0,piVar1);
  }
  return;
}

// GetLogTarget @ 14df39690

FName __thiscall FIKRigLogger::GetLogTarget(FIKRigLogger *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->LogName;
  return in_RDX;
}

// LogError @ 14df48c40

void __thiscall FIKRigLogger::LogError(FIKRigLogger *this,FText *param_1)

{
  int *piVar1;
  FText *pFVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMessageLog *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  TSharedRef<FTokenizedMessage,1> local_48;
  FMessageLog local_38;
  
  if (this->LogName != (FName)0x0) {
    pFVar7 = FMessageLog::FMessageLog(&local_38,&this->LogName);
    pFVar7 = FMessageLog::SuppressLoggingToOutputLog(pFVar7,true);
    FMessageLog::Error(pFVar7,&local_48,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    FMessageLog::~FMessageLog(&local_38);
  }
  pFVar2 = (FText *)(this->Errors).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->Errors).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Errors).ArrayNum;
  piVar1 = &(this->Errors).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Errors).AllocatorInstance,piVar1);
  }
  (this->Errors).ArrayNum = iVar6 + 1;
  pFVar8 = (this->Errors).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(longlong *)pFVar8 = 0;
  pIVar3 = (param_1->TextData).Reference;
  *(ITextData **)pFVar8 = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
  }
  *(uint *)(pFVar8 + 8) = param_1->Flags;
  return;
}

// LogInfo @ 14df48d70

void __thiscall FIKRigLogger::LogInfo(FIKRigLogger *this,FText *param_1)

{
  int *piVar1;
  FText *pFVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMessageLog *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  TSharedRef<FTokenizedMessage,1> local_48;
  FMessageLog local_38;
  
  if (this->LogName != (FName)0x0) {
    pFVar7 = FMessageLog::FMessageLog(&local_38,&this->LogName);
    pFVar7 = FMessageLog::SuppressLoggingToOutputLog(pFVar7,true);
    FMessageLog::Info(pFVar7,&local_48,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    FMessageLog::~FMessageLog(&local_38);
  }
  pFVar2 = (FText *)(this->Messages).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->Messages).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Messages).ArrayNum;
  piVar1 = &(this->Messages).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Messages).AllocatorInstance,piVar1);
  }
  (this->Messages).ArrayNum = iVar6 + 1;
  pFVar8 = (this->Messages).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(longlong *)pFVar8 = 0;
  pIVar3 = (param_1->TextData).Reference;
  *(ITextData **)pFVar8 = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
  }
  *(uint *)(pFVar8 + 8) = param_1->Flags;
  return;
}

// LogWarning @ 14df48ea0

void __thiscall FIKRigLogger::LogWarning(FIKRigLogger *this,FText *param_1)

{
  int *piVar1;
  FText *pFVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMessageLog *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  TSharedRef<FTokenizedMessage,1> local_48;
  FMessageLog local_38;
  
  if (this->LogName != (FName)0x0) {
    pFVar7 = FMessageLog::FMessageLog(&local_38,&this->LogName);
    pFVar7 = FMessageLog::SuppressLoggingToOutputLog(pFVar7,true);
    FMessageLog::Warning(pFVar7,&local_48,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    FMessageLog::~FMessageLog(&local_38);
  }
  pFVar2 = (FText *)(this->Warnings).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->Warnings).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Warnings).ArrayNum;
  piVar1 = &(this->Warnings).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Warnings).AllocatorInstance,piVar1);
  }
  (this->Warnings).ArrayNum = iVar6 + 1;
  pFVar8 = (this->Warnings).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(longlong *)pFVar8 = 0;
  pIVar3 = (param_1->TextData).Reference;
  *(ITextData **)pFVar8 = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
  }
  *(uint *)(pFVar8 + 8) = param_1->Flags;
  return;
}

// SetLogTarget @ 14df554f0

void __thiscall FIKRigLogger::SetLogTarget(FIKRigLogger *this,UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FName *pFVar5;
  FText *pFVar6;
  FName local_res10;
  FName local_res18;
  FText local_38;
  FText local_28;
  FText local_18;
  
  FText::FText(&local_38);
  if (param_1 != (UObject *)0x0) {
    pUVar4 = UIKRigDefinition::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      pFVar5 = ::FName::FName(&local_res10,"IKRig_",*(int *)&param_1->field_0xc);
      this->LogName = *pFVar5;
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_28,L"FIKRigLogger",L"IKRigLogName",L"IK Rig Log");
      FText::operator=(&local_38,pFVar6);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      }
      goto LAB_14df55642;
    }
    if (param_1 != (UObject *)0x0) {
      pUVar4 = UIKRetargeter::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        pFVar5 = ::FName::FName(&local_res18,"IKRetarget_",*(int *)&param_1->field_0xc);
        this->LogName = *pFVar5;
        pFVar6 = FText::AsLocalizable_Advanced_LocText
                           (&local_18,L"FIKRigLogger",L"IKRetargetLogName",L"IK Retarget Log");
        FText::operator=(&local_38,pFVar6);
        if (local_18.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
        }
        goto LAB_14df55642;
      }
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\IKRigLogger.cpp"
                     ,0x20,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14df55642:
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

