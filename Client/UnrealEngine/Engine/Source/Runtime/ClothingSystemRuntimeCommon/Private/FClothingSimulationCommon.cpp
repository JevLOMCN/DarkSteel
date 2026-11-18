// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeCommon
// Functions: 3

// FClothingSimulationCommon @ 148c19d00

FClothingSimulationCommon * __thiscall
FClothingSimulationCommon::FClothingSimulationCommon(FClothingSimulationCommon *this)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  IClothingSimulation::IClothingSimulation((IClothingSimulation *)this);
  this->_padding_ = (longlong)&___7FClothingSimulationCommon__6B_;
  pUVar3 = Z_Construct_UClass_UPhysicsSettings_NoRegister();
  if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar3);
  }
  pUVar2 = (pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UPhysicsSettings_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      this->MaxPhysicsDelta = *(float *)(pUVar2 + 10);
      return this;
    }
    pFVar4 = GetTypeName<UPhysicsSettings>(&local_28);
    pwVar5 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,pUVar2);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar5,pwVar6);
  }
  pFVar4 = GetTypeName<UPhysicsSettings>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// ~FClothingSimulationCommon @ 148c1aa30

void __thiscall
FClothingSimulationCommon::~FClothingSimulationCommon(FClothingSimulationCommon *this)

{
  this->_padding_ = (longlong)&___7FClothingSimulationCommon__6B_;
  IClothingSimulation::~IClothingSimulation((IClothingSimulation *)this);
  return;
}

// FillContextAndPrepareTick @ 148c26970

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FClothingSimulationCommon::FillContextAndPrepareTick
          (FClothingSimulationCommon *this,USkeletalMeshComponent *param_1,float param_2,
          IClothingSimulationContext *param_3,bool param_4,bool param_5)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  FName local_res8;
  FName local_res10;
  FName local_res20;
  FName local_a8;
  FName local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58 [2];
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((param_3 == (IClothingSimulationContext *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOutContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\ClothingSimulation.cpp"
                         ,0xd2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)((longlong)*param_3 + 8))(param_3,param_1,param_2,this->MaxPhysicsDelta,param_4);
  if ((param_1 == (USkeletalMeshComponent *)0x0) || (((uint)param_1->_padding_ >> 0x1e & 1) != 0)) {
    if (2 < (byte)LogSkeletalMesh._0_1_) {
      lVar2 = param_1->_padding_;
      if (lVar2 != 0) {
        local_res8 = *(FName *)(lVar2 + 0x18);
        ::FName::ToString(&local_res8,&local_88);
      }
      local_res10 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res10,&local_98);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if ((lVar2 != 0) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
      {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    iVar1 = *(int *)&param_3[2].field_0x4;
    *(undefined4 *)(param_3 + 2) = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,0,(ForAnyElementType *)(param_3 + 1),0,(int *)&param_3[2].field_0x4);
    }
  }
  if (*(int *)(param_3 + 2) == 0) {
    lVar2 = param_1->_padding_;
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1->_padding_);
    if (2 < (byte)LogSkeletalMesh._0_1_) {
      if (lVar2 != 0) {
        local_res20 = *(FName *)(lVar2 + 0x18);
        ::FName::ToString(&local_res20,local_58);
      }
      if (pUVar5 != (UObject *)0x0) {
        local_a8.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
        local_a8.Number = *(uint *)&pUVar5->field_0x1c;
        ::FName::ToString(&local_a8,&local_68);
      }
      local_a0 = (FName)param_1->_padding_;
      ::FName::ToString(&local_a0,&local_78);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if ((pUVar5 != (UObject *)0x0) &&
         (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if ((lVar2 != 0) &&
         (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
      }
    }
    iVar1 = *(int *)&param_3[2].field_0x4;
    *(undefined4 *)(param_3 + 2) = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,0,(ForAnyElementType *)(param_3 + 1),0,(int *)&param_3[2].field_0x4);
    }
  }
  return;
}

