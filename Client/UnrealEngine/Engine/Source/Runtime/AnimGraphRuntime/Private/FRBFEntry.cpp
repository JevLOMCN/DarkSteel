// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 7

// StaticStruct @ 1463d5060

UScriptStruct * __cdecl FRBFEntry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRBFEntry.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FRBFEntry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRBFEntry,(UObject *)pUVar1,L"RBFEntry");
  }
  return Z_Registration_Info_UScriptStruct_FRBFEntry.OuterSingleton;
}

// FRBFEntry @ 146407180

FRBFEntry * __thiscall FRBFEntry::FRBFEntry(FRBFEntry *this,FRBFEntry *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Values).ArrayMax;
  iVar2 = (param_1->Values).ArrayNum;
  _Src = (param_1->Values).AllocatorInstance.Data;
  (this->Values).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  memcpy((this->Values).AllocatorInstance.Data,_Src,(longlong)iVar2 << 2);
  return this;
}

// AddFromRotator @ 146414dc0

void __thiscall FRBFEntry::AddFromRotator(FRBFEntry *this,TRotator<double> *param_1)

{
  int *piVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  piVar1 = &(this->Values).ArrayNum;
  uVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,3,(ForAnyElementType *)this,piVar1,&(this->Values).ArrayMax);
  dVar2 = param_1->Roll;
  uVar6 = 0;
  if ((int)uVar5 < *piVar1) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar7 = uVar5 + 1;
  *(float *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) = (float)dVar2;
  dVar2 = param_1->Pitch;
  uVar6 = 0;
  if ((int)uVar7 < *piVar1) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = uVar5 + 2;
  *(float *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 4) = (float)dVar2;
  dVar2 = param_1->Yaw;
  uVar6 = 0;
  if ((int)uVar5 < *piVar1) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(float *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) = (float)dVar2;
  return;
}

// AddFromVector @ 146414f50

void __thiscall FRBFEntry::AddFromVector(FRBFEntry *this,TVector<double> *param_1)

{
  int *piVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  piVar1 = &(this->Values).ArrayNum;
  uVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,3,(ForAnyElementType *)this,piVar1,&(this->Values).ArrayMax);
  dVar2 = (param_1->field0_0x0)._s_0.X;
  uVar6 = 0;
  if ((int)uVar5 < *piVar1) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar7 = uVar5 + 1;
  *(float *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) = (float)dVar2;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  uVar6 = 0;
  if ((int)uVar7 < *piVar1) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = uVar5 + 2;
  *(float *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 4) = (float)dVar2;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  uVar6 = 0;
  if ((int)uVar5 < *piVar1) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(float *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) = (float)dVar2;
  return;
}

// AsQuat @ 1464168b0

TQuat<double> * __thiscall
FRBFEntry::AsQuat(FRBFEntry *this,TQuat<double> *__return_storage_ptr__,int param_1)

{
  TRotator<double> *this_00;
  TRotator<double> local_28;
  
  this_00 = AsRotator(this,&local_28,param_1);
  UE::Math::TRotator<double>::Quaternion(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AsRotator @ 1464168e0

TRotator<double> * __thiscall
FRBFEntry::AsRotator(FRBFEntry *this,TRotator<double> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  TRotator<double> *pTVar6;
  uint uVar7;
  uint uVar8;
  
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  uVar8 = param_1 * 3;
  __return_storage_ptr__->Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  __return_storage_ptr__->Yaw = dVar3;
  __return_storage_ptr__->Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  iVar1 = (this->Values).ArrayNum;
  if ((int)(uVar8 + 3) <= iVar1) {
    uVar7 = 0;
    if ((int)uVar8 < iVar1) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TRotator<double> *)(*pcVar2)();
        return pTVar6;
      }
    }
    uVar7 = uVar8 + 1;
    uVar5 = 0;
    if ((int)uVar7 < (this->Values).ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    __return_storage_ptr__->Roll =
         (double)*(float *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TRotator<double> *)(*pcVar2)();
        return pTVar6;
      }
    }
    uVar8 = uVar8 + 2;
    uVar5 = 0;
    if ((int)uVar8 < (this->Values).ArrayNum) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    __return_storage_ptr__->Pitch =
         (double)*(float *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TRotator<double> *)(*pcVar2)();
        return pTVar6;
      }
    }
    __return_storage_ptr__->Yaw =
         (double)*(float *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
  }
  return __return_storage_ptr__;
}

// AsVector @ 146416a70

TVector<double> * __thiscall
FRBFEntry::AsVector(FRBFEntry *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  TRotator<double> *this_00;
  TRotator<double> local_28;
  
  this_00 = AsRotator(this,&local_28,param_1);
  UE::Math::TRotator<double>::Vector(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

