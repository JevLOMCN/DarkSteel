// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 6

// AllowsCinematicOverride @ 146415960

bool __thiscall
ISequencerAnimationOverride::AllowsCinematicOverride(ISequencerAnimationOverride *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_AllowsCinematicOverride instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\AnimGraphRuntime\\UHT\\SequencerAnimationOverride.gen.cpp"
                     ,0x22,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// Execute_AllowsCinematicOverride @ 14643ea00

bool __cdecl ISequencerAnimationOverride::Execute_AllowsCinematicOverride(UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\AnimGraphRuntime\\UHT\\SequencerAnimationOverride.gen.cpp"
                       ,0x29,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar6 = *(UClass **)&param_1->field_0x10;
  pUVar4 = USequencerAnimationOverride::StaticClass();
  bVar2 = UClass::ImplementsInterface(pUVar6,pUVar4);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(USequencerAnimationOverride::StaticClass())"
                       ,
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\AnimGraphRuntime\\UHT\\SequencerAnimationOverride.gen.cpp"
                       ,0x2a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_res8[0] = 0;
  pUVar5 = UObject::FindFunction(param_1,NAME_USequencerAnimationOverride_AllowsCinematicOverride);
  if (pUVar5 == (UFunction *)0x0) {
    pUVar6 = USequencerAnimationOverride::StaticClass();
    plVar7 = UObjectBaseUtility::GetNativeInterfaceAddress((UObjectBaseUtility *)param_1,pUVar6);
    if (plVar7 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar7 + 0x18))(plVar7);
      return (bool)uVar3;
    }
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar5,local_res8);
  }
  return (bool)local_res8[0];
}

// Execute_GetSequencerAnimSlotNames @ 14643eaf0

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
ISequencerAnimationOverride::Execute_GetSequencerAnimSlotNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UObject *param_1)

{
  code *pcVar1;
  void *_Src;
  bool bVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  UClass *pUVar6;
  undefined8 *puVar7;
  void **ppvVar8;
  longlong lVar9;
  void *local_28;
  void *local_20;
  void *local_18 [2];
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\AnimGraphRuntime\\UHT\\SequencerAnimationOverride.gen.cpp"
                       ,0x7b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pUVar6 = *(UClass **)&param_1->field_0x10;
  pUVar4 = USequencerAnimationOverride::StaticClass();
  bVar2 = UClass::ImplementsInterface(pUVar6,pUVar4);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(USequencerAnimationOverride::StaticClass())"
                       ,
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\AnimGraphRuntime\\UHT\\SequencerAnimationOverride.gen.cpp"
                       ,0x7c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_28 = (void *)0x0;
  local_20 = (void *)0x0;
  pUVar5 = UObject::FindFunction(param_1,NAME_USequencerAnimationOverride_GetSequencerAnimSlotNames)
  ;
  if (pUVar5 == (UFunction *)0x0) {
    pUVar6 = USequencerAnimationOverride::StaticClass();
    puVar7 = UObjectBaseUtility::GetNativeInterfaceAddress((UObjectBaseUtility *)param_1,pUVar6);
    if (puVar7 != (undefined8 *)0x0) {
      ppvVar8 = (void **)(**(code **)*puVar7)(puVar7,local_18);
      if (&local_28 != ppvVar8) {
        if (local_28 != (void *)0x0) {
          FMemory::Free(local_28);
        }
        local_28 = *ppvVar8;
        *ppvVar8 = (void *)0x0;
        local_20 = ppvVar8[1];
        ppvVar8[1] = (void *)0x0;
      }
      if (local_18[0] != (void *)0x0) {
        FMemory::Free(local_18[0]);
      }
    }
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar5,&local_28);
  }
  _Src = local_28;
  lVar9 = (longlong)(int)local_20;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = (int)local_20;
  if ((int)local_20 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_20,0,&__return_storage_ptr__->AllocatorInstance,(int)local_20,
               &__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,lVar9 << 3);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return __return_storage_ptr__;
}

// GetSequencerAnimSlotNames @ 14644edf0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
ISequencerAnimationOverride::GetSequencerAnimSlotNames
          (ISequencerAnimationOverride *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_GetSequencerAnimSlotNames instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\AnimGraphRuntime\\UHT\\SequencerAnimationOverride.gen.cpp"
                     ,0x74,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar3;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// execAllowsCinematicOverride @ 14647dd20

void __cdecl
ISequencerAnimationOverride::execAllowsCinematicOverride
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x18))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetSequencerAnimSlotNames @ 146482dd0

void __cdecl
ISequencerAnimationOverride::execGetSequencerAnimSlotNames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  void *local_18 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)param_1)(param_1,local_18);
  if (param_3 != puVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

