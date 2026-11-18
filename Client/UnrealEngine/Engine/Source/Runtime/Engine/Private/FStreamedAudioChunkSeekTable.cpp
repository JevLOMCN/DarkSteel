// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// FStreamedAudioChunkSeekTable @ 14877cff0

FStreamedAudioChunkSeekTable * __thiscall
FStreamedAudioChunkSeekTable::FStreamedAudioChunkSeekTable
          (FStreamedAudioChunkSeekTable *this,EChunkSeekTableMode param_1)

{
  (this->Impl).Ptr = (ISeekTableImpl *)0x0;
  this->Mode = ConstantSamplesPerEntry;
  SetMode(this,param_1);
  return this;
}

// CalcSize @ 14878a7f0

int __thiscall FStreamedAudioChunkSeekTable::CalcSize(FStreamedAudioChunkSeekTable *this)

{
  EChunkSeekTableMode EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  EVar1 = this->Mode;
  iVar4 = (**(code **)((longlong)*(this->Impl).Ptr + 8))();
  if (iVar4 != 0) {
    if (EVar1 == ConstantSamplesPerEntry) {
      return iVar4 * 2 + 0xf;
    }
    if (EVar1 == VariableSamplesPerEntry) {
      return iVar4 * 4 + 0x11;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamedAudioChunkSeekTable.cpp"
                       ,0x17a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  return 0;
}

// CalcSize @ 14878a860

int __cdecl FStreamedAudioChunkSeekTable::CalcSize(int param_1,EChunkSeekTableMode param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 != 0) {
    if (param_2 == ConstantSamplesPerEntry) {
      return param_1 * 2 + 0xf;
    }
    if (param_2 == VariableSamplesPerEntry) {
      return param_1 * 4 + 0x11;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamedAudioChunkSeekTable.cpp"
                       ,0x17a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return 0;
}

// CreateImpl @ 148791550

TUniquePtr<FStreamedAudioChunkSeekTable::ISeekTableImpl,TDefaultDelete<FStreamedAudioChunkSeekTable::ISeekTableImpl>_>
 __cdecl FStreamedAudioChunkSeekTable::CreateImpl(EChunkSeekTableMode param_1)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<FStreamedAudioChunkSeekTable::ISeekTableImpl,TDefaultDelete<FStreamedAudioChunkSeekTable::ISeekTableImpl>_>
  TVar3;
  ISeekTableImpl IVar4;
  undefined7 in_register_00000009;
  ISeekTableImpl *pIVar5;
  char in_DL;
  
  pIVar5 = (ISeekTableImpl *)CONCAT71(in_register_00000009,param_1);
  if (in_DL == '\0') {
    IVar4 = (ISeekTableImpl)::operator_new(0x20);
    if (IVar4 != (ISeekTableImpl)0x0) {
      *(undefined4 *)((longlong)IVar4 + 0x1c) = 0xffff;
      *(undefined8 *)((longlong)IVar4 + 8) = 0;
      *(undefined8 *)((longlong)IVar4 + 0x10) = 0;
      *(undefined ***)IVar4 = &___7FConstantRateSeekTable__6B_;
      *(undefined4 *)((longlong)IVar4 + 0x18) = 0xffffffff;
      *pIVar5 = IVar4;
      return (TUniquePtr<FStreamedAudioChunkSeekTable::ISeekTableImpl,TDefaultDelete<FStreamedAudioChunkSeekTable::ISeekTableImpl>_>
              )pIVar5;
    }
  }
  else {
    if (in_DL != '\x01') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamedAudioChunkSeekTable.cpp"
                         ,0x160,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar3.Ptr = (ISeekTableImpl *)(*pcVar1)();
        return (TUniquePtr<FStreamedAudioChunkSeekTable::ISeekTableImpl,TDefaultDelete<FStreamedAudioChunkSeekTable::ISeekTableImpl>_>
                )TVar3.Ptr;
      }
      *pIVar5 = (ISeekTableImpl)0x0;
      return (TUniquePtr<FStreamedAudioChunkSeekTable::ISeekTableImpl,TDefaultDelete<FStreamedAudioChunkSeekTable::ISeekTableImpl>_>
              )pIVar5;
    }
    IVar4 = (ISeekTableImpl)::operator_new(0x28);
    if (IVar4 != (ISeekTableImpl)0x0) {
      *pIVar5 = IVar4;
      *(undefined ***)IVar4 = &___7FVariableRateSeekTable__6B_;
      *(undefined8 *)((longlong)IVar4 + 8) = 0;
      *(undefined8 *)((longlong)IVar4 + 0x10) = 0;
      *(undefined8 *)((longlong)IVar4 + 0x18) = 0;
      *(undefined8 *)((longlong)IVar4 + 0x20) = 0;
      return (TUniquePtr<FStreamedAudioChunkSeekTable::ISeekTableImpl,TDefaultDelete<FStreamedAudioChunkSeekTable::ISeekTableImpl>_>
              )pIVar5;
    }
  }
  *pIVar5 = (ISeekTableImpl)0x0;
  return (TUniquePtr<FStreamedAudioChunkSeekTable::ISeekTableImpl,TDefaultDelete<FStreamedAudioChunkSeekTable::ISeekTableImpl>_>
          )pIVar5;
}

// GetMagic @ 1487a1180

uint __cdecl FStreamedAudioChunkSeekTable::GetMagic(void)

{
  return 0x4b454553;
}

// GetVersion @ 1487a6850

short __cdecl FStreamedAudioChunkSeekTable::GetVersion(void)

{
  return 0;
}

