// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 22

// ~FCameraParameterSetterService @ 14d590df0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraParameterSetterService::~FCameraParameterSetterService
          (FCameraParameterSetterService *this)

{
  undefined1 *puVar1;
  int iVar2;
  void *pvVar3;
  
  TSparseArray<UE::Cameras::FCameraParameterSetterService::FVariableSetterEntry,FDefaultSparseArrayAllocator>
  ::DestroyElements(&this->VariableSetters,0,*(int *)&(this->VariableSetters).field_0x8);
  puVar1 = &(this->VariableSetters).field_0xc;
  *(undefined4 *)&(this->VariableSetters).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)&this->VariableSetters,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->VariableSetters).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VariableSetters).field_0x34 = 0;
  iVar2 = *(int *)&(this->VariableSetters).field_0x2c;
  *(undefined4 *)&(this->VariableSetters).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->VariableSetters).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->VariableSetters).field_0x10,0);
  }
  pvVar3 = *(void **)&(this->VariableSetters).field_0x20;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  if (*(void **)&this->VariableSetters != (void *)0x0) {
    FMemory::Free(*(void **)&this->VariableSetters);
  }
  FCameraEvaluationService::~FCameraEvaluationService((FCameraEvaluationService *)this);
  return;
}

// AddCameraVariableSetter<int> @ 14d5e5b70

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraVariableSetterHandle __thiscall
UE::Cameras::FCameraParameterSetterService::AddCameraVariableSetter<int>
          (FCameraParameterSetterService *this,TCameraVariableSetter<int> *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FCameraVariableSetterHandle FVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong in_R8;
  FSparseArrayAllocationInfo local_18;
  
  iVar2 = *(int *)&(this->VariableSetters).field_0x34;
  if (iVar2 == 0) {
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)&this->VariableSetters,
                       (int *)&(this->VariableSetters).field_0x8,
                       (int *)&(this->VariableSetters).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->VariableSetters).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->VariableSetters).field_0x30;
    iVar2 = iVar2 + -1;
    lVar5 = *(longlong *)&this->VariableSetters;
    iVar3 = *(int *)(lVar5 + 4 + (longlong)iVar8 * 0x50);
    *(int *)&(this->VariableSetters).field_0x30 = iVar3;
    *(int *)&(this->VariableSetters).field_0x34 = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)&this->VariableSetters,&local_18
             ,iVar8);
  uVar4 = this->NextVariableSetterSerial;
  *(uint *)((longlong)&param_1->_padding_ + 4) = uVar4;
  this->NextVariableSetterSerial = uVar4 + 1;
  *(byte *)((longlong)local_18.Pointer + 0x40) = *(byte *)((longlong)local_18.Pointer + 0x40) | 3;
  bVar1 = *(byte *)((longlong)local_18.Pointer + 0x40);
  *(int *)&param_1->_padding_ = local_18.Index;
  puVar11 = local_18.Pointer;
  if ((bVar1 & 2) == 0) {
    puVar11 = *(undefined8 **)local_18.Pointer;
  }
  *puVar11 = &___7FCameraVariableSetter_Cameras_UE__6B_;
  *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(in_R8 + 8);
  *(undefined4 *)((longlong)puVar11 + 0xc) = *(undefined4 *)(in_R8 + 0xc);
  *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(in_R8 + 0x10);
  *(undefined4 *)((longlong)puVar11 + 0x14) = *(undefined4 *)(in_R8 + 0x14);
  *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(in_R8 + 0x18);
  *(undefined4 *)((longlong)puVar11 + 0x1c) = *(undefined4 *)(in_R8 + 0x1c);
  *puVar11 = &___7__TCameraVariableSetter_H_Cameras_UE__6B_;
  *(undefined4 *)(puVar11 + 4) = *(undefined4 *)(in_R8 + 0x20);
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar9 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar9;
    }
  }
  puVar11 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar11 = *(undefined8 **)local_18.Pointer;
  }
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar9 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar9;
    }
  }
  puVar10 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar10 = *(undefined8 **)local_18.Pointer;
  }
  if (puVar11 != puVar10) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar9 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar9;
    }
  }
  *(longlong *)((longlong)local_18.Pointer + 0x48) = param_1->_padding_;
  return (FCameraVariableSetterHandle)param_1;
}

// AddCameraVariableSetter<float> @ 14d5e5d50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraVariableSetterHandle __thiscall
UE::Cameras::FCameraParameterSetterService::AddCameraVariableSetter<float>
          (FCameraParameterSetterService *this,TCameraVariableSetter<float> *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FCameraVariableSetterHandle FVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong in_R8;
  FSparseArrayAllocationInfo local_18;
  
  iVar2 = *(int *)&(this->VariableSetters).field_0x34;
  if (iVar2 == 0) {
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)&this->VariableSetters,
                       (int *)&(this->VariableSetters).field_0x8,
                       (int *)&(this->VariableSetters).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->VariableSetters).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->VariableSetters).field_0x30;
    iVar2 = iVar2 + -1;
    lVar5 = *(longlong *)&this->VariableSetters;
    iVar3 = *(int *)(lVar5 + 4 + (longlong)iVar8 * 0x50);
    *(int *)&(this->VariableSetters).field_0x30 = iVar3;
    *(int *)&(this->VariableSetters).field_0x34 = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)&this->VariableSetters,&local_18
             ,iVar8);
  uVar4 = this->NextVariableSetterSerial;
  *(uint *)((longlong)&param_1->_padding_ + 4) = uVar4;
  this->NextVariableSetterSerial = uVar4 + 1;
  *(byte *)((longlong)local_18.Pointer + 0x40) = *(byte *)((longlong)local_18.Pointer + 0x40) | 3;
  bVar1 = *(byte *)((longlong)local_18.Pointer + 0x40);
  *(int *)&param_1->_padding_ = local_18.Index;
  puVar11 = local_18.Pointer;
  if ((bVar1 & 2) == 0) {
    puVar11 = *(undefined8 **)local_18.Pointer;
  }
  *puVar11 = &___7FCameraVariableSetter_Cameras_UE__6B_;
  *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(in_R8 + 8);
  *(undefined4 *)((longlong)puVar11 + 0xc) = *(undefined4 *)(in_R8 + 0xc);
  *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(in_R8 + 0x10);
  *(undefined4 *)((longlong)puVar11 + 0x14) = *(undefined4 *)(in_R8 + 0x14);
  *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(in_R8 + 0x18);
  *(undefined4 *)((longlong)puVar11 + 0x1c) = *(undefined4 *)(in_R8 + 0x1c);
  *puVar11 = &___7__TCameraVariableSetter_M_Cameras_UE__6B_;
  *(undefined4 *)(puVar11 + 4) = *(undefined4 *)(in_R8 + 0x20);
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar9 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar9;
    }
  }
  puVar11 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar11 = *(undefined8 **)local_18.Pointer;
  }
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar9 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar9;
    }
  }
  puVar10 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar10 = *(undefined8 **)local_18.Pointer;
  }
  if (puVar11 != puVar10) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar9 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar9;
    }
  }
  *(longlong *)((longlong)local_18.Pointer + 0x48) = param_1->_padding_;
  return (FCameraVariableSetterHandle)param_1;
}

