// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 12

// StaticStruct @ 14d67f130

UScriptStruct * __cdecl FEncodersTable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEncodersTable.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FEncodersTable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEncodersTable,(UObject *)pUVar1,L"EncodersTable"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FEncodersTable.OuterSingleton;
}

// FEncodersTable @ 14d6a7770

FEncodersTable * __thiscall FEncodersTable::FEncodersTable(FEncodersTable *this)

{
  (this->Focus)._padding_ = 0;
  (this->Focus)._padding_ = 0;
  (this->Focus)._padding_ = 0;
  *(undefined4 *)&(this->Focus)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->Focus)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->Focus)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->Focus)._padding_ + 4) = 0;
  (this->Focus)._padding_ = 0;
  *(undefined4 *)&(this->Focus)._padding_ = 0;
  (this->Focus)._padding_ = 0;
  (this->Focus)._padding_ = 0;
  (this->Focus)._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&(this->Focus)._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->Focus)._padding_ + 4) = 0x404;
  (this->Focus).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Focus).Keys.ArrayNum = 0;
  (this->Focus).Keys.ArrayMax = 0;
  (this->Iris)._padding_ = 0;
  (this->Iris)._padding_ = 0;
  (this->Iris)._padding_ = 0;
  *(undefined4 *)&(this->Iris)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->Iris)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->Iris)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->Iris)._padding_ + 4) = 0;
  (this->Iris)._padding_ = 0;
  *(undefined4 *)&(this->Iris)._padding_ = 0;
  (this->Iris)._padding_ = 0;
  (this->Iris)._padding_ = 0;
  (this->Iris)._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&(this->Iris)._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->Iris)._padding_ + 4) = 0x404;
  (this->Iris).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Iris).Keys.ArrayNum = 0;
  (this->Iris).Keys.ArrayMax = 0;
  return this;
}

// ~FEncodersTable @ 14d6ac150

void __thiscall FEncodersTable::~FEncodersTable(FEncodersTable *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->Iris).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Iris)._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->Iris)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->Iris)._padding_ = 0;
  pvVar2 = (void *)(this->Iris)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Iris)._padding_);
  pFVar1 = (this->Focus).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Focus)._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->Focus)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->Focus)._padding_ = 0;
  pvVar2 = (void *)(this->Focus)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Focus)._padding_);
  return;
}

// ClearAll @ 14d6ba820

void __thiscall FEncodersTable::ClearAll(FEncodersTable *this)

{
  FRichCurve::Reset(&this->Focus);
  FRichCurve::Reset(&this->Iris);
  return;
}

// GetFocusInput @ 14d6d4230

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall FEncodersTable::GetFocusInput(FEncodersTable *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  if ((-1 < param_1) && (param_1 < (this->Focus).Keys.ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->Focus).Keys.ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar4 = (float)(*pcVar1)();
        return fVar4;
      }
    }
    return *(float *)((this->Focus).Keys.AllocatorInstance.Data + (longlong)param_1 * 0x1c + 4);
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8192872282893320208>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tables\\EncodersTable.cpp"
                     ,0x10,"Focus.Keys.IsValidIndex(Index)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar4 = (float)(*pcVar1)();
    return fVar4;
  }
  if (1 < (byte)LogCameraCalibrationCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraCalibrationCore);
  }
  return 0.0;
}

// GetFocusValue @ 14d6d4a00

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall FEncodersTable::GetFocusValue(FEncodersTable *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  if ((-1 < param_1) && (param_1 < (this->Focus).Keys.ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->Focus).Keys.ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar4 = (float)(*pcVar1)();
        return fVar4;
      }
    }
    return *(float *)((this->Focus).Keys.AllocatorInstance.Data + (longlong)param_1 * 0x1c + 8);
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8192872282893320219>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tables\\EncodersTable.cpp"
                     ,0x1b,"Focus.Keys.IsValidIndex(Index)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar4 = (float)(*pcVar1)();
    return fVar4;
  }
  if (1 < (byte)LogCameraCalibrationCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraCalibrationCore);
  }
  return 0.0;
}

// GetIrisInput @ 14d6d50b0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall FEncodersTable::GetIrisInput(FEncodersTable *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  if ((-1 < param_1) && (param_1 < (this->Iris).Keys.ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->Iris).Keys.ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar4 = (float)(*pcVar1)();
        return fVar4;
      }
    }
    return *(float *)((this->Iris).Keys.AllocatorInstance.Data + (longlong)param_1 * 0x1c + 4);
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8192872282893320247>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tables\\EncodersTable.cpp"
                     ,0x37,"Iris.Keys.IsValidIndex(Index)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar4 = (float)(*pcVar1)();
    return fVar4;
  }
  if (1 < (byte)LogCameraCalibrationCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraCalibrationCore);
  }
  return 0.0;
}

// GetIrisValue @ 14d6d51a0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall FEncodersTable::GetIrisValue(FEncodersTable *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  if ((-1 < param_1) && (param_1 < (this->Iris).Keys.ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->Iris).Keys.ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar4 = (float)(*pcVar1)();
        return fVar4;
      }
    }
    return *(float *)((this->Iris).Keys.AllocatorInstance.Data + (longlong)param_1 * 0x1c + 8);
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8192872282893320258>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\Tables\\EncodersTable.cpp"
                     ,0x42,"Iris.Keys.IsValidIndex(Index)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar4 = (float)(*pcVar1)();
    return fVar4;
  }
  if (1 < (byte)LogCameraCalibrationCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraCalibrationCore);
  }
  return 0.0;
}

// GetNumFocusPoints @ 14d6d6090

int __thiscall FEncodersTable::GetNumFocusPoints(FEncodersTable *this)

{
  return (this->Focus).Keys.ArrayNum;
}

// GetNumIrisPoints @ 14d6d60a0

int __thiscall FEncodersTable::GetNumIrisPoints(FEncodersTable *this)

{
  return (this->Iris).Keys.ArrayNum;
}

// RemoveFocusPoint @ 14d6e7e80

bool __thiscall FEncodersTable::RemoveFocusPoint(FEncodersTable *this,float param_1)

{
  FKeyHandle FVar1;
  undefined4 extraout_var;
  undefined4 local_res8;
  
  FRealCurve::FindKey((FRealCurve *)this,param_1,param_1);
  FVar1 = FKeyHandle::Invalid();
  if (local_res8 != *(uint *)CONCAT44(extraout_var,FVar1.Index)) {
    FRichCurve::DeleteKey(&this->Focus,local_res8);
    return true;
  }
  return false;
}

// RemoveIrisPoint @ 14d6e8120

bool __thiscall FEncodersTable::RemoveIrisPoint(FEncodersTable *this,float param_1)

{
  FKeyHandle FVar1;
  undefined4 extraout_var;
  FKeyHandle local_res8;
  
  FRealCurve::FindKey((FRealCurve *)&this->Iris,param_1,param_1);
  FVar1 = FKeyHandle::Invalid();
  if (local_res8.Index != *(uint *)CONCAT44(extraout_var,FVar1.Index)) {
    FRichCurve::DeleteKey(&this->Iris,local_res8);
    return true;
  }
  return false;
}

