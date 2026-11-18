// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticStruct @ 14750f4b0

UScriptStruct * __cdecl FAnimSubsystem_Base::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimSubsystem_Base.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimSubsystem_Base.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimSubsystem_Base,(UObject *)pUVar1,
                         L"AnimSubsystem_Base");
  }
  return Z_Registration_Info_UScriptStruct_FAnimSubsystem_Base.OuterSingleton;
}

// OnPostLoadDefaults @ 14750f4f0

void __thiscall
FAnimSubsystem_Base::OnPostLoadDefaults
          (FAnimSubsystem_Base *this,FAnimSubsystemPostLoadDefaultsContext *param_1)

{
  PatchValueHandlers(this,*(UClass **)&param_1->DefaultAnimInstance->field_0x10);
  return;
}

// FAnimSubsystem_Base @ 14752f290

FAnimSubsystem_Base * __thiscall
FAnimSubsystem_Base::FAnimSubsystem_Base(FAnimSubsystem_Base *this,FAnimSubsystem_Base *param_1)

{
  TArray<FExposedValueHandler,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  this->_padding_ = (longlong)&___7FAnimSubsystem_Base__6B_;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->ValueHandlersCriticalSection,4000);
  pTVar1 = &this->ExposedValueHandlers;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ExposedValueHandlers).ArrayMax;
  iVar3 = (param_1->ExposedValueHandlers).ArrayNum;
  _Src = (param_1->ExposedValueHandlers).AllocatorInstance.Data;
  (this->ExposedValueHandlers).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
  }
  return this;
}

// operator= @ 147534030

FAnimSubsystem_Base * __thiscall
FAnimSubsystem_Base::operator=(FAnimSubsystem_Base *this,FAnimSubsystem_Base *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  TArray<FExposedValueHandler,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  lpCriticalSection = &this->ValueHandlersCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lpCriticalSection_00 = &param_1->ValueHandlersCriticalSection;
    if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      pTVar1 = &this->ExposedValueHandlers;
      if (pTVar1 != &param_1->ExposedValueHandlers) {
        iVar3 = (param_1->ExposedValueHandlers).ArrayNum;
        piVar2 = &(this->ExposedValueHandlers).ArrayMax;
        _Src = (param_1->ExposedValueHandlers).AllocatorInstance.Data;
        (this->ExposedValueHandlers).ArrayNum = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
          if (iVar3 != 0) {
            memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
          }
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return this;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PatchValueHandlers @ 1475719e0

void __thiscall FAnimSubsystem_Base::PatchValueHandlers(FAnimSubsystem_Base *this,UClass *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FExposedValueHandler,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ulong64 uVar3;
  code *pcVar4;
  FField *pFVar5;
  bool bVar6;
  int iVar7;
  void *pvVar8;
  UPackage *pUVar9;
  FField *pFVar10;
  FFieldObjectUnion *pFVar11;
  TFieldIterator<FProperty> local_48;
  
  lpCriticalSection = &this->ValueHandlersCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar1 = &this->ExposedValueHandlers;
  piVar2 = &(this->ExposedValueHandlers).ArrayMax;
  (this->ExposedValueHandlers).ArrayNum = 0;
  if ((this->ExposedValueHandlers).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  pvVar8 = UClass::GetSparseClassData(param_1,ReturnIfNull);
  if ((pvVar8 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SparseClassData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSubsystem_Base.cpp"
                         ,0x15,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_48.Struct = (UStruct *)UClass::GetSparseClassDataStruct(param_1);
  if ((UScriptStruct *)local_48.Struct == (UScriptStruct *)0x0) {
    local_48.Field = (FField *)0x0;
  }
  else {
    local_48.Field = (FField *)((UScriptStruct *)local_48.Struct)->_padding_;
  }
  local_48.InterfaceIndex = -1;
  local_48.bIncludeSuper = true;
  local_48.bIncludeDeprecated = true;
  local_48.bIncludeInterface = false;
  TFieldIterator<FProperty>::IterateToNext(&local_48);
  pFVar5 = local_48.Field;
  do {
    local_48.Field = pFVar5;
    if (pFVar5 == (FField *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147571c72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    if ((((uint)(int)pFVar5->ClassPrivate->CastFlags >> 0x14 & 1) != 0) && (pFVar5 != (FField *)0x0)
       ) {
      uVar3 = pFVar5[2].Owner.Container.Unknown;
      if (Z_Registration_Info_UScriptStruct_FAnimNodeExposedValueHandler.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar9 = Z_Construct_UPackage__Script_Engine();
        Z_Registration_Info_UScriptStruct_FAnimNodeExposedValueHandler.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler,
                             (UObject *)pUVar9,L"AnimNodeExposedValueHandler");
        if (Z_Registration_Info_UScriptStruct_FAnimNodeExposedValueHandler.OuterSingleton ==
            (UScriptStruct *)0x0) goto LAB_147571c24;
      }
      iVar7 = (int)(Z_Registration_Info_UScriptStruct_FAnimNodeExposedValueHandler.OuterSingleton)->
                   _padding_;
      if ((*(int *)(uVar3 + 0x38) < iVar7) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(uVar3 + 0x30) + (longlong)iVar7 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FAnimNodeExposedValueHandler.OuterSingleton)->
           _padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        iVar7 = (this->ExposedValueHandlers).ArrayNum;
        if (iVar7 == *piVar2) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->ExposedValueHandlers).ArrayNum = iVar7 + 1;
        pFVar11 = (FFieldObjectUnion *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10);
        DefaultConstructItems<FExposedValueHandler,int>(pFVar11,1);
        *pFVar11 = pFVar5[2].Owner.Container;
        if (((int)pFVar5[1]._padding_ < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pvVar8 == (void *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar10 = (FField *)
                  ((longlong)*(int *)((longlong)&pFVar5[1].Owner.Container + 4) + (longlong)pvVar8);
        pFVar11[1].Field = pFVar10;
        (**(code **)(pFVar10->_padding_ + 8))(pFVar10,param_1);
      }
    }
LAB_147571c24:
    local_48.Field = pFVar5->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_48);
    pFVar5 = local_48.Field;
  } while( true );
}