// AddCameraVariableSetter<double> @ 14d5e5f30

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraVariableSetterHandle __thiscall
UE::Cameras::FCameraParameterSetterService::AddCameraVariableSetter<double>
          (FCameraParameterSetterService *this,TCameraVariableSetter<double> *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FCameraVariableSetterHandle FVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong in_R8;
  FSparseArrayAllocationInfo local_18;
  
  iVar2 = *(int *)&(this->VariableSetters).field_0x34;
  if (iVar2 == 0) {
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)&this->VariableSetters,
                       (int *)&(this->VariableSetters).field_0x8,
                       (int *)&(this->VariableSetters).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->VariableSetters).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->VariableSetters).field_0x30;
    iVar2 = iVar2 + -1;
    lVar5 = *(longlong *)&this->VariableSetters;
    iVar3 = *(int *)(lVar5 + 4 + (longlong)iVar8 * 0x50);
    *(int *)&(this->VariableSetters).field_0x30 = iVar3;
    *(int *)&(this->VariableSetters).field_0x34 = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)&this->VariableSetters,&local_18
             ,iVar8);
  uVar4 = this->NextVariableSetterSerial;
  *(uint *)((longlong)&param_1->_padding_ + 4) = uVar4;
  this->NextVariableSetterSerial = uVar4 + 1;
  *(byte *)((longlong)local_18.Pointer + 0x40) = *(byte *)((longlong)local_18.Pointer + 0x40) | 3;
  bVar1 = *(byte *)((longlong)local_18.Pointer + 0x40);
  *(int *)&param_1->_padding_ = local_18.Index;
  puVar11 = local_18.Pointer;
  if ((bVar1 & 2) == 0) {
    puVar11 = *(undefined8 **)local_18.Pointer;
  }
  *puVar11 = &___7FCameraVariableSetter_Cameras_UE__6B_;
  *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(in_R8 + 8);
  *(undefined4 *)((longlong)puVar11 + 0xc) = *(undefined4 *)(in_R8 + 0xc);
  *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(in_R8 + 0x10);
  *(undefined4 *)((longlong)puVar11 + 0x14) = *(undefined4 *)(in_R8 + 0x14);
  *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(in_R8 + 0x18);
  *(undefined4 *)((longlong)puVar11 + 0x1c) = *(undefined4 *)(in_R8 + 0x1c);
  *puVar11 = &___7__TCameraVariableSetter_N_Cameras_UE__6B_;
  puVar11[4] = *(undefined8 *)(in_R8 + 0x20);
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar9 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar9;
    }
  }
  puVar11 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar11 = *(undefined8 **)local_18.Pointer;
  }
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar9 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar9;
    }
  }
  puVar10 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar10 = *(undefined8 **)local_18.Pointer;
  }
  if (puVar11 != puVar10) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar9 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar9;
    }
  }
  *(longlong *)((longlong)local_18.Pointer + 0x48) = param_1->_padding_;
  return (FCameraVariableSetterHandle)param_1;
}

// AddCameraVariableSetter<UE::Math::TRotator<float>_> @ 14d5e6110

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraVariableSetterHandle __thiscall
UE::Cameras::FCameraParameterSetterService::AddCameraVariableSetter<UE::Math::TRotator<float>_>
          (FCameraParameterSetterService *this,
          TCameraVariableSetter<UE::Math::TRotator<float>_> *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FCameraVariableSetterHandle FVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong in_R8;
  FSparseArrayAllocationInfo local_18;
  
  iVar2 = *(int *)&(this->VariableSetters).field_0x34;
  if (iVar2 == 0) {
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)&this->VariableSetters,
                       (int *)&(this->VariableSetters).field_0x8,
                       (int *)&(this->VariableSetters).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->VariableSetters).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->VariableSetters).field_0x30;
    iVar2 = iVar2 + -1;
    lVar5 = *(longlong *)&this->VariableSetters;
    iVar3 = *(int *)(lVar5 + 4 + (longlong)iVar8 * 0x50);
    *(int *)&(this->VariableSetters).field_0x30 = iVar3;
    *(int *)&(this->VariableSetters).field_0x34 = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)&this->VariableSetters,&local_18
             ,iVar8);
  uVar4 = this->NextVariableSetterSerial;
  *(uint *)((longlong)&param_1->_padding_ + 4) = uVar4;
  this->NextVariableSetterSerial = uVar4 + 1;
  *(byte *)((longlong)local_18.Pointer + 0x40) = *(byte *)((longlong)local_18.Pointer + 0x40) | 3;
  bVar1 = *(byte *)((longlong)local_18.Pointer + 0x40);
  *(int *)&param_1->_padding_ = local_18.Index;
  puVar11 = local_18.Pointer;
  if ((bVar1 & 2) == 0) {
    puVar11 = *(undefined8 **)local_18.Pointer;
  }
  *puVar11 = &___7FCameraVariableSetter_Cameras_UE__6B_;
  *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(in_R8 + 8);
  *(undefined4 *)((longlong)puVar11 + 0xc) = *(undefined4 *)(in_R8 + 0xc);
  *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(in_R8 + 0x10);
  *(undefined4 *)((longlong)puVar11 + 0x14) = *(undefined4 *)(in_R8 + 0x14);
  *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(in_R8 + 0x18);
  *(undefined4 *)((longlong)puVar11 + 0x1c) = *(undefined4 *)(in_R8 + 0x1c);
  *puVar11 = &___7__TCameraVariableSetter_U__TRotator_M_Math_UE___Cameras_UE__6B_;
  puVar11[4] = *(undefined8 *)(in_R8 + 0x20);
  *(undefined4 *)(puVar11 + 5) = *(undefined4 *)(in_R8 + 0x28);
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar9 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar9;
    }
  }
  puVar11 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar11 = *(undefined8 **)local_18.Pointer;
  }
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar9 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar9;
    }
  }
  puVar10 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar10 = *(undefined8 **)local_18.Pointer;
  }
  if (puVar11 != puVar10) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar9 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar9;
    }
  }
  *(longlong *)((longlong)local_18.Pointer + 0x48) = param_1->_padding_;
  return (FCameraVariableSetterHandle)param_1;
}

