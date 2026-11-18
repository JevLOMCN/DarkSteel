// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 11

// Call @ 14a6d6130

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::EnhancedInput::DumpAllKeyProfilesToLog'::__l2::<lambda_1>,void,IEnhancedInputSubsystemInterface_*>
::Call(void *param_1,IEnhancedInputSubsystemInterface **param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)(**(code **)((*param_2)->_padding_ + 0x18))();
  if (plVar2 != (longlong *)0x0) {
    lVar1 = *plVar2;
    uVar3 = (**(code **)(lVar1 + 0x348))(plVar2);
    plVar2 = (longlong *)(**(code **)(lVar1 + 0x360))(plVar2,uVar3);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a6d6180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x2b8))(plVar2,*(code **)(*plVar2 + 0x2b8));
      return;
    }
  }
  return;
}

// Call @ 14a6d6190

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UEnhancedInputPlatformSettings::GetAllMappingContextRedirects'::__l2::<lambda_1>,void,UEnhancedInputPlatformData_const_&>
::Call(void *param_1,UEnhancedInputPlatformData *param_2)

{
  TMap<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>_>
  ::Append<FDefaultSetAllocator>
            (*(TMap<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>_>
               **)param_1,&param_2->MappingContextRedirects);
  return;
}

// Call @ 14a6d61b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPlayerMappableInputConfig::GetKeysBoundToAction'::__l2::<lambda_1>,void,FEnhancedActionKeyMapping_const_&>
::Call(void *param_1,FEnhancedActionKeyMapping *param_2)

{
  int *piVar1;
  UInputAction *pUVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  
  pUVar2 = (param_2->Action).field0_0x0.DebugPtr;
  if (pUVar2 == (UInputAction *)0x0) {
    bVar6 = *(UInputAction **)((longlong)param_1 + 8) == (UInputAction *)0x0;
  }
  else {
    bVar6 = pUVar2 == *(UInputAction **)((longlong)param_1 + 8);
  }
  if (bVar6) {
    pFVar3 = *(ForAnyElementType **)param_1;
    if (((FEnhancedActionKeyMapping *)pFVar3->Data <= param_2) &&
       (param_2 < (FEnhancedActionKeyMapping *)pFVar3->Data +
                  *(int *)((longlong)&pFVar3[1].Data + 4))) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar5 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar5 + 1;
    FEnhancedActionKeyMapping::FEnhancedActionKeyMapping
              ((FEnhancedActionKeyMapping *)(pFVar3->Data + (longlong)iVar5 * 0x50),param_2);
  }
  return;
}

// Call @ 14a6d61c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPlayerMappableInputConfig::GetPlayerMappableKeys'::__l2::<lambda_1>,void,FEnhancedActionKeyMapping_const_&>
::Call(void *param_1,FEnhancedActionKeyMapping *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pFVar2 = *(ForAnyElementType **)param_1;
  if (((FEnhancedActionKeyMapping *)pFVar2->Data <= param_2) &&
     (param_2 < (FEnhancedActionKeyMapping *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))
     ) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  FEnhancedActionKeyMapping::FEnhancedActionKeyMapping
            ((FEnhancedActionKeyMapping *)(pFVar2->Data + (longlong)iVar5 * 0x50),param_2);
  return;
}

// Call @ 14a6d61d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UEnhancedInputLibrary::RequestRebuildControlMappingsUsingContext'::__l2::<lambda_1>,void,IEnhancedInputSubsystemInterface_*>
::Call(void *param_1,IEnhancedInputSubsystemInterface **param_2)

{
  IEnhancedInputSubsystemInterface *pIVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  byte local_res10 [24];
  
  pIVar1 = *param_2;
  if (pIVar1 == (IEnhancedInputSubsystemInterface *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Subsystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\EnhancedInputLibrary.cpp"
                       ,0x29,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    cVar4 = (**(code **)(pIVar1->_padding_ + 0xf8))(pIVar1,*(undefined8 *)param_1);
    if (cVar4 != '\0') {
      local_res10[0] = (*(byte *)((longlong)param_1 + 8) & 1) * '\x02' | local_res10[0] & 0xf9 | 1;
      (**(code **)(pIVar1->_padding_ + 0xd8))(pIVar1,local_res10,1);
    }
  }
  return;
}

// Call @ 14a6d6270

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::EnhancedInput::SaveAllKeyProfilesToSlot'::__l2::<lambda_1>,void,IEnhancedInputSubsystemInterface_*>
::Call(void *param_1,IEnhancedInputSubsystemInterface **param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)((*param_2)->_padding_ + 0x18))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a6d6293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2c8))(plVar1,*(code **)(*plVar1 + 0x2c8));
    return;
  }
  return;
}

// Call @ 14a6d62b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::EnhancedInput::SetActiveKeyProfile'::__l2::<lambda_1>,void,IEnhancedInputSubsystemInterface_*>
::Call(void *param_1,IEnhancedInputSubsystemInterface **param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)((*param_2)->_padding_ + 0x18))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a6d62dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x338))(plVar1,param_1,*(code **)(*plVar1 + 0x338));
    return;
  }
  return;
}

// Call @ 14a6d62f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FEnhancedInputModule::Tick'::__l2::<lambda_1>,void,IEnhancedInputSubsystemInterface_*>
::Call(void *param_1,IEnhancedInputSubsystemInterface **param_2)

{
  IEnhancedInputSubsystemInterface *this;
  
  this = *param_2;
  IEnhancedInputSubsystemInterface::RebuildControlMappings(this);
  IEnhancedInputSubsystemInterface::TickForcedInput(this,*(float *)param_1);
  if (this->bControlMappingsRebuiltThisTick != false) {
    (**(code **)(this->_padding_ + 0x110))(this);
    this->bControlMappingsRebuiltThisTick = false;
  }
  return;
}

// Call @ 14a6d6350

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`IEnhancedInputSubsystemInterface::InjectChordBlockers'::__l14::<lambda_1>,bool,UInputTrigger_const_*>
::Call(void *param_1,UInputTrigger **param_2)

{
  ETriggerType EVar1;
  
  EVar1 = UInputTrigger::GetTriggerType(*param_2);
  return EVar1 == Explicit;
}

// Call @ 14a6d6370

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`IEnhancedInputSubsystemInterface::RebuildControlMappings'::__l108::<lambda_2>,bool,UInputTrigger_const_*>
::Call(void *param_1,UInputTrigger **param_2)

{
  int iVar1;
  UClass *pUVar2;
  UInputTrigger *pUVar3;
  
  pUVar3 = *param_2;
  if (pUVar3 != (UInputTrigger *)0x0) {
    pUVar2 = UInputTriggerChordAction::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_14a6d63a3;
  }
  pUVar3 = (UInputTrigger *)0x0;
LAB_14a6d63a3:
  return pUVar3 != (UInputTrigger *)0x0;
}

// Call @ 14a6d63c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`IEnhancedInputSubsystemInterface::ShowMappingContextDebugInfo'::__l59::<lambda_6>,bool,UInputTrigger_const_*>
::Call(void *param_1,UInputTrigger **param_2)

{
  int iVar1;
  UClass *pUVar2;
  UInputTrigger *pUVar3;
  
  pUVar3 = *param_2;
  if (pUVar3 != (UInputTrigger *)0x0) {
    pUVar2 = UInputTriggerChordAction::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_14a6d63f3;
  }
  pUVar3 = (UInputTrigger *)0x0;
LAB_14a6d63f3:
  return pUVar3 != (UInputTrigger *)0x0;
}