// Parse @ 1487b2390

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FStreamedAudioChunkSeekTable::Parse
          (uchar *param_1,uint param_2,uint *param_3,FStreamedAudioChunkSeekTable *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FArchiveState local_b8;
  undefined8 local_28;
  uchar *local_20;
  longlong local_18;
  undefined8 local_10;
  
  if ((int)param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_b8._padding_ = 0;
  local_b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_b8._40_8_ = 0;
  local_b8.ArSerializingDefaults = 0;
  local_b8.ArPortFlags = 0;
  local_b8.ArMaxSerializeSize = 0;
  local_b8.ArUEVer.FileVersionUE4 = 0;
  local_b8.ArUEVer.FileVersionUE5 = 0;
  local_b8.ArLicenseeUEVer = 0;
  local_b8.ArEngineVer.Major = 0;
  local_b8.ArEngineVer.Minor = 0;
  local_b8.ArEngineVer.Patch = 0;
  local_b8.ArEngineVer._6_2_ = 0;
  local_b8.ArEngineVer.Changelist = 0;
  local_b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_b8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_b8.SerializedProperty = (FProperty *)0x0;
  local_b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_b8.bCustomVersionsAreReset = false;
  local_b8._129_7_ = 0;
  local_b8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_b8);
  local_28 = 0;
  local_10 = 0x7fffffffffffffff;
  local_b8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  local_20 = param_1;
  local_18 = (longlong)(int)param_2;
  FArchiveState::SetIsLoading(&local_b8,true);
  (**(code **)(local_b8._padding_ + 0x108))(&local_b8,0);
  local_b8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  SetMode(param_4,param_4->Mode);
  bVar2 = Serialize(param_4,(FArchive *)&local_b8);
  if (bVar2) {
    *param_3 = *param_3 + (int)local_28;
    if (5 < (byte)LogAudio._0_1_) {
      (**(code **)((longlong)*(param_4->Impl).Ptr + 8))();
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  FArchive::~FArchive((FArchive *)&local_b8);
  return bVar2;
}

// Reset @ 1487bfe90

void __thiscall FStreamedAudioChunkSeekTable::Reset(FStreamedAudioChunkSeekTable *this)

{
  SetMode(this,this->Mode);
  return;
}

// Serialize @ 1487c0c90

bool __thiscall
FStreamedAudioChunkSeekTable::Serialize(FStreamedAudioChunkSeekTable *this,FArchive *param_1)

{
  longlong *plVar1;
  ISeekTableImpl *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  EChunkSeekTableMode local_res8 [8];
  uint local_res10 [2];
  
  if ((this->Impl).Ptr == (ISeekTableImpl *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Impl.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamedAudioChunkSeekTable.cpp"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if ((param_1->field_0x28 & 4) != 0) {
    iVar6 = (**(code **)((longlong)*(this->Impl).Ptr + 8))();
    if (iVar6 == 0) {
      return true;
    }
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = 0x4b454553;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if (local_res10[0] != 0x4b454553) {
    return false;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = this->Mode;
  if ((EChunkSeekTableMode *)plVar1[1] < (EChunkSeekTableMode *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(EChunkSeekTableMode *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if (((param_1->field_0x28 & 1) != 0) && (local_res8[0] != this->Mode)) {
    SetMode(this,local_res8[0]);
  }
  if ((this->Impl).Ptr == (ISeekTableImpl *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Impl.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamedAudioChunkSeekTable.cpp"
                       ,0x6f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pIVar2 = (this->Impl).Ptr;
  uVar5 = (**(code **)((longlong)*pIVar2 + 0x28))(pIVar2,param_1);
  return (bool)uVar5;
}

// SetMode @ 1487c3010

void __thiscall
FStreamedAudioChunkSeekTable::SetMode
          (FStreamedAudioChunkSeekTable *this,EChunkSeekTableMode param_1)

{
  ISeekTableImpl *pIVar1;
  code *pcVar2;
  bool bVar3;
  ISeekTableImpl *pIVar4;
  FStreamedAudioChunkSeekTable local_18;
  
  this->Mode = param_1;
  if (param_1 == ConstantSamplesPerEntry) {
    pIVar4 = ::operator_new(0x20);
    if (pIVar4 != (ISeekTableImpl *)0x0) {
      *(undefined4 *)&pIVar4[3].field_0x4 = 0xffff;
      *(undefined4 *)(pIVar4 + 3) = 0xffffffff;
      *pIVar4 = (ISeekTableImpl)&___7FConstantRateSeekTable__6B_;
      pIVar4[1] = (ISeekTableImpl)0x0;
      pIVar4[2] = (ISeekTableImpl)0x0;
      goto LAB_1487c3056;
    }
  }
  else if (param_1 == VariableSamplesPerEntry) {
    pIVar4 = ::operator_new(0x28);
    if (pIVar4 != (ISeekTableImpl *)0x0) {
      *pIVar4 = (ISeekTableImpl)&___7FVariableRateSeekTable__6B_;
      pIVar4[3] = (ISeekTableImpl)0x0;
      pIVar4[4] = (ISeekTableImpl)0x0;
      pIVar4[1] = (ISeekTableImpl)0x0;
      pIVar4[2] = (ISeekTableImpl)0x0;
      goto LAB_1487c3056;
    }
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamedAudioChunkSeekTable.cpp"
                       ,0x160,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar4 = (ISeekTableImpl *)0x0;
LAB_1487c3056:
  if (this == &local_18) {
    if (pIVar4 != (ISeekTableImpl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487c3101. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*pIVar4)(pIVar4,1);
      return;
    }
  }
  else {
    pIVar1 = (this->Impl).Ptr;
    (this->Impl).Ptr = pIVar4;
    if (pIVar1 != (ISeekTableImpl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487c3083. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*pIVar1)(pIVar1,1);
      return;
    }
  }
  return;
}