// AddCameraVariableSetter<UE::Math::TRotator<double>_> @ 14d5e6300

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraVariableSetterHandle __thiscall
UE::Cameras::FCameraParameterSetterService::AddCameraVariableSetter<UE::Math::TRotator<double>_>
          (FCameraParameterSetterService *this,
          TCameraVariableSetter<UE::Math::TRotator<double>_> *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  FCameraVariableSetterHandle FVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong in_R8;
  FSparseArrayAllocationInfo local_18;
  
  iVar2 = *(int *)&(this->VariableSetters).field_0x34;
  if (iVar2 == 0) {
    iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)&this->VariableSetters,
                       (int *)&(this->VariableSetters).field_0x8,
                       (int *)&(this->VariableSetters).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->VariableSetters).field_0x10,false);
  }
  else {
    iVar9 = *(int *)&(this->VariableSetters).field_0x30;
    iVar2 = iVar2 + -1;
    lVar5 = *(longlong *)&this->VariableSetters;
    iVar3 = *(int *)(lVar5 + 4 + (longlong)iVar9 * 0x50);
    *(int *)&(this->VariableSetters).field_0x30 = iVar3;
    *(int *)&(this->VariableSetters).field_0x34 = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)&this->VariableSetters,&local_18
             ,iVar9);
  uVar4 = this->NextVariableSetterSerial;
  *(uint *)((longlong)&param_1->_padding_ + 4) = uVar4;
  this->NextVariableSetterSerial = uVar4 + 1;
  *(byte *)((longlong)local_18.Pointer + 0x40) = *(byte *)((longlong)local_18.Pointer + 0x40) | 3;
  bVar1 = *(byte *)((longlong)local_18.Pointer + 0x40);
  *(int *)&param_1->_padding_ = local_18.Index;
  puVar12 = local_18.Pointer;
  if ((bVar1 & 2) == 0) {
    puVar12 = *(undefined8 **)local_18.Pointer;
  }
  *puVar12 = &___7FCameraVariableSetter_Cameras_UE__6B_;
  *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(in_R8 + 8);
  *(undefined4 *)((longlong)puVar12 + 0xc) = *(undefined4 *)(in_R8 + 0xc);
  *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(in_R8 + 0x10);
  *(undefined4 *)((longlong)puVar12 + 0x14) = *(undefined4 *)(in_R8 + 0x14);
  *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(in_R8 + 0x18);
  *(undefined4 *)((longlong)puVar12 + 0x1c) = *(undefined4 *)(in_R8 + 0x1c);
  *puVar12 = &___7__TCameraVariableSetter_U__TRotator_N_Math_UE___Cameras_UE__6B_;
  uVar7 = *(undefined8 *)(in_R8 + 0x28);
  puVar12[4] = *(undefined8 *)(in_R8 + 0x20);
  puVar12[5] = uVar7;
  puVar12[6] = *(undefined8 *)(in_R8 + 0x30);
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      FVar10 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar10;
    }
  }
  puVar12 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar12 = *(undefined8 **)local_18.Pointer;
  }
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      FVar10 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar10;
    }
  }
  puVar11 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar11 = *(undefined8 **)local_18.Pointer;
  }
  if (puVar12 != puVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      FVar10 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar10;
    }
  }
  *(longlong *)((longlong)local_18.Pointer + 0x48) = param_1->_padding_;
  return (FCameraVariableSetterHandle)param_1;
}

// AddCameraVariableSetter<UE::Math::TTransform<float>_> @ 14d5e64f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraVariableSetterHandle __thiscall
UE::Cameras::FCameraParameterSetterService::AddCameraVariableSetter<UE::Math::TTransform<float>_>
          (FCameraParameterSetterService *this,
          TCameraVariableSetter<UE::Math::TTransform<float>_> *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  FCameraVariableSetterHandle FVar10;
  undefined8 *puVar11;
  longlong in_R8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->VariableSetters).field_0x34;
  if (iVar1 == 0) {
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)&this->VariableSetters,
                       (int *)&(this->VariableSetters).field_0x8,
                       (int *)&(this->VariableSetters).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->VariableSetters).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->VariableSetters).field_0x30;
    iVar1 = iVar1 + -1;
    lVar4 = *(longlong *)&this->VariableSetters;
    iVar2 = *(int *)(lVar4 + 4 + (longlong)iVar8 * 0x50);
    *(int *)&(this->VariableSetters).field_0x30 = iVar2;
    *(int *)&(this->VariableSetters).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar4 + (longlong)iVar2 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)&this->VariableSetters,&local_18
             ,iVar8);
  uVar3 = this->NextVariableSetterSerial;
  *(uint *)((longlong)&param_1->_padding_ + 4) = uVar3;
  this->NextVariableSetterSerial = uVar3 + 1;
  *(byte *)((longlong)local_18.Pointer + 0x40) = *(byte *)((longlong)local_18.Pointer + 0x40) & 0xfc
  ;
  *(int *)&param_1->_padding_ = local_18.Index;
  puVar9 = FMemory::Malloc(0x50,0x10);
  *(byte *)((longlong)local_18.Pointer + 0x40) = *(byte *)((longlong)local_18.Pointer + 0x40) | 1;
  *(undefined8 **)local_18.Pointer = puVar9;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) != 0) {
    puVar9 = local_18.Pointer;
  }
  *puVar9 = &___7FCameraVariableSetter_Cameras_UE__6B_;
  *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(in_R8 + 8);
  *(undefined4 *)((longlong)puVar9 + 0xc) = *(undefined4 *)(in_R8 + 0xc);
  *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(in_R8 + 0x10);
  *(undefined4 *)((longlong)puVar9 + 0x14) = *(undefined4 *)(in_R8 + 0x14);
  *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(in_R8 + 0x18);
  *(undefined4 *)((longlong)puVar9 + 0x1c) = *(undefined4 *)(in_R8 + 0x1c);
  *puVar9 = &___7__TCameraVariableSetter_U__TTransform_M_Math_UE___Cameras_UE__6B_;
  uVar6 = *(undefined8 *)(in_R8 + 0x28);
  puVar9[4] = *(undefined8 *)(in_R8 + 0x20);
  puVar9[5] = uVar6;
  uVar6 = *(undefined8 *)(in_R8 + 0x38);
  puVar9[6] = *(undefined8 *)(in_R8 + 0x30);
  puVar9[7] = uVar6;
  uVar6 = *(undefined8 *)(in_R8 + 0x48);
  puVar9[8] = *(undefined8 *)(in_R8 + 0x40);
  puVar9[9] = uVar6;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      FVar10 = (FCameraVariableSetterHandle)(*pcVar5)();
      return FVar10;
    }
  }
  puVar9 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar9 = *(undefined8 **)local_18.Pointer;
  }
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      FVar10 = (FCameraVariableSetterHandle)(*pcVar5)();
      return FVar10;
    }
  }
  puVar11 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar11 = *(undefined8 **)local_18.Pointer;
  }
  if (puVar9 != puVar11) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      FVar10 = (FCameraVariableSetterHandle)(*pcVar5)();
      return FVar10;
    }
  }
  *(longlong *)((longlong)local_18.Pointer + 0x48) = param_1->_padding_;
  return (FCameraVariableSetterHandle)param_1;
}

