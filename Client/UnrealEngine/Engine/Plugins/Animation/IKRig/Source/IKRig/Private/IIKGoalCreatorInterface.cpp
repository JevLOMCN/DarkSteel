// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 6

// ~IIKGoalCreatorInterface @ 14df1c170

void __thiscall IIKGoalCreatorInterface::~IIKGoalCreatorInterface(IIKGoalCreatorInterface *this)

{
  *this = (IIKGoalCreatorInterface)&___7IIKGoalCreatorInterface__6B_;
  return;
}

// AddIKGoals @ 14df23230

void __thiscall
IIKGoalCreatorInterface::AddIKGoals
          (IIKGoalCreatorInterface *this,
          TMap<FName,FIKRigGoal,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FIKRigGoal,0>_>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_AddIKGoals instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\IKRig\\UHT\\IKRigInterface.gen.cpp"
                     ,0x1e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// AddIKGoals_Implementation @ 14df23270

void __thiscall
IIKGoalCreatorInterface::AddIKGoals_Implementation
          (IIKGoalCreatorInterface *this,
          TMap<FName,FIKRigGoal,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FIKRigGoal,0>_>
          *param_1)

{
  return;
}

// Execute_AddIKGoals @ 14df31110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
IIKGoalCreatorInterface::Execute_AddIKGoals
          (UObject *param_1,
          TMap<FName,FIKRigGoal,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FIKRigGoal,0>_>
          *param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  UClass *pUVar6;
  undefined8 *puVar7;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (param_1 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\IKRig\\UHT\\IKRigInterface.gen.cpp"
                       ,0x23,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar6 = *(UClass **)&param_1->field_0x10;
  pUVar4 = Z_Construct_UClass_UIKGoalCreatorInterface_NoRegister();
  bVar3 = UClass::ImplementsInterface(pUVar6,pUVar4);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UIKGoalCreatorInterface::StaticClass())",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\IKRig\\UHT\\IKRigInterface.gen.cpp"
                       ,0x24,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  pUVar5 = UObject::FindFunction(param_1,NAME_UIKGoalCreatorInterface_AddIKGoals);
  if (pUVar5 == (UFunction *)0x0) {
    pUVar6 = Z_Construct_UClass_UIKGoalCreatorInterface_NoRegister();
    puVar7 = UObjectBaseUtility::GetNativeInterfaceAddress((UObjectBaseUtility *)param_1,pUVar6);
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7);
    }
  }
  else {
    TMap<FName,FIKRigGoal,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FIKRigGoal,0>_>::
    operator=((TMap<FName,FIKRigGoal,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FIKRigGoal,0>_>
               *)local_78,param_2);
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar5);
    TMap<FName,FIKRigGoal,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FIKRigGoal,0>_>::
    operator=(param_2,(TMap<FName,FIKRigGoal,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FIKRigGoal,0>_>
                       *)local_78);
  }
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd0,0x10,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// _getUObject @ 14df62d40

UObject * __thiscall IIKGoalCreatorInterface::_getUObject(IIKGoalCreatorInterface *this)

{
  return (UObject *)0x0;
}

// execAddIKGoals @ 14df630d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl IIKGoalCreatorInterface::execAddIKGoals(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ulonglong uVar2;
  undefined1 auStackY_a8 [32];
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_68.MaxBits = 0x80;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (*(code *)**(undefined8 **)param_1)(param_1);
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  uVar2 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd0,0x10,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68.NumBits = 0;
  if (0x80 < (uint)local_68.MaxBits) {
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return;
}