// AddCameraVariableSetter<UE::Math::TTransform<double>_> @ 14d5e6700

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraVariableSetterHandle __thiscall
UE::Cameras::FCameraParameterSetterService::AddCameraVariableSetter<UE::Math::TTransform<double>_>
          (FCameraParameterSetterService *this,
          TCameraVariableSetter<UE::Math::TTransform<double>_> *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  FCameraVariableSetterHandle FVar10;
  undefined8 *puVar11;
  longlong in_R8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->VariableSetters).field_0x34;
  if (iVar1 == 0) {
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)&this->VariableSetters,
                       (int *)&(this->VariableSetters).field_0x8,
                       (int *)&(this->VariableSetters).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->VariableSetters).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->VariableSetters).field_0x30;
    iVar1 = iVar1 + -1;
    lVar4 = *(longlong *)&this->VariableSetters;
    iVar2 = *(int *)(lVar4 + 4 + (longlong)iVar8 * 0x50);
    *(int *)&(this->VariableSetters).field_0x30 = iVar2;
    *(int *)&(this->VariableSetters).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar4 + (longlong)iVar2 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)&this->VariableSetters,&local_18
             ,iVar8);
  uVar3 = this->NextVariableSetterSerial;
  *(uint *)((longlong)&param_1->_padding_ + 4) = uVar3;
  this->NextVariableSetterSerial = uVar3 + 1;
  *(byte *)((longlong)local_18.Pointer + 0x40) = *(byte *)((longlong)local_18.Pointer + 0x40) & 0xfc
  ;
  *(int *)&param_1->_padding_ = local_18.Index;
  puVar9 = FMemory::Malloc(0x80,0x10);
  *(byte *)((longlong)local_18.Pointer + 0x40) = *(byte *)((longlong)local_18.Pointer + 0x40) | 1;
  *(undefined8 **)local_18.Pointer = puVar9;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) != 0) {
    puVar9 = local_18.Pointer;
  }
  *puVar9 = &___7FCameraVariableSetter_Cameras_UE__6B_;
  *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(in_R8 + 8);
  *(undefined4 *)((longlong)puVar9 + 0xc) = *(undefined4 *)(in_R8 + 0xc);
  *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(in_R8 + 0x10);
  *(undefined4 *)((longlong)puVar9 + 0x14) = *(undefined4 *)(in_R8 + 0x14);
  *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(in_R8 + 0x18);
  *(undefined4 *)((longlong)puVar9 + 0x1c) = *(undefined4 *)(in_R8 + 0x1c);
  *puVar9 = &___7__TCameraVariableSetter_U__TTransform_N_Math_UE___Cameras_UE__6B_;
  uVar6 = *(undefined8 *)(in_R8 + 0x28);
  puVar9[4] = *(undefined8 *)(in_R8 + 0x20);
  puVar9[5] = uVar6;
  uVar6 = *(undefined8 *)(in_R8 + 0x38);
  puVar9[6] = *(undefined8 *)(in_R8 + 0x30);
  puVar9[7] = uVar6;
  uVar6 = *(undefined8 *)(in_R8 + 0x48);
  puVar9[8] = *(undefined8 *)(in_R8 + 0x40);
  puVar9[9] = uVar6;
  uVar6 = *(undefined8 *)(in_R8 + 0x58);
  puVar9[10] = *(undefined8 *)(in_R8 + 0x50);
  puVar9[0xb] = uVar6;
  uVar6 = *(undefined8 *)(in_R8 + 0x68);
  puVar9[0xc] = *(undefined8 *)(in_R8 + 0x60);
  puVar9[0xd] = uVar6;
  uVar6 = *(undefined8 *)(in_R8 + 0x78);
  puVar9[0xe] = *(undefined8 *)(in_R8 + 0x70);
  puVar9[0xf] = uVar6;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      FVar10 = (FCameraVariableSetterHandle)(*pcVar5)();
      return FVar10;
    }
  }
  puVar9 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar9 = *(undefined8 **)local_18.Pointer;
  }
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      FVar10 = (FCameraVariableSetterHandle)(*pcVar5)();
      return FVar10;
    }
  }
  puVar11 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar11 = *(undefined8 **)local_18.Pointer;
  }
  if (puVar9 != puVar11) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      FVar10 = (FCameraVariableSetterHandle)(*pcVar5)();
      return FVar10;
    }
  }
  *(longlong *)((longlong)local_18.Pointer + 0x48) = param_1->_padding_;
  return (FCameraVariableSetterHandle)param_1;
}

// AddCameraVariableSetter<UE::Math::TVector2<float>_> @ 14d5e6920

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraVariableSetterHandle __thiscall
UE::Cameras::FCameraParameterSetterService::AddCameraVariableSetter<UE::Math::TVector2<float>_>
          (FCameraParameterSetterService *this,
          TCameraVariableSetter<UE::Math::TVector2<float>_> *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FCameraVariableSetterHandle FVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong in_R8;
  FSparseArrayAllocationInfo local_18;
  
  iVar2 = *(int *)&(this->VariableSetters).field_0x34;
  if (iVar2 == 0) {
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)&this->VariableSetters,
                       (int *)&(this->VariableSetters).field_0x8,
                       (int *)&(this->VariableSetters).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->VariableSetters).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->VariableSetters).field_0x30;
    iVar2 = iVar2 + -1;
    lVar5 = *(longlong *)&this->VariableSetters;
    iVar3 = *(int *)(lVar5 + 4 + (longlong)iVar8 * 0x50);
    *(int *)&(this->VariableSetters).field_0x30 = iVar3;
    *(int *)&(this->VariableSetters).field_0x34 = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)&this->VariableSetters,&local_18
             ,iVar8);
  uVar4 = this->NextVariableSetterSerial;
  *(uint *)((longlong)&param_1->_padding_ + 4) = uVar4;
  this->NextVariableSetterSerial = uVar4 + 1;
  *(byte *)((longlong)local_18.Pointer + 0x40) = *(byte *)((longlong)local_18.Pointer + 0x40) | 3;
  bVar1 = *(byte *)((longlong)local_18.Pointer + 0x40);
  *(int *)&param_1->_padding_ = local_18.Index;
  puVar11 = local_18.Pointer;
  if ((bVar1 & 2) == 0) {
    puVar11 = *(undefined8 **)local_18.Pointer;
  }
  *puVar11 = &___7FCameraVariableSetter_Cameras_UE__6B_;
  *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(in_R8 + 8);
  *(undefined4 *)((longlong)puVar11 + 0xc) = *(undefined4 *)(in_R8 + 0xc);
  *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(in_R8 + 0x10);
  *(undefined4 *)((longlong)puVar11 + 0x14) = *(undefined4 *)(in_R8 + 0x14);
  *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(in_R8 + 0x18);
  *(undefined4 *)((longlong)puVar11 + 0x1c) = *(undefined4 *)(in_R8 + 0x1c);
  *puVar11 = &___7__TCameraVariableSetter_U__TVector2_M_Math_UE___Cameras_UE__6B_;
  puVar11[4] = *(undefined8 *)(in_R8 + 0x20);
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar9 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar9;
    }
  }
  puVar11 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar11 = *(undefined8 **)local_18.Pointer;
  }
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar9 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar9;
    }
  }
  puVar10 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar10 = *(undefined8 **)local_18.Pointer;
  }
  if (puVar11 != puVar10) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar9 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar9;
    }
  }
  *(longlong *)((longlong)local_18.Pointer + 0x48) = param_1->_padding_;
  return (FCameraVariableSetterHandle)param_1;
}

// AddCameraVariableSetter<UE::Math::TVector2<double>_> @ 14d5e6b00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraVariableSetterHandle __thiscall
UE::Cameras::FCameraParameterSetterService::AddCameraVariableSetter<UE::Math::TVector2<double>_>
          (FCameraParameterSetterService *this,
          TCameraVariableSetter<UE::Math::TVector2<double>_> *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  FCameraVariableSetterHandle FVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong in_R8;
  FSparseArrayAllocationInfo local_18;
  
  iVar2 = *(int *)&(this->VariableSetters).field_0x34;
  if (iVar2 == 0) {
    iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)&this->VariableSetters,
                       (int *)&(this->VariableSetters).field_0x8,
                       (int *)&(this->VariableSetters).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->VariableSetters).field_0x10,false);
  }
  else {
    iVar9 = *(int *)&(this->VariableSetters).field_0x30;
    iVar2 = iVar2 + -1;
    lVar5 = *(longlong *)&this->VariableSetters;
    iVar3 = *(int *)(lVar5 + 4 + (longlong)iVar9 * 0x50);
    *(int *)&(this->VariableSetters).field_0x30 = iVar3;
    *(int *)&(this->VariableSetters).field_0x34 = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)&this->VariableSetters,&local_18
             ,iVar9);
  uVar4 = this->NextVariableSetterSerial;
  *(uint *)((longlong)&param_1->_padding_ + 4) = uVar4;
  this->NextVariableSetterSerial = uVar4 + 1;
  *(byte *)((longlong)local_18.Pointer + 0x40) = *(byte *)((longlong)local_18.Pointer + 0x40) | 3;
  bVar1 = *(byte *)((longlong)local_18.Pointer + 0x40);
  *(int *)&param_1->_padding_ = local_18.Index;
  puVar12 = local_18.Pointer;
  if ((bVar1 & 2) == 0) {
    puVar12 = *(undefined8 **)local_18.Pointer;
  }
  *puVar12 = &___7FCameraVariableSetter_Cameras_UE__6B_;
  *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(in_R8 + 8);
  *(undefined4 *)((longlong)puVar12 + 0xc) = *(undefined4 *)(in_R8 + 0xc);
  *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(in_R8 + 0x10);
  *(undefined4 *)((longlong)puVar12 + 0x14) = *(undefined4 *)(in_R8 + 0x14);
  *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(in_R8 + 0x18);
  *(undefined4 *)((longlong)puVar12 + 0x1c) = *(undefined4 *)(in_R8 + 0x1c);
  *puVar12 = &___7__TCameraVariableSetter_U__TVector2_N_Math_UE___Cameras_UE__6B_;
  uVar7 = *(undefined8 *)(in_R8 + 0x28);
  puVar12[4] = *(undefined8 *)(in_R8 + 0x20);
  puVar12[5] = uVar7;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      FVar10 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar10;
    }
  }
  puVar12 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar12 = *(undefined8 **)local_18.Pointer;
  }
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      FVar10 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar10;
    }
  }
  puVar11 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar11 = *(undefined8 **)local_18.Pointer;
  }
  if (puVar12 != puVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      FVar10 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar10;
    }
  }
  *(longlong *)((longlong)local_18.Pointer + 0x48) = param_1->_padding_;
  return (FCameraVariableSetterHandle)param_1;
}

// AddCameraVariableSetter<UE::Math::TVector4<float>_> @ 14d5e6cf0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraVariableSetterHandle __thiscall
UE::Cameras::FCameraParameterSetterService::AddCameraVariableSetter<UE::Math::TVector4<float>_>
          (FCameraParameterSetterService *this,
          TCameraVariableSetter<UE::Math::TVector4<float>_> *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  FCameraVariableSetterHandle FVar10;
  undefined8 *puVar11;
  longlong in_R8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->VariableSetters).field_0x34;
  if (iVar1 == 0) {
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)&this->VariableSetters,
                       (int *)&(this->VariableSetters).field_0x8,
                       (int *)&(this->VariableSetters).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->VariableSetters).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->VariableSetters).field_0x30;
    iVar1 = iVar1 + -1;
    lVar4 = *(longlong *)&this->VariableSetters;
    iVar2 = *(int *)(lVar4 + 4 + (longlong)iVar8 * 0x50);
    *(int *)&(this->VariableSetters).field_0x30 = iVar2;
    *(int *)&(this->VariableSetters).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar4 + (longlong)iVar2 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)&this->VariableSetters,&local_18
             ,iVar8);
  uVar3 = this->NextVariableSetterSerial;
  *(uint *)((longlong)&param_1->_padding_ + 4) = uVar3;
  this->NextVariableSetterSerial = uVar3 + 1;
  *(byte *)((longlong)local_18.Pointer + 0x40) = *(byte *)((longlong)local_18.Pointer + 0x40) & 0xfc
  ;
  *(int *)&param_1->_padding_ = local_18.Index;
  puVar9 = FMemory::Malloc(0x30,0x10);
  *(byte *)((longlong)local_18.Pointer + 0x40) = *(byte *)((longlong)local_18.Pointer + 0x40) | 1;
  *(undefined8 **)local_18.Pointer = puVar9;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) != 0) {
    puVar9 = local_18.Pointer;
  }
  *puVar9 = &___7FCameraVariableSetter_Cameras_UE__6B_;
  *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(in_R8 + 8);
  *(undefined4 *)((longlong)puVar9 + 0xc) = *(undefined4 *)(in_R8 + 0xc);
  *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(in_R8 + 0x10);
  *(undefined4 *)((longlong)puVar9 + 0x14) = *(undefined4 *)(in_R8 + 0x14);
  *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(in_R8 + 0x18);
  *(undefined4 *)((longlong)puVar9 + 0x1c) = *(undefined4 *)(in_R8 + 0x1c);
  *puVar9 = &___7__TCameraVariableSetter_U__TVector4_M_Math_UE___Cameras_UE__6B_;
  uVar6 = *(undefined8 *)(in_R8 + 0x28);
  puVar9[4] = *(undefined8 *)(in_R8 + 0x20);
  puVar9[5] = uVar6;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      FVar10 = (FCameraVariableSetterHandle)(*pcVar5)();
      return FVar10;
    }
  }
  puVar9 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar9 = *(undefined8 **)local_18.Pointer;
  }
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      FVar10 = (FCameraVariableSetterHandle)(*pcVar5)();
      return FVar10;
    }
  }
  puVar11 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar11 = *(undefined8 **)local_18.Pointer;
  }
  if (puVar9 != puVar11) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      FVar10 = (FCameraVariableSetterHandle)(*pcVar5)();
      return FVar10;
    }
  }
  *(longlong *)((longlong)local_18.Pointer + 0x48) = param_1->_padding_;
  return (FCameraVariableSetterHandle)param_1;
}

// AddCameraVariableSetter<UE::Math::TVector4<double>_> @ 14d5e6ee0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraVariableSetterHandle __thiscall
UE::Cameras::FCameraParameterSetterService::AddCameraVariableSetter<UE::Math::TVector4<double>_>
          (FCameraParameterSetterService *this,
          TCameraVariableSetter<UE::Math::TVector4<double>_> *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  FCameraVariableSetterHandle FVar10;
  undefined8 *puVar11;
  longlong in_R8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->VariableSetters).field_0x34;
  if (iVar1 == 0) {
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)&this->VariableSetters,
                       (int *)&(this->VariableSetters).field_0x8,
                       (int *)&(this->VariableSetters).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->VariableSetters).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->VariableSetters).field_0x30;
    iVar1 = iVar1 + -1;
    lVar4 = *(longlong *)&this->VariableSetters;
    iVar2 = *(int *)(lVar4 + 4 + (longlong)iVar8 * 0x50);
    *(int *)&(this->VariableSetters).field_0x30 = iVar2;
    *(int *)&(this->VariableSetters).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar4 + (longlong)iVar2 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)&this->VariableSetters,&local_18
             ,iVar8);
  uVar3 = this->NextVariableSetterSerial;
  *(uint *)((longlong)&param_1->_padding_ + 4) = uVar3;
  this->NextVariableSetterSerial = uVar3 + 1;
  *(byte *)((longlong)local_18.Pointer + 0x40) = *(byte *)((longlong)local_18.Pointer + 0x40) & 0xfc
  ;
  *(int *)&param_1->_padding_ = local_18.Index;
  puVar9 = FMemory::Malloc(0x40,0x10);
  *(byte *)((longlong)local_18.Pointer + 0x40) = *(byte *)((longlong)local_18.Pointer + 0x40) | 1;
  *(undefined8 **)local_18.Pointer = puVar9;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) != 0) {
    puVar9 = local_18.Pointer;
  }
  *puVar9 = &___7FCameraVariableSetter_Cameras_UE__6B_;
  *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(in_R8 + 8);
  *(undefined4 *)((longlong)puVar9 + 0xc) = *(undefined4 *)(in_R8 + 0xc);
  *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(in_R8 + 0x10);
  *(undefined4 *)((longlong)puVar9 + 0x14) = *(undefined4 *)(in_R8 + 0x14);
  *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(in_R8 + 0x18);
  *(undefined4 *)((longlong)puVar9 + 0x1c) = *(undefined4 *)(in_R8 + 0x1c);
  *puVar9 = &___7__TCameraVariableSetter_U__TVector4_N_Math_UE___Cameras_UE__6B_;
  uVar6 = *(undefined8 *)(in_R8 + 0x28);
  puVar9[4] = *(undefined8 *)(in_R8 + 0x20);
  puVar9[5] = uVar6;
  uVar6 = *(undefined8 *)(in_R8 + 0x38);
  puVar9[6] = *(undefined8 *)(in_R8 + 0x30);
  puVar9[7] = uVar6;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      FVar10 = (FCameraVariableSetterHandle)(*pcVar5)();
      return FVar10;
    }
  }
  puVar9 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar9 = *(undefined8 **)local_18.Pointer;
  }
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      FVar10 = (FCameraVariableSetterHandle)(*pcVar5)();
      return FVar10;
    }
  }
  puVar11 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar11 = *(undefined8 **)local_18.Pointer;
  }
  if (puVar9 != puVar11) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      FVar10 = (FCameraVariableSetterHandle)(*pcVar5)();
      return FVar10;
    }
  }
  *(longlong *)((longlong)local_18.Pointer + 0x48) = param_1->_padding_;
  return (FCameraVariableSetterHandle)param_1;
}

// AddCameraVariableSetter<UE::Math::TVector<float>_> @ 14d5e70e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraVariableSetterHandle __thiscall
UE::Cameras::FCameraParameterSetterService::AddCameraVariableSetter<UE::Math::TVector<float>_>
          (FCameraParameterSetterService *this,
          TCameraVariableSetter<UE::Math::TVector<float>_> *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FCameraVariableSetterHandle FVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong in_R8;
  FSparseArrayAllocationInfo local_18;
  
  iVar2 = *(int *)&(this->VariableSetters).field_0x34;
  if (iVar2 == 0) {
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)&this->VariableSetters,
                       (int *)&(this->VariableSetters).field_0x8,
                       (int *)&(this->VariableSetters).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->VariableSetters).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->VariableSetters).field_0x30;
    iVar2 = iVar2 + -1;
    lVar5 = *(longlong *)&this->VariableSetters;
    iVar3 = *(int *)(lVar5 + 4 + (longlong)iVar8 * 0x50);
    *(int *)&(this->VariableSetters).field_0x30 = iVar3;
    *(int *)&(this->VariableSetters).field_0x34 = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)&this->VariableSetters,&local_18
             ,iVar8);
  uVar4 = this->NextVariableSetterSerial;
  *(uint *)((longlong)&param_1->_padding_ + 4) = uVar4;
  this->NextVariableSetterSerial = uVar4 + 1;
  *(byte *)((longlong)local_18.Pointer + 0x40) = *(byte *)((longlong)local_18.Pointer + 0x40) | 3;
  bVar1 = *(byte *)((longlong)local_18.Pointer + 0x40);
  *(int *)&param_1->_padding_ = local_18.Index;
  puVar11 = local_18.Pointer;
  if ((bVar1 & 2) == 0) {
    puVar11 = *(undefined8 **)local_18.Pointer;
  }
  *puVar11 = &___7FCameraVariableSetter_Cameras_UE__6B_;
  *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(in_R8 + 8);
  *(undefined4 *)((longlong)puVar11 + 0xc) = *(undefined4 *)(in_R8 + 0xc);
  *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(in_R8 + 0x10);
  *(undefined4 *)((longlong)puVar11 + 0x14) = *(undefined4 *)(in_R8 + 0x14);
  *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(in_R8 + 0x18);
  *(undefined4 *)((longlong)puVar11 + 0x1c) = *(undefined4 *)(in_R8 + 0x1c);
  *puVar11 = &___7__TCameraVariableSetter_U__TVector_M_Math_UE___Cameras_UE__6B_;
  puVar11[4] = *(undefined8 *)(in_R8 + 0x20);
  *(undefined4 *)(puVar11 + 5) = *(undefined4 *)(in_R8 + 0x28);
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar9 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar9;
    }
  }
  puVar11 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar11 = *(undefined8 **)local_18.Pointer;
  }
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar9 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar9;
    }
  }
  puVar10 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar10 = *(undefined8 **)local_18.Pointer;
  }
  if (puVar11 != puVar10) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar9 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar9;
    }
  }
  *(longlong *)((longlong)local_18.Pointer + 0x48) = param_1->_padding_;
  return (FCameraVariableSetterHandle)param_1;
}

// AddCameraVariableSetter<UE::Math::TVector<double>_> @ 14d5e72d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraVariableSetterHandle __thiscall
UE::Cameras::FCameraParameterSetterService::AddCameraVariableSetter<UE::Math::TVector<double>_>
          (FCameraParameterSetterService *this,
          TCameraVariableSetter<UE::Math::TVector<double>_> *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  FCameraVariableSetterHandle FVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong in_R8;
  FSparseArrayAllocationInfo local_18;
  
  iVar2 = *(int *)&(this->VariableSetters).field_0x34;
  if (iVar2 == 0) {
    iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)&this->VariableSetters,
                       (int *)&(this->VariableSetters).field_0x8,
                       (int *)&(this->VariableSetters).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->VariableSetters).field_0x10,false);
  }
  else {
    iVar9 = *(int *)&(this->VariableSetters).field_0x30;
    iVar2 = iVar2 + -1;
    lVar5 = *(longlong *)&this->VariableSetters;
    iVar3 = *(int *)(lVar5 + 4 + (longlong)iVar9 * 0x50);
    *(int *)&(this->VariableSetters).field_0x30 = iVar3;
    *(int *)&(this->VariableSetters).field_0x34 = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)&this->VariableSetters,&local_18
             ,iVar9);
  uVar4 = this->NextVariableSetterSerial;
  *(uint *)((longlong)&param_1->_padding_ + 4) = uVar4;
  this->NextVariableSetterSerial = uVar4 + 1;
  *(byte *)((longlong)local_18.Pointer + 0x40) = *(byte *)((longlong)local_18.Pointer + 0x40) | 3;
  bVar1 = *(byte *)((longlong)local_18.Pointer + 0x40);
  *(int *)&param_1->_padding_ = local_18.Index;
  puVar12 = local_18.Pointer;
  if ((bVar1 & 2) == 0) {
    puVar12 = *(undefined8 **)local_18.Pointer;
  }
  *puVar12 = &___7FCameraVariableSetter_Cameras_UE__6B_;
  *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(in_R8 + 8);
  *(undefined4 *)((longlong)puVar12 + 0xc) = *(undefined4 *)(in_R8 + 0xc);
  *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(in_R8 + 0x10);
  *(undefined4 *)((longlong)puVar12 + 0x14) = *(undefined4 *)(in_R8 + 0x14);
  *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(in_R8 + 0x18);
  *(undefined4 *)((longlong)puVar12 + 0x1c) = *(undefined4 *)(in_R8 + 0x1c);
  *puVar12 = &___7__TCameraVariableSetter_U__TVector_N_Math_UE___Cameras_UE__6B_;
  uVar7 = *(undefined8 *)(in_R8 + 0x28);
  puVar12[4] = *(undefined8 *)(in_R8 + 0x20);
  puVar12[5] = uVar7;
  puVar12[6] = *(undefined8 *)(in_R8 + 0x30);
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      FVar10 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar10;
    }
  }
  puVar12 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar12 = *(undefined8 **)local_18.Pointer;
  }
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      FVar10 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar10;
    }
  }
  puVar11 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar11 = *(undefined8 **)local_18.Pointer;
  }
  if (puVar12 != puVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      FVar10 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar10;
    }
  }
  *(longlong *)((longlong)local_18.Pointer + 0x48) = param_1->_padding_;
  return (FCameraVariableSetterHandle)param_1;
}

// AddCameraVariableSetter<bool> @ 14d5e74c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraVariableSetterHandle __thiscall
UE::Cameras::FCameraParameterSetterService::AddCameraVariableSetter<bool>
          (FCameraParameterSetterService *this,TCameraVariableSetter<bool> *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FCameraVariableSetterHandle FVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong in_R8;
  FSparseArrayAllocationInfo local_18;
  
  iVar2 = *(int *)&(this->VariableSetters).field_0x34;
  if (iVar2 == 0) {
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)&this->VariableSetters,
                       (int *)&(this->VariableSetters).field_0x8,
                       (int *)&(this->VariableSetters).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->VariableSetters).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->VariableSetters).field_0x30;
    iVar2 = iVar2 + -1;
    lVar5 = *(longlong *)&this->VariableSetters;
    iVar3 = *(int *)(lVar5 + 4 + (longlong)iVar8 * 0x50);
    *(int *)&(this->VariableSetters).field_0x30 = iVar3;
    *(int *)&(this->VariableSetters).field_0x34 = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)&this->VariableSetters,&local_18
             ,iVar8);
  uVar4 = this->NextVariableSetterSerial;
  *(uint *)((longlong)&param_1->_padding_ + 4) = uVar4;
  this->NextVariableSetterSerial = uVar4 + 1;
  *(byte *)((longlong)local_18.Pointer + 0x40) = *(byte *)((longlong)local_18.Pointer + 0x40) | 3;
  bVar1 = *(byte *)((longlong)local_18.Pointer + 0x40);
  *(int *)&param_1->_padding_ = local_18.Index;
  puVar11 = local_18.Pointer;
  if ((bVar1 & 2) == 0) {
    puVar11 = *(undefined8 **)local_18.Pointer;
  }
  *puVar11 = &___7FCameraVariableSetter_Cameras_UE__6B_;
  *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(in_R8 + 8);
  *(undefined4 *)((longlong)puVar11 + 0xc) = *(undefined4 *)(in_R8 + 0xc);
  *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(in_R8 + 0x10);
  *(undefined4 *)((longlong)puVar11 + 0x14) = *(undefined4 *)(in_R8 + 0x14);
  *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(in_R8 + 0x18);
  *(undefined4 *)((longlong)puVar11 + 0x1c) = *(undefined4 *)(in_R8 + 0x1c);
  *puVar11 = &___7__TCameraVariableSetter__N_Cameras_UE__6B_;
  *(undefined1 *)(puVar11 + 4) = *(undefined1 *)(in_R8 + 0x20);
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar9 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar9;
    }
  }
  puVar11 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar11 = *(undefined8 **)local_18.Pointer;
  }
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 1) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar9 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar9;
    }
  }
  puVar10 = local_18.Pointer;
  if ((*(byte *)((longlong)local_18.Pointer + 0x40) & 2) == 0) {
    puVar10 = *(undefined8 **)local_18.Pointer;
  }
  if (puVar11 != puVar10) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar9 = (FCameraVariableSetterHandle)(*pcVar6)();
      return FVar9;
    }
  }
  *(longlong *)((longlong)local_18.Pointer + 0x48) = param_1->_padding_;
  return (FCameraVariableSetterHandle)param_1;
}

// FCameraParameterSetterService @ 14d655790

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraParameterSetterService * __thiscall
UE::Cameras::FCameraParameterSetterService::FCameraParameterSetterService
          (FCameraParameterSetterService *this)

{
  FCameraEvaluationService::FCameraEvaluationService((FCameraEvaluationService *)this);
  this->_padding_ = (longlong)&___7FCameraParameterSetterService_Cameras_UE__6B_;
  this->Evaluator = (FCameraSystemEvaluator *)0x0;
  *(undefined8 *)&this->VariableSetters = 0;
  *(undefined8 *)&(this->VariableSetters).field_0x8 = 0;
  *(undefined8 *)&(this->VariableSetters).field_0x20 = 0;
  *(undefined4 *)&(this->VariableSetters).field_0x28 = 0;
  *(undefined4 *)&(this->VariableSetters).field_0x2c = 0x80;
  *(undefined4 *)&(this->VariableSetters).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->VariableSetters).field_0x34 = 0;
  FCameraEvaluationService::SetEvaluationServiceFlags
            ((FCameraEvaluationService *)this,NeedsPreUpdate);
  return this;
}

// ApplyCameraVariableSetters @ 14d65c000

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraParameterSetterService::ApplyCameraVariableSetters
          (FCameraParameterSetterService *this,FCameraVariableTable *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  FCameraVariableTable *pFVar6;
  bool bVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  FCameraVariableTable *local_res10;
  int local_res18;
  int local_res20;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  int local_50;
  
  uStack_94 = 1;
  iVar3 = *(int *)&(this->VariableSetters).field_0x28;
  puVar2 = &(this->VariableSetters).field_0x10;
  local_98 = 0;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->VariableSetters).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar2;
    }
    uVar11 = *puVar13;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar11 == 0) {
      iStack_80 = iStack_80 + 0x20;
      lVar8 = (longlong)local_98;
      local_98 = local_98 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_14d65c0b7;
      uVar11 = puVar13[lVar8 + 1];
    }
    uStack_94 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uStack_94 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iStack_84 = local_res18 + -1 + iStack_80;
    if (iVar3 < iStack_84) {
LAB_14d65c0b7:
      iStack_84 = iVar3;
    }
  }
  uVar11 = *(uint *)&(this->VariableSetters).field_0x28;
  local_50 = *(int *)&(this->VariableSetters).field_0x8 -
             *(int *)&(this->VariableSetters).field_0x34;
  local_70._padding_ = CONCAT44(uStack_94,local_98);
  iVar10 = (int)uVar11 >> 5;
  local_70.CurrentBitIndex = iStack_84;
  local_70.UnvisitedBitMask = 0xffffffff;
  local_70._28_4_ = uStack_7c;
  local_70.BaseBitIndex = iStack_80;
  uVar14 = uVar11 & 0xffffffe0;
  local_res10 = param_1;
  local_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar6 = local_res10;
  uVar4 = *(uint *)&(this->VariableSetters).field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&(this->VariableSetters).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar2;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14d65c1a3;
      uVar11 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    uVar11 = local_res20 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_14d65c1a3:
  while( true ) {
    if (*(int *)&(this->VariableSetters).field_0x8 - *(int *)&(this->VariableSetters).field_0x34 !=
        local_50) {
      local_res8[0] = 0;
      `TSparseArray<UE::Cameras::FCameraParameterSetterService::FVariableSetterEntry,FDefaultSparseArrayAllocator>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_70.CurrentBitIndex == uVar11) &&
       (local_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    plVar9 = (longlong *)
             (*(longlong *)&this->VariableSetters + (longlong)local_70.CurrentBitIndex * 0x50);
    if (((*(byte *)(plVar9 + 8) & 1) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(byte *)(plVar9 + 8) & 2) == 0) {
      plVar9 = (longlong *)*plVar9;
    }
    (**(code **)(*plVar9 + 8))(plVar9,pFVar6);
    local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
  }
  return;
}

// GetTypeID @ 14d661b50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraObjectTypeID * __thiscall
UE::Cameras::FCameraParameterSetterService::GetTypeID(FCameraParameterSetterService *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d662d40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraParameterSetterService::IsKindOf
          (FCameraParameterSetterService *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FCameraParameterSetterService>)param_1->ID != PrivateTypeID
      ) && ((TCameraObjectTypeID<UE::Cameras::FCameraEvaluationService>)param_1->ID !=
            FCameraEvaluationService::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnPreUpdate @ 14d668cf0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraParameterSetterService::OnPreUpdate
          (FCameraParameterSetterService *this,FCameraEvaluationServiceUpdateParams *param_1,
          FCameraEvaluationServiceUpdateResult *param_2)

{
  UpdateCameraVariableSetters(this,param_1->DeltaTime);
  return;
}

// StopCameraVariableSetter @ 14d673710

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraParameterSetterService::StopCameraVariableSetter
          (FCameraParameterSetterService *this,FCameraVariableSetterHandle *param_1,bool param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FCameraVariableSetter *this_00;
  undefined1 *puVar4;
  
  uVar1 = param_1->Value;
  if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)&(this->VariableSetters).field_0x28)) {
    if (*(int *)&(this->VariableSetters).field_0x28 <= (int)uVar1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    puVar4 = *(undefined1 **)&(this->VariableSetters).field_0x20;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->VariableSetters).field_0x10;
    }
    if (((*(uint *)(puVar4 + (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (uVar1 & 0x1f) & 1) != 0) &&
       (this_00 = (FCameraVariableSetter *)
                  ((longlong)(int)param_1->Value * 0x50 + *(longlong *)&this->VariableSetters),
       this_00[2].BlendInTime == (float)param_1->SerialNumber)) {
      if ((this_00[2]._padding_ & 1) == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((this_00[2]._padding_ & 2) == 0) {
        this_00 = (FCameraVariableSetter *)this_00->_padding_;
      }
      FCameraVariableSetter::Stop(this_00,param_2);
    }
  }
  return;
}

// UpdateCameraVariableSetters @ 14d674870

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraParameterSetterService::UpdateCameraVariableSetters
          (FCameraParameterSetterService *this,float param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  FCameraVariableSetter *this_00;
  longlong lVar6;
  FCameraVariableSetter *pFVar7;
  uint *puVar8;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  iVar2 = *(int *)&(this->VariableSetters).field_0x28;
  local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->VariableSetters).field_0x10;
  uStack_64 = 1;
  local_68 = 0;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)&(this->VariableSetters).field_0x20;
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)local_40.Array;
    }
    uVar3 = *puVar8;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar3 == 0) {
      iStack_50 = iStack_50 + 0x20;
      lVar6 = (longlong)local_68;
      local_68 = local_68 + 1;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14d67492a;
      uVar3 = puVar8[lVar6 + 1];
    }
    uStack_64 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_64 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_54 = (int)lVar6 + -1 + iStack_50;
    if (iVar2 < iStack_54) {
LAB_14d67492a:
      iStack_54 = iVar2;
    }
  }
  local_40._padding_ = CONCAT44(uStack_64,local_68);
  local_40.UnvisitedBitMask = 0xffffffff;
  local_40.CurrentBitIndex = iStack_54;
  local_40._28_4_ = uStack_4c;
  local_40.BaseBitIndex = iStack_50;
  if (iStack_54 < iVar2) {
    do {
      pFVar7 = (FCameraVariableSetter *)
               ((longlong)local_40.CurrentBitIndex * 0x50 + *(longlong *)&this->VariableSetters);
      if ((pFVar7[2]._padding_ & 1) == 0) {
LAB_14d6749be:
        TSparseArray<UE::Cameras::FCameraParameterSetterService::FVariableSetterEntry,FDefaultSparseArrayAllocator>
        ::RemoveAt(&this->VariableSetters,local_40.CurrentBitIndex,1);
      }
      else {
        this_00 = pFVar7;
        if ((pFVar7[2]._padding_ & 2) == 0) {
          this_00 = (FCameraVariableSetter *)pFVar7->_padding_;
        }
        FCameraVariableSetter::Update(this_00,param_1);
        if (((pFVar7[2]._padding_ & 1) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("bIsValid",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                               ,0x97,
                               L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pFVar7[2]._padding_ & 2) == 0) {
          pFVar7 = (FCameraVariableSetter *)pFVar7->_padding_;
        }
        if (pFVar7->State == Inactive) goto LAB_14d6749be;
      }
      local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
  }
  return;
}

