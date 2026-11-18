// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 83

// GetUObject @ 148e6fbf0

TObjectPtr<UObject> __thiscall
FNiagaraParameterStore::GetUObject(FNiagaraParameterStore *this,int param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  TObjectPtr<UObject> TVar4;
  uint uVar5;
  undefined4 in_register_00000014;
  TObjectPtr<UObject>_u_0 TVar6;
  uint in_R8D;
  
  TVar6._4_4_ = in_register_00000014;
  TVar6._0_4_ = param_1;
  if (((int)in_R8D < 0) || ((this->UObjects).ArrayNum <= (int)in_R8D)) {
    *(undefined8 *)TVar6.DebugPtr = 0;
  }
  else {
    uVar5 = 0;
    if ((int)in_R8D < (this->UObjects).ArrayNum) {
      uVar5 = ~in_R8D >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.field0_0x0 = (TObjectPtr<UObject>_u_0)(*pcVar2)();
        return (TObjectPtr<UObject>)TVar4.field0_0x0;
      }
    }
    pUVar1 = *(UObject **)((this->UObjects).AllocatorInstance.Data + (longlong)(int)in_R8D * 8);
    *(UObject **)TVar6.DebugPtr = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
      return (TObjectPtr<UObject>)TVar6;
    }
  }
  return (TObjectPtr<UObject>)TVar6.DebugPtr;
}

// GetDataInterface @ 1490459b0

UNiagaraDataInterface * __thiscall
FNiagaraParameterStore::GetDataInterface(FNiagaraParameterStore *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UNiagaraDataInterface *pUVar4;
  
  if ((-1 < param_1) && (param_1 < (this->DataInterfaces).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->DataInterfaces).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UNiagaraDataInterface *)(*pcVar1)();
        return pUVar4;
      }
    }
    return *(UNiagaraDataInterface **)
            ((this->DataInterfaces).AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  return (UNiagaraDataInterface *)0x0;
}

// GetParameterData @ 149047830

uchar * __thiscall
FNiagaraParameterStore::GetParameterData
          (FNiagaraParameterStore *this,int param_1,FNiagaraTypeDefinition *param_2)

{
  int iVar1;
  int iVar2;
  int local_res10 [2];
  int *local_28;
  FNiagaraTypeDefinition *local_20;
  FNiagaraParameterStore *local_18;
  
  local_res10[0] = param_1;
  if (-1 < param_1) {
    iVar1 = (this->ParameterData).ArrayNum;
    iVar2 = FNiagaraTypeDefinition::GetSize(param_2);
    if (iVar2 + local_res10[0] <= iVar1) goto LAB_149047889;
  }
  local_28 = local_res10;
  local_20 = param_2;
  local_18 = this;
  `FNiagaraParameterStore::GetParameterData'::__l2::<lambda_1>::operator()(&local_28);
LAB_149047889:
  return (uchar *)((this->ParameterData).AllocatorInstance.Data + local_res10[0]);
}

// GetParameters @ 1490478b0

/* WARNING: Removing unreachable block (ram,0x000149047a48) */

void __thiscall
FNiagaraParameterStore::GetParameters
          (FNiagaraParameterStore *this,
          TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  undefined8 *local_48;
  ulonglong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  (**(code **)this->_padding_)(this,&local_48);
  if ((int)local_40 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_40 & 0xffffffff);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)local_40) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,(int)local_40,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  puVar6 = local_48;
  while( true ) {
    if (puVar6 == local_48 + (longlong)(int)local_40 * 5) {
      return;
    }
    local_30 = *(undefined4 *)(puVar6 + 1);
    pFVar5 = (param_1->AllocatorInstance).Data;
    local_38 = *puVar6;
    local_28 = 0;
    local_20 = 0;
    if (((pFVar5 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar5 + (longlong)*piVar1 * 0x20)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = param_1->ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,piVar1);
      param_1->ArrayNum = iVar4;
    }
    param_1->ArrayNum = iVar4 + 1;
    pFVar5 = (param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x20;
    *(undefined8 *)pFVar5 = local_38;
    *(undefined4 *)(pFVar5 + 8) = local_30;
    *(undefined8 *)(pFVar5 + 0x10) = 0;
    *(undefined8 *)(pFVar5 + 0x10) = local_28;
    *(undefined4 *)(pFVar5 + 0x18) = (undefined4)local_20;
    *(undefined4 *)(pFVar5 + 0x1c) = local_20._4_4_;
    puVar6 = puVar6 + 5;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// ReadParameterVariables @ 14905fe80

TArrayView<FNiagaraVariableWithOffset_const_,int> * __thiscall
FNiagaraParameterStore::ReadParameterVariables
          (FNiagaraParameterStore *this,
          TArrayView<FNiagaraVariableWithOffset_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FNiagaraVariableWithOffset_const_,int> *pTVar4;
  
  iVar1 = (this->SortedParameterOffsets).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FNiagaraVariableWithOffset *)(this->SortedParameterOffsets).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FNiagaraVariableWithOffset_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// SetUObject @ 149067f50

void __thiscall
FNiagaraParameterStore::SetUObject
          (FNiagaraParameterStore *this,TObjectPtr<UObject> param_1,FNiagaraVariable *param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  
  puVar6 = (uint *)(**(code **)(this->_padding_ + 0x58))(this,param_2,0);
  if (puVar6 != (uint *)0x0) {
    uVar1 = *puVar6;
    if (uVar1 != 0xffffffff) {
      uVar5 = 0;
      if ((int)uVar1 < (this->UObjects).ArrayNum) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->UObjects).AllocatorInstance.Data;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)param_1.field0_0x0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)param_1.field0_0x0);
      }
      *(undefined8 *)(pFVar2 + (longlong)(int)uVar1 * 8) = *(undefined8 *)param_1.field0_0x0;
      this->bUObjectsDirty = 1;
    }
  }
  return;
}

// GetUObject @ 1492a8370

TObjectPtr<UObject> __thiscall
FNiagaraParameterStore::GetUObject(FNiagaraParameterStore *this,FNiagaraVariable *param_1)

{
  (**(code **)(this->_padding_ + 0x58))();
  GetUObject(this,(int)param_1);
  return (TObjectPtr<UObject>)(TObjectPtr<UObject>_u_0)param_1;
}

// GetParameterValue<int> @ 1492cd170

int __thiscall
FNiagaraParameterStore::GetParameterValue<int>
          (FNiagaraParameterStore *this,FNiagaraVariableBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraTypeRegistry *this_00;
  FNiagaraTypeDefinition *this_01;
  int *piVar4;
  
  this_00 = FNiagaraTypeRegistry::Get();
  this_01 = FNiagaraTypeRegistry::GetRegisteredType
                      (this_00,(param_1->TypeDefHandle).RegisteredTypeIndex);
  iVar3 = FNiagaraTypeDefinition::GetSize(this_01);
  if (iVar3 != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x195,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  piVar4 = (int *)(**(code **)(this->_padding_ + 0x58))(this,param_1,0);
  if ((piVar4 != (int *)0x0) && (*piVar4 != -1)) {
    iVar3 = GetParameterValueFromOffset<int>(this,*piVar4);
    return iVar3;
  }
  return 0;
}

// GetParameterValueFromOffset<int> @ 1492cd210

int __thiscall
FNiagaraParameterStore::GetParameterValueFromOffset<int>(FNiagaraParameterStore *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_1;
  if ((-1 < param_1) && (lVar4 + 4U <= (ulonglong)(longlong)(this->ParameterData).ArrayNum)) {
    return *(int *)((this->ParameterData).AllocatorInstance.Data + lVar4);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                     ,0x17f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return *(int *)((this->ParameterData).AllocatorInstance.Data + lVar4);
}

// SetParameterValue<FLinearColor> @ 1492cf450

bool __thiscall
FNiagaraParameterStore::SetParameterValue<FLinearColor>
          (FNiagaraParameterStore *this,FLinearColor *param_1,FNiagaraVariable *param_2,bool param_3
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FNiagaraTypeRegistry *this_00;
  FNiagaraTypeDefinition *this_01;
  int *piVar7;
  int local_res8 [2];
  
  this_00 = FNiagaraTypeRegistry::Get();
  this_01 = FNiagaraTypeRegistry::GetRegisteredType(this_00,(int)param_2->_padding_);
  iVar6 = FNiagaraTypeDefinition::GetSize(this_01);
  if ((iVar6 != 0x10) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Param.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x232,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  piVar7 = (int *)(**(code **)(this->_padding_ + 0x58))(this,param_2,0);
  if (piVar7 == (int *)0x0) {
    local_res8[0] = -1;
  }
  else {
    local_res8[0] = *piVar7;
    if (local_res8[0] != -1) {
      uVar3 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
      pFVar1 = (this->ParameterData).AllocatorInstance.Data + local_res8[0];
      *(undefined8 *)pFVar1 = *(undefined8 *)&param_1->field0_0x0;
      *(undefined8 *)(pFVar1 + 8) = uVar3;
      this->bParametersDirty = 1;
      return true;
    }
  }
  if (param_3) {
    (**(code **)(this->_padding_ + 0x10))(this,param_2,0,0,local_res8);
    if ((local_res8[0] == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x249,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    uVar3 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    pFVar1 = (this->ParameterData).AllocatorInstance.Data + local_res8[0];
    *(undefined8 *)pFVar1 = *(undefined8 *)&param_1->field0_0x0;
    *(undefined8 *)(pFVar1 + 8) = uVar3;
    OnLayoutChange(this);
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

// SetDataInterface @ 149305f10

void __thiscall
FNiagaraParameterStore::SetDataInterface
          (FNiagaraParameterStore *this,UNiagaraDataInterface *param_1,FNiagaraVariable *param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  
  puVar6 = (uint *)(**(code **)(this->_padding_ + 0x58))(this,param_2,0);
  if (puVar6 != (uint *)0x0) {
    uVar1 = *puVar6;
    if (uVar1 != 0xffffffff) {
      uVar5 = 0;
      if ((int)uVar1 < (this->DataInterfaces).ArrayNum) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->DataInterfaces).AllocatorInstance.Data;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_1 != (UNiagaraDataInterface *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      *(UNiagaraDataInterface **)(pFVar2 + (longlong)(int)uVar1 * 8) = param_1;
      this->bInterfacesDirty = 1;
    }
  }
  return;
}

// StaticStruct @ 149317290

UScriptStruct * __cdecl FNiagaraParameterStore::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraParameterStore.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraParameterStore.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraParameterStore,(UObject *)pUVar1,
                         L"NiagaraParameterStore");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraParameterStore.OuterSingleton;
}

// GetParameterValueOrDefault<int> @ 14932b110

int __thiscall
FNiagaraParameterStore::GetParameterValueOrDefault<int>
          (FNiagaraParameterStore *this,FNiagaraVariableBase *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraTypeDefinition *this_00;
  int *piVar4;
  
  this_00 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
  iVar3 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar3 != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x1ae,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  piVar4 = (int *)(**(code **)(this->_padding_ + 0x58))(this,param_1,0);
  if (piVar4 != (int *)0x0) {
    iVar3 = *piVar4;
    if (iVar3 != -1) {
      if ((iVar3 < 0) ||
         ((ulonglong)(longlong)(this->ParameterData).ArrayNum < (longlong)iVar3 + 4U)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar3 = (*pcVar1)();
          return iVar3;
        }
      }
      return *(int *)((this->ParameterData).AllocatorInstance.Data + iVar3);
    }
  }
  return *param_2;
}

// GetParameterValueOrDefault<float> @ 14932b1f0

float __thiscall
FNiagaraParameterStore::GetParameterValueOrDefault<float>
          (FNiagaraParameterStore *this,FNiagaraVariableBase *param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraTypeDefinition *this_00;
  int *piVar4;
  float fVar5;
  
  this_00 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
  iVar3 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar3 != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x1ae,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
  }
  piVar4 = (int *)(**(code **)(this->_padding_ + 0x58))(this,param_1,0);
  if (piVar4 != (int *)0x0) {
    iVar3 = *piVar4;
    if (iVar3 != -1) {
      if ((iVar3 < 0) ||
         ((ulonglong)(longlong)(this->ParameterData).ArrayNum < (longlong)iVar3 + 4U)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          fVar5 = (float)(*pcVar1)();
          return fVar5;
        }
      }
      return *(float *)((this->ParameterData).AllocatorInstance.Data + iVar3);
    }
  }
  return *param_2;
}

// GetParameterValueOrDefault<UE::Math::TVector<float>_> @ 14932b2d0

TVector<float> * __thiscall
FNiagaraParameterStore::GetParameterValueOrDefault<UE::Math::TVector<float>_>
          (FNiagaraParameterStore *this,TVector<float> *__return_storage_ptr__,
          FNiagaraVariableBase *param_1,TVector<float> *param_2)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNiagaraTypeDefinition *this_00;
  TVector<float> *pTVar6;
  int *piVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_1c;
  float local_14;
  
  this_00 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
  iVar5 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar5 != 0xc) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x1ae,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<float> *)(*pcVar3)();
      return pTVar6;
    }
  }
  piVar7 = (int *)(**(code **)(this->_padding_ + 0x58))(this,param_1,0);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    lVar8 = (longlong)iVar5;
    if (iVar5 != -1) {
      if ((iVar5 < 0) || ((ulonglong)(longlong)(this->ParameterData).ArrayNum < lVar8 + 0xcU)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TVector<float> *)(*pcVar3)();
          return pTVar6;
        }
      }
      pFVar2 = (this->ParameterData).AllocatorInstance.Data;
      local_20 = *(undefined4 *)(pFVar2 + lVar8 + 8);
      puVar9 = &local_28;
      local_28 = *(undefined8 *)(pFVar2 + lVar8);
      goto LAB_14932b3b6;
    }
  }
  local_14 = (param_2->field0_0x0)._s_0.Z;
  puVar9 = &local_1c;
  local_1c = *(undefined8 *)&param_2->field0_0x0;
LAB_14932b3b6:
  fVar1 = *(float *)(puVar9 + 1);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *puVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// GetParameterValueOrDefault<FLinearColor> @ 14932b3f0

FLinearColor * __thiscall
FNiagaraParameterStore::GetParameterValueOrDefault<FLinearColor>
          (FNiagaraParameterStore *this,FLinearColor *__return_storage_ptr__,
          FNiagaraVariableBase *param_1,FLinearColor *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FNiagaraTypeDefinition *this_00;
  FLinearColor *pFVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  this_00 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
  iVar5 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar5 != 0x10) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x1ae,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FLinearColor *)(*pcVar2)();
      return pFVar6;
    }
  }
  piVar7 = (int *)(**(code **)(this->_padding_ + 0x58))(this,param_1,0);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    if (iVar5 != -1) {
      if ((iVar5 < 0) ||
         ((ulonglong)(longlong)(this->ParameterData).ArrayNum < (longlong)iVar5 + 0x10U)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FLinearColor *)(*pcVar2)();
          return pFVar6;
        }
      }
      pFVar1 = (this->ParameterData).AllocatorInstance.Data + iVar5;
      puVar8 = &local_28;
      local_28 = *(undefined8 *)pFVar1;
      uStack_20 = *(undefined8 *)(pFVar1 + 8);
      goto LAB_14932b4c3;
    }
  }
  puVar8 = &local_18;
  local_18 = *(undefined8 *)&param_2->field0_0x0;
  uStack_10 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
LAB_14932b4c3:
  uVar3 = puVar8[1];
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *puVar8;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar3;
  return __return_storage_ptr__;
}

// GetParameterValueOrDefault<FNiagaraBool> @ 14932b4f0

FNiagaraBool __thiscall
FNiagaraParameterStore::GetParameterValueOrDefault<FNiagaraBool>
          (FNiagaraParameterStore *this,FNiagaraVariableBase *param_1,FNiagaraBool *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraTypeDefinition *this_00;
  int *piVar4;
  FScriptContainerElement *in_R9;
  
  this_00 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)(param_2 + 2));
  iVar3 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar3 != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x1ae,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return (FNiagaraBool)iVar3;
    }
  }
  piVar4 = (int *)(**(code **)(this->_padding_ + 0x58))(this,param_2,0);
  if (piVar4 != (int *)0x0) {
    iVar3 = *piVar4;
    if (iVar3 != -1) {
      if ((iVar3 < 0) ||
         ((ulonglong)(longlong)(this->ParameterData).ArrayNum < (longlong)iVar3 + 4U)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar3 = (*pcVar1)();
          return (FNiagaraBool)iVar3;
        }
      }
      in_R9 = (this->ParameterData).AllocatorInstance.Data + iVar3;
    }
  }
  (param_1->Name).ComparisonIndex.Value = *(uint *)in_R9;
  return (FNiagaraBool)(int)param_1;
}

// FNiagaraParameterStore @ 149332fc0

FNiagaraParameterStore * __thiscall
FNiagaraParameterStore::FNiagaraParameterStore
          (FNiagaraParameterStore *this,FNiagaraParameterStore *param_1)

{
  this->_padding_ = (longlong)&___7FNiagaraParameterStore__6B_;
  (this->Owner).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SortedParameterOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedParameterOffsets).ArrayNum = 0;
  (this->SortedParameterOffsets).ArrayMax = 0;
  (this->ParameterData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterData).ArrayNum = 0;
  (this->ParameterData).ArrayMax = 0;
  (this->DataInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataInterfaces).ArrayNum = 0;
  (this->DataInterfaces).ArrayMax = 0;
  (this->UObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UObjects).ArrayNum = 0;
  (this->UObjects).ArrayMax = 0;
  (this->OriginalPositionData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OriginalPositionData).ArrayNum = 0;
  (this->OriginalPositionData).ArrayMax = 0;
  (this->Bindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bindings).ArrayNum = 0;
  (this->Bindings).ArrayMax = 0;
  (this->SourceStores).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceStores).ArrayNum = 0;
  (this->SourceStores).ArrayMax = 0;
  operator=(this,param_1);
  return this;
}

// FNiagaraParameterStore @ 149333030

FNiagaraParameterStore * __thiscall
FNiagaraParameterStore::FNiagaraParameterStore(FNiagaraParameterStore *this)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  
  this->_padding_ = (longlong)&___7FNiagaraParameterStore__6B_;
  local_res8 = 0;
  (this->Owner).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->Owner).WeakPtr,(FObjectPtr)&local_res8);
  this->bParametersDirty = 1;
  this->bPositionDataDirty = 1;
  this->bUObjectsDirty = 1;
  this->bInterfacesDirty = 1;
  (this->SortedParameterOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedParameterOffsets).ArrayNum = 0;
  (this->SortedParameterOffsets).ArrayMax = 0;
  (this->ParameterData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterData).ArrayNum = 0;
  (this->ParameterData).ArrayMax = 0;
  (this->DataInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataInterfaces).ArrayNum = 0;
  (this->DataInterfaces).ArrayMax = 0;
  (this->UObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UObjects).ArrayNum = 0;
  (this->UObjects).ArrayMax = 0;
  (this->OriginalPositionData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OriginalPositionData).ArrayNum = 0;
  (this->OriginalPositionData).ArrayMax = 0;
  (this->Bindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bindings).ArrayNum = 0;
  (this->Bindings).ArrayMax = 0;
  (this->SourceStores).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceStores).ArrayNum = 0;
  (this->SourceStores).ArrayMax = 0;
  this->LayoutVersion = 0;
  return this;
}

// ~FNiagaraParameterStore @ 149336200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraParameterStore::~FNiagaraParameterStore(FNiagaraParameterStore *this)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar7 [8];
  FName local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  this->_padding_ = (longlong)&___7FNiagaraParameterStore__6B_;
  auVar7 = (uchar  [8])(longlong)(this->ParameterData).ArrayMax;
  if (auVar7 != (uchar  [8])0x0) {
    FVar6 = StatPtr_STAT_NiagaraParamStoreMemory;
    if (StatPtr_STAT_NiagaraParamStoreMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory>)0x0) {
      pFVar5 = ::FName::FName(&local_res10,"STAT_NiagaraParamStoreMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParamStoreMemory,*pFVar5,
                         L"Niagara parameter store memory","STATGROUP_Niagara","STATCAT_Niagara",
                         L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar6;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_28.StatData.Pad = auVar7;
      local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)auVar7);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  bVar4 = IsInGameThread();
  if ((!bVar4) && ((this->SourceStores).ArrayNum != 0)) {
    IsInGameThread();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread() || (SourceStores.Num() == 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraParameterStore.cpp"
                       ,0xe8,
                       L"ParameterStore destruction must be on the GameThread(%d) or SourceStores(%d) must be unbound"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  UnbindAll(this);
  pFVar2 = (this->SourceStores).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TTuple<FNiagaraParameterStore_*,FNiagaraParameterStoreBinding>,int>
            ((TTuple<FNiagaraParameterStore_*,FNiagaraParameterStoreBinding> *)
             (this->Bindings).AllocatorInstance.Data,(this->Bindings).ArrayNum);
  pFVar2 = (this->Bindings).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->OriginalPositionData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->UObjects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DataInterfaces).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ParameterData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FNiagaraVariableWithOffset,int>
            ((FNiagaraVariableWithOffset *)(this->SortedParameterOffsets).AllocatorInstance.Data,
             (this->SortedParameterOffsets).ArrayNum);
  pFVar2 = (this->SortedParameterOffsets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator= @ 149337070

FNiagaraParameterStore * __thiscall
FNiagaraParameterStore::operator=(FNiagaraParameterStore *this,FNiagaraParameterStore *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  FNiagaraParameterStore *pFVar5;
  undefined4 uStack_3c;
  TArrayView<FNiagaraVariableWithOffset_const_,int> local_38;
  TArrayView<unsigned_char_const_,int> local_28;
  undefined1 local_18 [16];
  
  puVar4 = (undefined8 *)(**(code **)param_1->_padding_)(param_1,local_18);
  local_38.DataPtr = (FNiagaraVariableWithOffset *)*puVar4;
  local_38._8_8_ = puVar4[1];
  CopySortedParameterOffsets(this,&local_38);
  local_28.DataPtr = (uchar *)(param_1->ParameterData).AllocatorInstance.Data;
  iVar1 = (param_1->ParameterData).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FNiagaraParameterStore *)(*pcVar2)();
      return pFVar5;
    }
  }
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iVar1;
  AssignParameterData(this,&local_28);
  TArray<TObjectPtr<UNiagaraDataInterface>,TSizedDefaultAllocator<32>_>::operator=
            (&this->DataInterfaces,&param_1->DataInterfaces);
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::operator=
            (&this->UObjects,&param_1->UObjects);
  SetOriginalPositionData(this,&param_1->OriginalPositionData);
  this->LayoutVersion = this->LayoutVersion + 1;
  return this;
}

// operator() @ 149337b70

bool __thiscall
`FNiagaraParameterStore::SortParameters'::__l2::<lambda_1>::operator()
          (void *this,FNiagaraVariableWithOffset *param_1,FNiagaraVariableWithOffset *param_2)

{
  int iVar1;
  FNiagaraTypeDefinition *pFVar2;
  FName FVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  
  iVar4 = (int)param_1->_padding_ - (int)param_2->_padding_;
  if ((iVar4 == 0) &&
     (iVar4 = *(int *)((longlong)&param_1->_padding_ + 4) -
              *(int *)((longlong)&param_2->_padding_ + 4), iVar4 == 0)) {
    pFVar2 = FNiagaraTypeDefinitionHandle::Resolve
                       ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
    uVar6 = 0;
    iVar1 = 0;
    uVar5 = uVar6;
    iVar7 = iVar1;
    if ((pFVar2->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
      FVar3 = UE::CoreUObject::Private::GetFName((UObject *)&stack0x00000010);
      uVar5 = *(undefined8 *)FVar3;
      iVar7 = (int)((ulonglong)*(undefined8 *)FVar3 >> 0x20);
    }
    pFVar2 = FNiagaraTypeDefinitionHandle::Resolve
                       ((FNiagaraTypeDefinitionHandle *)&param_2->_padding_);
    if ((pFVar2->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
      FVar3 = UE::CoreUObject::Private::GetFName((UObject *)&stack0x00000010);
      uVar6 = *(undefined8 *)FVar3;
      iVar1 = (int)((ulonglong)uVar6 >> 0x20);
    }
    iVar4 = (int)uVar5 - (int)uVar6;
    if (iVar4 == 0) {
      iVar4 = iVar7 - iVar1;
    }
  }
  return SUB41((uint)iVar4 >> 0x1f,0);
}

// AddParameter @ 14933b720

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FNiagaraParameterStore::AddParameter
          (FNiagaraParameterStore *this,FNiagaraVariable *param_1,bool param_2,bool param_3,
          int *param_4)

{
  TArray<FNiagaraStructConversionStep,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  code *pcVar5;
  ForAnyElementType _Src;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  EObjectFlags EVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  FNiagaraTypeDefinition *pFVar13;
  FName FVar14;
  FNiagaraLwcStructConverter *pFVar15;
  UObject *pUVar16;
  UClass *pUVar17;
  TObjectPtr<UObject>_u_0 TVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory> FVar20;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  TObjectPtr<UObject>_u_0 TVar21;
  int iVar22;
  TObjectPtr<UObject>_u_0 TVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  uchar auVar26 [8];
  FScriptContainerElement *pFVar27;
  longlong *this_02;
  FNameEntryId FVar28;
  ulonglong uVar29;
  uint local_res8;
  uint uStackX_c;
  FNiagaraLwcStructConverter local_d0;
  TObjectPtr<UObject>_u_0 local_b8;
  ushort local_b0;
  uchar local_ae;
  short local_ac;
  short local_aa;
  int local_a8;
  uint local_a4;
  undefined8 local_a0;
  FName local_98;
  FName local_90;
  ulonglong local_88;
  FStatMessage local_80;
  undefined1 local_70 [16];
  FName local_60;
  FName local_58;
  FNiagaraLwcStructConverter local_50;
  
  (**(code **)this->_padding_)(this,&local_90);
  TVar18.DebugPtr = (UObject *)0x0;
  uVar10 = 0;
  uVar25 = uVar10;
  if ((int)local_88 != 0) {
    local_98 = local_90;
    local_res8 = 0;
    TVar23.DebugPtr = TVar18.DebugPtr;
    FVar14 = local_90;
    uVar29 = local_88;
    do {
      uVar4 = (ulonglong)(uint)((int)uVar29 >> 0x1f) << 0x20 | uVar29 & 0xffffffff;
      uVar29 = (longlong)uVar4 / 2;
      iVar11 = (int)uVar29;
      uVar25 = TVar23._0_4_ + iVar11;
      uVar29 = uVar29 & 0xffffffff;
      local_a0 = CONCAT44(local_a0._4_4_,uVar25);
      lVar12 = (longlong)(int)uVar25;
      iVar22 = *(int *)((longlong)FVar14 + lVar12 * 0x28) - (int)param_1->_padding_;
      if ((iVar22 == 0) &&
         (iVar22 = *(int *)((longlong)FVar14 + 4 + lVar12 * 0x28) -
                   *(int *)((longlong)&param_1->_padding_ + 4), iVar22 == 0)) {
        pFVar13 = FNiagaraTypeDefinitionHandle::Resolve
                            ((FNiagaraTypeDefinitionHandle *)((longlong)FVar14 + 8 + lVar12 * 0x28))
        ;
        TVar23.DebugPtr = TVar18.DebugPtr;
        uVar25 = uVar10;
        if ((pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
          FVar14 = UE::CoreUObject::Private::GetFName((UObject *)local_70);
          TVar23 = *(TObjectPtr<UObject>_u_0 *)FVar14;
          uVar25 = SUB84(*(TObjectPtr<UObject>_u_0 *)FVar14,4);
        }
        pFVar13 = FNiagaraTypeDefinitionHandle::Resolve
                            ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
        TVar21.DebugPtr = TVar18.DebugPtr;
        uVar8 = uVar10;
        if ((pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
          FVar14 = UE::CoreUObject::Private::GetFName((UObject *)(local_70 + 8));
          TVar21 = *(TObjectPtr<UObject>_u_0 *)FVar14;
          uVar8 = SUB84(*(TObjectPtr<UObject>_u_0 *)FVar14,4);
        }
        iVar22 = TVar23._0_4_ - TVar21._0_4_;
        if (iVar22 == 0) {
          iVar22 = uVar25 - uVar8;
        }
        FVar14 = local_98;
        uVar25 = (uint)local_a0;
      }
      if (iVar22 < 0) {
        local_res8 = uVar25 + 1;
        uVar29 = (ulonglong)(uint)(iVar11 + -1 + (int)((longlong)uVar4 % 2));
      }
      else if (iVar22 == 0) {
        if (param_4 != (int *)0x0) {
          uVar10 = 0;
          if ((int)uVar25 < (int)local_88) {
            uVar10 = ~uVar25 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          *param_4 = *(int *)((longlong)local_90 + 0xc + (longlong)(int)uVar25 * 0x28);
        }
        return false;
      }
      TVar23._4_4_ = 0;
      TVar23._0_4_ = local_res8;
      uVar25 = local_res8;
    } while ((int)uVar29 != 0);
  }
  this_02 = &param_1->_padding_;
  pFVar13 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)this_02);
  local_b8.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8.DebugPtr != (UObject *)0x0))
  {
    UE::GC::MarkAsReachable(local_b8.DebugPtr);
  }
  local_b0 = pFVar13->UnderlyingType;
  local_ae = pFVar13->Flags;
  local_ac = pFVar13->Size;
  local_aa = pFVar13->Alignment;
  local_a8 = pFVar13->RegisteredTypeDefIndex;
  local_a4 = pFVar13->UnderlyingTypePathNameHash;
  local_d0.LWCSize = 0;
  local_d0.SWCSize = 0;
  local_d0.ConversionSteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ConversionSteps.ArrayNum = 0;
  local_d0.ConversionSteps.ArrayMax = 0;
  bVar6 = FNiagaraTypeHelper::IsLWCType((FNiagaraTypeDefinition *)&local_b8.ObjectPtr);
  if (bVar6) {
    pFVar15 = FNiagaraTypeRegistry::GetStructConverter
                        (&local_50,(FNiagaraTypeDefinition *)&local_b8.ObjectPtr);
    pTVar1 = &pFVar15->ConversionSteps;
    local_d0.LWCSize = pFVar15->LWCSize;
    local_d0.SWCSize = pFVar15->SWCSize;
    if (&local_d0.ConversionSteps != pTVar1) {
      if (local_d0.ConversionSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.ConversionSteps.AllocatorInstance.Data);
      }
      local_d0.ConversionSteps.AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_d0.ConversionSteps.ArrayNum = (pFVar15->ConversionSteps).ArrayNum;
      local_d0.ConversionSteps.ArrayMax = (pFVar15->ConversionSteps).ArrayMax;
      (pFVar15->ConversionSteps).ArrayNum = 0;
      (pFVar15->ConversionSteps).ArrayMax = 0;
    }
    if (local_50.ConversionSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.ConversionSteps.AllocatorInstance.Data);
    }
  }
  TArray<FNiagaraVariableWithOffset,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
            (&this->SortedParameterOffsets,uVar25,1);
  pFVar3 = (this->SortedParameterOffsets).AllocatorInstance.Data + (longlong)(int)uVar25 * 0x28;
  pFVar13 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)this_02);
  *(longlong *)pFVar3 = param_1->_padding_;
  iVar22 = FNiagaraTypeDefinitionHandle::Register
                     ((FNiagaraTypeDefinitionHandle *)(pFVar3 + 8),pFVar13);
  _Src.Data = local_d0.ConversionSteps.AllocatorInstance.Data;
  *(int *)(pFVar3 + 8) = iVar22;
  *(undefined4 *)(pFVar3 + 0xc) = 0xffffffff;
  *(int *)(pFVar3 + 0x10) = local_d0.LWCSize;
  *(int *)(pFVar3 + 0x14) = local_d0.SWCSize;
  pFVar24 = pFVar3 + 0x18;
  *(undefined8 *)&pFVar24->field_0x0 = 0;
  lVar12 = (longlong)local_d0.ConversionSteps.ArrayNum;
  *(int *)(pFVar3 + 0x20) = local_d0.ConversionSteps.ArrayNum;
  if (local_d0.ConversionSteps.ArrayNum == 0) {
    *(int *)(pFVar3 + 0x24) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,local_d0.ConversionSteps.ArrayNum,0,(ForAnyElementType *)pFVar24,
               local_d0.ConversionSteps.ArrayNum,(int *)(pFVar3 + 0x24));
    memcpy(*(void **)&pFVar24->field_0x0,_Src.Data,lVar12 * 0x14);
  }
  bVar6 = FNiagaraTypeDefinition::IsDataInterface((FNiagaraTypeDefinition *)&local_b8.ObjectPtr);
  if (bVar6) {
    iVar22 = (this->DataInterfaces).ArrayNum;
    piVar2 = &(this->DataInterfaces).ArrayMax;
    if (iVar22 == *piVar2) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(this->DataInterfaces).AllocatorInstance,piVar2);
    }
    (this->DataInterfaces).ArrayNum = iVar22 + 1;
    *(undefined8 *)((this->DataInterfaces).AllocatorInstance.Data + (longlong)iVar22 * 8) = 0;
    *(int *)(pFVar3 + 0xc) = iVar22;
    pUVar16 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
    EVar9 = UNiagaraDataInterface::BuildObjectFlagsForOwner(pUVar16,RF_Transactional);
    if (param_2) {
      local_a0 = 0;
      pUVar17 = FNiagaraTypeDefinition::GetClass((FNiagaraTypeDefinition *)&local_b8.ObjectPtr);
      pUVar16 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
      TVar18.DebugPtr =
           (UObject *)
           NewObject<UNiagaraDataInterface>
                     (pUVar16,pUVar17,(FName)0x0,EVar9,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    }
    uVar25 = *(uint *)(pFVar3 + 0xc);
    if ((int)uVar25 < (this->DataInterfaces).ArrayNum) {
      uVar10 = ~uVar25 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pFVar24 = (this->DataInterfaces).AllocatorInstance.Data;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar18.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar18.DebugPtr);
    }
    ((TObjectPtr<UObject>_u_0 *)(pFVar24 + (longlong)(int)uVar25 * 8))->DebugPtr = (UObject *)TVar18
    ;
    this->bInterfacesDirty = 1;
    goto LAB_14933bf19;
  }
  TVar23 = (TObjectPtr<UObject>_u_0)FNiagaraTypeDefinition::IntStruct;
  if ((local_b0 != 3) && (TVar23.DebugPtr = TVar18.DebugPtr, local_b8.DebugPtr != (UObject *)0x0)) {
    pUVar17 = Z_Construct_UClass_UStruct_NoRegister();
    bVar6 = FObjectPtr::IsA(&local_b8.ObjectPtr,pUVar17);
    if (bVar6) {
      TVar23 = local_b8;
    }
  }
  if (TVar23.DebugPtr != (UObject *)0x0) {
    pUVar17 = Z_Construct_UClass_UObject_NoRegister();
    if (pUVar17 == (UClass *)0x0) {
LAB_14933bbb8:
      bVar6 = false;
    }
    else {
      iVar22 = (int)pUVar17->_padding_;
      if ((*(int *)&TVar23.DebugPtr[1].field_0x10 < iVar22) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)&TVar23.DebugPtr[1].field_0x8 + (longlong)iVar22 * 8) !=
          &pUVar17->_padding_)) goto LAB_14933bbb8;
      bVar6 = true;
    }
    if (bVar6) {
      iVar22 = (this->UObjects).ArrayNum;
      piVar2 = &(this->UObjects).ArrayMax;
      if (iVar22 == *piVar2) {
        iVar22 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(this->UObjects).AllocatorInstance,piVar2);
      }
      (this->UObjects).ArrayNum = iVar22 + 1;
      *(undefined8 *)((this->UObjects).AllocatorInstance.Data + (longlong)iVar22 * 8) = 0;
      *(int *)(pFVar3 + 0xc) = iVar22;
      this->bUObjectsDirty = 1;
      goto LAB_14933bf19;
    }
  }
  auVar26 = (uchar  [8])(longlong)(this->ParameterData).ArrayMax;
  if (auVar26 != (uchar  [8])0x0) {
    FVar20 = StatPtr_STAT_NiagaraParamStoreMemory;
    if (StatPtr_STAT_NiagaraParamStoreMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory>)0x0) {
      pFVar19 = ::FName::FName(&local_60,"STAT_NiagaraParamStoreMemory");
      FVar20 = (FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParamStoreMemory,
                          *pFVar19,L"Niagara parameter store memory","STATGROUP_Niagara",
                          "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar14 = *(FName *)FVar20;
    FVar28 = FVar14.ComparisonIndex.Value;
    uVar10 = FVar14.Number;
    local_res8 = FVar28.Value;
    uStackX_c = uVar10;
    if (((FVar14 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_80.NameAndInfo.Number = uVar10 & 0xffffbfff | 0xb000;
      local_98 = FVar14;
      local_80.StatData.Pad = auVar26;
      local_80.NameAndInfo.Index.Value = FVar28.Value;
      FThreadStats::AddStatMessage(this_00,&local_80);
      FStatsTrace::Add(&local_98,-(longlong)auVar26);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  iVar22 = FNiagaraTypeDefinition::GetSize((FNiagaraTypeDefinition *)&local_b8.ObjectPtr);
  piVar2 = &(this->ParameterData).ArrayNum;
  *(int *)(pFVar3 + 0xc) = *piVar2;
  if ((param_1->VarData).ArrayNum < 1) {
LAB_14933bde9:
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::AddZeroed(&this->ParameterData,iVar22);
  }
  else {
    pFVar13 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)this_02);
    iVar11 = FNiagaraTypeDefinition::GetSize(pFVar13);
    if ((param_1->VarData).ArrayNum != iVar11) goto LAB_14933bde9;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar22,&(this->ParameterData).AllocatorInstance,piVar2,
               &(this->ParameterData).ArrayMax);
    if (((local_d0.ConversionSteps.ArrayNum < 1) || (local_d0.LWCSize < 1)) ||
       (local_d0.SWCSize < 1)) {
      memcpy((this->ParameterData).AllocatorInstance.Data + *(int *)(pFVar3 + 0xc),
             (param_1->VarData).AllocatorInstance.Data,(longlong)iVar22);
    }
    else {
      FNiagaraLwcStructConverter::ConvertDataToSimulation
                (&local_d0,
                 (uchar *)((this->ParameterData).AllocatorInstance.Data + *(int *)(pFVar3 + 0xc)),
                 (uchar *)(param_1->VarData).AllocatorInstance.Data,1);
    }
  }
  this->bParametersDirty = 1;
  if ((((TObjectPtr<UObject>_u_0)local_b8.DebugPtr ==
        FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) &&
      (local_b0 == FNiagaraTypeDefinition::PositionDef.UnderlyingType)) &&
     (local_ae == FNiagaraTypeDefinition::PositionDef.Flags)) {
    iVar22 = (this->OriginalPositionData).ArrayNum;
    pFVar24 = (this->OriginalPositionData).AllocatorInstance.Data;
    pFVar27 = pFVar24 + (longlong)iVar22 * 0x20;
    while( true ) {
      if ((this->OriginalPositionData).ArrayNum != iVar22) {
        `TCheckedPointerIterator<FNiagaraPositionSource_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_res8);
      }
      if (pFVar24 == pFVar27) break;
      if (*(longlong *)pFVar24 == param_1->_padding_) goto LAB_14933be75;
      pFVar24 = pFVar24 + 0x20;
    }
    SetPositionData(this,(FName *)param_1,&UE::Math::TVector<double>::ZeroVector);
    this->bPositionDataDirty = 1;
  }
LAB_14933be75:
  lVar12 = (longlong)(this->ParameterData).ArrayMax;
  if (lVar12 != 0) {
    FVar20 = StatPtr_STAT_NiagaraParamStoreMemory;
    if (StatPtr_STAT_NiagaraParamStoreMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory>)0x0) {
      pFVar19 = ::FName::FName(&local_58,"STAT_NiagaraParamStoreMemory");
      FVar20 = (FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParamStoreMemory,
                          *pFVar19,L"Niagara parameter store memory","STATGROUP_Niagara",
                          "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar14 = *(FName *)FVar20;
    local_res8 = (uint)FVar14.ComparisonIndex.Value;
    uStackX_c = FVar14.Number;
    FThreadStats::AddMessage<__int64>(FVar14,Add,lVar12,false);
  }
LAB_14933bf19:
  if (param_3) {
    OnLayoutChange(this);
  }
  else {
    this->LayoutVersion = this->LayoutVersion + 1;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = *(int *)(pFVar3 + 0xc);
  }
  if (local_d0.ConversionSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.ConversionSteps.AllocatorInstance.Data);
  }
  return true;
}

// AssignParameterData @ 14933d830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraParameterStore::AssignParameterData
          (FNiagaraParameterStore *this,TArrayView<unsigned_char_const_,int> *param_1)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FName FVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory> FVar7;
  FThreadStats *pFVar8;
  FThreadStatsPool *pFVar9;
  uchar auVar10 [8];
  uint uVar11;
  FName local_res8;
  FStatMessage local_38;
  
  auVar10 = (uchar  [8])(longlong)(this->ParameterData).ArrayMax;
  piVar1 = &(this->ParameterData).ArrayMax;
  if (auVar10 != (uchar  [8])0x0) {
    FVar7 = StatPtr_STAT_NiagaraParamStoreMemory;
    if (StatPtr_STAT_NiagaraParamStoreMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory>)0x0) {
      pFVar6 = ::FName::FName(&local_res8,"STAT_NiagaraParamStoreMemory");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParamStoreMemory,*pFVar6,
                         L"Niagara parameter store memory","STATGROUP_Niagara","STATCAT_Niagara",
                         L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar5 = *(FName *)FVar7;
    local_res8 = FVar5;
    if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar8 == (FThreadStats *)0x0) {
        pFVar9 = FThreadStatsPool::Get();
        pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
      }
      local_38.NameAndInfo.Number = FVar5.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar5;
      local_38.StatData.Pad = auVar10;
      local_38.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar8,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar10);
      if (pFVar8->ScopeCount == 0) {
        FThreadStats::Flush(pFVar8,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar8,false,false);
      }
    }
  }
  iVar3 = param_1->ArrayNum;
  pTVar2 = &this->ParameterData;
  uVar11 = (iVar3 + 0xfU & 0xfffffff0) + 0x10;
  if (-1 < (int)uVar11) {
    if ((this->ParameterData).ArrayMax < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar11,&pTVar2->AllocatorInstance,(this->ParameterData).ArrayNum,piVar1);
    }
    iVar4 = (this->ParameterData).ArrayMax;
    (this->ParameterData).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      (this->ParameterData).ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar3,iVar4,&pTVar2->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,param_1->DataPtr,(longlong)iVar3);
      }
    }
    auVar10 = (uchar  [8])(longlong)(this->ParameterData).ArrayMax;
    if (auVar10 != (uchar  [8])0x0) {
      FVar7 = StatPtr_STAT_NiagaraParamStoreMemory;
      if (StatPtr_STAT_NiagaraParamStoreMemory ==
          (FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory>)0x0) {
        pFVar6 = ::FName::FName(&local_res8,"STAT_NiagaraParamStoreMemory");
        FVar7 = (FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParamStoreMemory,
                           *pFVar6,L"Niagara parameter store memory","STATGROUP_Niagara",
                           "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical
                          );
      }
      FVar5 = *(FName *)FVar7;
      if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        local_res8 = FVar5;
        pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar8 == (FThreadStats *)0x0) {
          pFVar9 = FThreadStatsPool::Get();
          pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
        }
        local_38.NameAndInfo.Number = FVar5.Number & 0xffffafff | 0xa000;
        local_res8 = FVar5;
        local_38.StatData.Pad = auVar10;
        local_38.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar8,&local_38);
        FStatsTrace::Add(&local_res8,(long64)auVar10);
        if (pFVar8->ScopeCount == 0) {
          FThreadStats::Flush(pFVar8,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar8,false,false);
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
}

// Bind @ 14933de10

void __thiscall
FNiagaraParameterStore::Bind
          (FNiagaraParameterStore *this,FNiagaraParameterStore *param_1,
          TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FNiagaraParameterStore *local_res10;
  FNiagaraParameterStoreBinding local_58;
  
  if ((param_1 == (FNiagaraParameterStore *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestStore",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraParameterStore.cpp"
                         ,0xef,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = (this->Bindings).ArrayNum;
  pFVar8 = (this->Bindings).AllocatorInstance.Data;
  pFVar7 = pFVar8 + (longlong)iVar5 * 0x38;
  while( true ) {
    if ((this->Bindings).ArrayNum != iVar5) {
      `TCheckedPointerIterator<TTuple<FNiagaraParameterStore_*,FNiagaraParameterStoreBinding>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar7) break;
    if (*(FNiagaraParameterStore **)pFVar8 == param_1) {
      return;
    }
    pFVar8 = pFVar8 + 0x38;
  }
  local_58.ParameterBindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ParameterBindings.ArrayNum = 0;
  local_58.ParameterBindings.ArrayMax = 0;
  local_58.InterfaceBindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InterfaceBindings.ArrayNum = 0;
  local_58.InterfaceBindings.ArrayMax = 0;
  local_58.UObjectBindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.UObjectBindings.ArrayNum = 0;
  local_58.UObjectBindings.ArrayMax = 0;
  local_res10 = this;
  bVar4 = FNiagaraParameterStoreBinding::BindParameters(&local_58,param_1,this,param_2);
  if (bVar4) {
    TArray<FNiagaraParameterStore_*,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FNiagaraParameterStore_*_const_&>(&param_1->SourceStores,&local_res10);
    iVar5 = (this->Bindings).ArrayNum;
    piVar1 = &(this->Bindings).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&(this->Bindings).AllocatorInstance,piVar1);
    }
    FVar3.Data = local_58.ParameterBindings.AllocatorInstance.Data;
    (this->Bindings).ArrayNum = iVar5 + 1;
    pFVar8 = (this->Bindings).AllocatorInstance.Data;
    *(FNiagaraParameterStore **)(pFVar8 + (longlong)iVar5 * 0x38) = param_1;
    pFVar8 = pFVar8 + (longlong)iVar5 * 0x38 + 8;
    *(undefined8 *)&pFVar8->field_0x0 = 0;
    lVar6 = (longlong)local_58.ParameterBindings.ArrayNum;
    *(int *)&pFVar8[8].field_0x0 = local_58.ParameterBindings.ArrayNum;
    if (local_58.ParameterBindings.ArrayNum == 0) {
      *(int *)(pFVar8 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (6,2,local_58.ParameterBindings.ArrayNum,0,(ForAnyElementType *)pFVar8,
                 local_58.ParameterBindings.ArrayNum,(int *)(pFVar8 + 0xc));
      memcpy(*(void **)&pFVar8->field_0x0,FVar3.Data,lVar6 * 6);
    }
    FVar3.Data = local_58.InterfaceBindings.AllocatorInstance.Data;
    pFVar7 = pFVar8 + 0x10;
    *(FScriptContainerElement **)&pFVar7->field_0x0 = (FScriptContainerElement *)0x0;
    lVar6 = (longlong)local_58.InterfaceBindings.ArrayNum;
    *(int *)&pFVar8[0x18].field_0x0 = local_58.InterfaceBindings.ArrayNum;
    if (local_58.InterfaceBindings.ArrayNum == 0) {
      *(int *)(pFVar8 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,2,local_58.InterfaceBindings.ArrayNum,0,(ForAnyElementType *)pFVar7,
                 local_58.InterfaceBindings.ArrayNum,(int *)(pFVar8 + 0x1c));
      memcpy(*(FScriptContainerElement **)&pFVar7->field_0x0,FVar3.Data,lVar6 << 2);
    }
    FVar3.Data = local_58.UObjectBindings.AllocatorInstance.Data;
    pFVar7 = pFVar8 + 0x20;
    *(FScriptContainerElement **)&pFVar7->field_0x0 = (FScriptContainerElement *)0x0;
    lVar6 = (longlong)local_58.UObjectBindings.ArrayNum;
    *(int *)&pFVar8[0x28].field_0x0 = local_58.UObjectBindings.ArrayNum;
    if (local_58.UObjectBindings.ArrayNum == 0) {
      *(int *)(pFVar8 + 0x2c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,2,local_58.UObjectBindings.ArrayNum,0,(ForAnyElementType *)pFVar7,
                 local_58.UObjectBindings.ArrayNum,(int *)(pFVar8 + 0x2c));
      memcpy(*(FScriptContainerElement **)&pFVar7->field_0x0,FVar3.Data,lVar6 << 2);
    }
  }
  if (local_58.UObjectBindings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UObjectBindings.AllocatorInstance.Data);
  }
  if (local_58.InterfaceBindings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.InterfaceBindings.AllocatorInstance.Data);
  }
  if (local_58.ParameterBindings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.ParameterBindings.AllocatorInstance.Data);
  }
  return;
}

// ChangeParameterType @ 14933f3b0

void __thiscall
FNiagaraParameterStore::ChangeParameterType
          (FNiagaraParameterStore *this,FNiagaraVariableBase *param_1,
          FNiagaraTypeDefinition *param_2)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  FNiagaraTypeDefinition *pFVar7;
  FName *pFVar8;
  undefined1 local_res8 [8];
  FNiagaraTypeDefinitionHandle local_res10 [2];
  
  pFVar7 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
  iVar4 = FNiagaraTypeDefinition::GetSize(pFVar7);
  iVar5 = FNiagaraTypeDefinition::GetSize(param_2);
  if ((iVar4 != iVar5) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_745892470486727643>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraParameterStore.cpp"
                         ,0x425,"Param.GetType().GetSize() == NewType.GetSize()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar7 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
  if (((((pFVar7->ClassStructOrEnum).field0_0x0.DebugPtr ==
         (param_2->ClassStructOrEnum).field0_0x0.DebugPtr) &&
       (pFVar7->UnderlyingType == param_2->UnderlyingType)) && (pFVar7->Flags == param_2->Flags)) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_745892470486727642>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraParameterStore.cpp"
                         ,0x426,"Param.GetType() != NewType"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (this->SortedParameterOffsets).ArrayNum;
  pFVar8 = (FName *)(this->SortedParameterOffsets).AllocatorInstance.Data;
  pFVar1 = pFVar8 + (longlong)iVar4 * 5;
  while( true ) {
    if ((this->SortedParameterOffsets).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FNiagaraVariableWithOffset,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    if ((*pFVar8 == param_1->Name) &&
       (pFVar8[1].ComparisonIndex.Value == (param_1->TypeDefHandle).RegisteredTypeIndex)) {
      uVar6 = FNiagaraTypeDefinitionHandle::Register(local_res10,param_2);
      pFVar8[1].ComparisonIndex.Value = uVar6;
      this->bParametersDirty = 1;
      return;
    }
    pFVar8 = pFVar8 + 5;
  }
  return;
}

// CheckForNaNs @ 14933f4f0

void __thiscall FNiagaraParameterStore::CheckForNaNs(FNiagaraParameterStore *this)

{
  FNiagaraTypeDefinitionHandle *pFVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double _X;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  FNiagaraTypeDefinition *pFVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  float *pfVar13;
  FNiagaraTypeDefinitionHandle *this_00;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  float local_a0;
  FNiagaraTypeDefinitionHandle *local_98;
  int local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  (**(code **)this->_padding_)(this,&local_98);
  if (local_98 != local_98 + (longlong)local_90 * 10) {
    this_00 = local_98 + 2;
    do {
      iVar8 = this_00[1].RegisteredTypeIndex;
      lVar10 = (longlong)iVar8;
      pFVar9 = FNiagaraTypeDefinitionHandle::Resolve(this_00);
      if ((((TObjectPtr<UObject>_u_0)(pFVar9->ClassStructOrEnum).field0_0x0.DebugPtr ==
            FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0) &&
          (pFVar9->UnderlyingType == FNiagaraTypeDefinition::FloatDef.UnderlyingType)) &&
         (pFVar9->Flags == FNiagaraTypeDefinition::FloatDef.Flags)) {
        if (((iVar8 < 0) || ((ulonglong)(longlong)(this->ParameterData).ArrayNum < lVar10 + 4U)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                               ,0x17f,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        _X = (double)*(float *)((this->ParameterData).AllocatorInstance.Data + lVar10);
        iVar8 = _isnan(_X);
        if ((iVar8 != 0) || (iVar8 = _finite(_X), iVar8 == 0)) {
LAB_14933f6ac:
          local_b8[0] = 0;
          `FNiagaraParameterStore::CheckForNaNs'::__l28::<lambda_1>::operator()(local_b8);
          DumpParameters(this,false);
        }
      }
      else {
        pFVar9 = FNiagaraTypeDefinitionHandle::Resolve(this_00);
        if ((((TObjectPtr<UObject>_u_0)(pFVar9->ClassStructOrEnum).field0_0x0.DebugPtr ==
              FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0) &&
            (pFVar9->UnderlyingType == FNiagaraTypeDefinition::Vec2Def.UnderlyingType)) &&
           (pFVar9->Flags == FNiagaraTypeDefinition::Vec2Def.Flags)) {
          if (((iVar8 < 0) || ((ulonglong)(longlong)(this->ParameterData).ArrayNum < lVar10 + 8U))
             && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                    ,0x17f,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_b0 = *(undefined8 *)((this->ParameterData).AllocatorInstance.Data + lVar10);
          iVar8 = _finite((double)(float)local_b0);
          if (iVar8 == 0) goto LAB_14933f6a6;
          fVar2 = local_b0._4_4_;
LAB_14933f698:
          iVar8 = _finite((double)fVar2);
          if (iVar8 == 0) goto LAB_14933f6a6;
LAB_14933f98f:
          bVar7 = false;
        }
        else {
          pFVar9 = FNiagaraTypeDefinitionHandle::Resolve(this_00);
          if ((((TObjectPtr<UObject>_u_0)(pFVar9->ClassStructOrEnum).field0_0x0.DebugPtr ==
                FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0) &&
              (pFVar9->UnderlyingType == FNiagaraTypeDefinition::Vec3Def.UnderlyingType)) &&
             (pFVar9->Flags == FNiagaraTypeDefinition::Vec3Def.Flags)) {
            if (((iVar8 < 0) ||
                ((ulonglong)(longlong)(this->ParameterData).ArrayNum < lVar10 + 0xcU)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                   ,0x17f,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = (this->ParameterData).AllocatorInstance.Data;
            local_a8 = *(undefined8 *)(pFVar3 + lVar10);
            fVar2 = *(float *)(pFVar3 + lVar10 + 8);
            local_a0 = fVar2;
            iVar8 = _finite((double)(float)local_a8);
            if (iVar8 != 0) {
              iVar8 = _finite((double)local_a8._4_4_);
joined_r0x00014933f88c:
              if (iVar8 != 0) goto LAB_14933f698;
            }
          }
          else {
            pFVar9 = FNiagaraTypeDefinitionHandle::Resolve(this_00);
            if ((((TObjectPtr<UObject>_u_0)(pFVar9->ClassStructOrEnum).field0_0x0.DebugPtr !=
                  FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0) ||
                (pFVar9->UnderlyingType != FNiagaraTypeDefinition::Vec4Def.UnderlyingType)) ||
               (pFVar9->Flags != FNiagaraTypeDefinition::Vec4Def.Flags)) {
              pFVar9 = FNiagaraTypeDefinitionHandle::Resolve(this_00);
              if ((((TObjectPtr<UObject>_u_0)(pFVar9->ClassStructOrEnum).field0_0x0.DebugPtr !=
                    FNiagaraTypeDefinition::Matrix4Def.ClassStructOrEnum.field0_0x0) ||
                  (pFVar9->UnderlyingType != FNiagaraTypeDefinition::Matrix4Def.UnderlyingType)) ||
                 (pFVar9->Flags != FNiagaraTypeDefinition::Matrix4Def.Flags)) goto LAB_14933f6c5;
              if (((iVar8 < 0) ||
                  ((ulonglong)(longlong)(this->ParameterData).ArrayNum < lVar10 + 0x40U)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                     ,0x17f,L""), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar3 = (this->ParameterData).AllocatorInstance.Data;
              pfVar11 = (float *)&local_88;
              lVar12 = 0;
              local_88 = *(undefined8 *)(pFVar3 + lVar10);
              uStack_80 = *(undefined8 *)(pFVar3 + lVar10 + 8);
              local_78 = *(undefined8 *)(pFVar3 + lVar10 + 0x10);
              uStack_70 = *(undefined8 *)(pFVar3 + lVar10 + 0x10 + 8);
              local_68 = *(undefined8 *)(pFVar3 + lVar10 + 0x20);
              uStack_60 = *(undefined8 *)(pFVar3 + lVar10 + 0x20 + 8);
              local_58 = *(undefined8 *)(pFVar3 + lVar10 + 0x30);
              uStack_50 = *(undefined8 *)(pFVar3 + lVar10 + 0x30 + 8);
              do {
                lVar10 = 0;
                pfVar13 = pfVar11;
                do {
                  iVar8 = _finite((double)*pfVar13);
                  if (iVar8 == 0) goto LAB_14933f6a6;
                  lVar10 = lVar10 + 1;
                  pfVar13 = pfVar13 + 1;
                } while (lVar10 < 4);
                lVar12 = lVar12 + 1;
                pfVar11 = pfVar11 + 4;
              } while (lVar12 < 4);
              goto LAB_14933f98f;
            }
            if (((iVar8 < 0) ||
                ((ulonglong)(longlong)(this->ParameterData).ArrayNum < lVar10 + 0x10U)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                   ,0x17f,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = (this->ParameterData).AllocatorInstance.Data + lVar10;
            local_48 = *(float *)pFVar3;
            fVar5 = *(float *)(pFVar3 + 4);
            fVar6 = *(float *)(pFVar3 + 8);
            fVar2 = *(float *)(pFVar3 + 0xc);
            fStack_44 = fVar5;
            fStack_40 = fVar6;
            fStack_3c = fVar2;
            iVar8 = _finite((double)local_48);
            if ((iVar8 != 0) && (iVar8 = _finite((double)fVar5), iVar8 != 0)) {
              iVar8 = _finite((double)fVar6);
              goto joined_r0x00014933f88c;
            }
          }
LAB_14933f6a6:
          bVar7 = true;
        }
        if (bVar7) goto LAB_14933f6ac;
      }
LAB_14933f6c5:
      pFVar1 = this_00 + 8;
      this_00 = this_00 + 10;
    } while (pFVar1 != local_98 + (longlong)local_90 * 10);
  }
  return;
}

// CopyParameterData @ 149341470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraParameterStore::CopyParameterData
          (FNiagaraParameterStore *this,FNiagaraParameterStore *param_1,FNiagaraVariable *param_2,
          FNiagaraVariable *param_3)

{
  longlong *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FNiagaraTypeDefinition *pFVar7;
  FNiagaraTypeDefinition *pFVar8;
  uint *puVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  UNiagaraDataInterface *pUVar12;
  TObjectPtr<UObject> TVar13;
  TVector<double> *pTVar14;
  TVector<double> *pTVar15;
  uint uVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  FNiagaraVariable *local_res18;
  longlong local_res20;
  undefined1 local_70 [8];
  FString local_68;
  FString local_58;
  
  this_00 = &param_2->_padding_;
  local_res18 = param_2;
  pFVar7 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)this_00);
  pFVar8 = FNiagaraTypeDefinitionHandle::Resolve
                     ((FNiagaraTypeDefinitionHandle *)&param_3->_padding_);
  if (((((pFVar7->ClassStructOrEnum).field0_0x0.DebugPtr !=
         (pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr) ||
       (pFVar7->UnderlyingType != pFVar8->UnderlyingType)) || (pFVar7->Flags != pFVar8->Flags)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_745892470486727194>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraParameterStore.cpp"
                         ,0x5e6,"SourceParameter.GetType() == TargetParameter.GetType()"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar9 = (uint *)(**(code **)(param_1->_padding_ + 0x58))(param_1,param_3);
  uVar16 = 0xffffffff;
  if (puVar9 == (uint *)0x0) {
    uVar17 = 0xffffffff;
  }
  else {
    uVar17 = *puVar9;
  }
  puVar9 = (uint *)(**(code **)(this->_padding_ + 0x58))(this);
  if (puVar9 != (uint *)0x0) {
    uVar16 = *puVar9;
  }
  if ((uVar17 != 0xffffffff) && (uVar16 != 0xffffffff)) {
    pFVar7 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)this_00);
    bVar4 = FNiagaraTypeDefinition::IsDataInterface(pFVar7);
    if (bVar4) {
      if ((((int)uVar17 < 0) || ((param_1->DataInterfaces).ArrayNum <= (int)uVar17)) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_745892470486727186>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraParameterStore.cpp"
                             ,0x5ee,"DestStore.DataInterfaces.IsValidIndex(DestIndex)"), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = 0;
      if ((int)uVar17 < (param_1->DataInterfaces).ArrayNum) {
        uVar5 = ~uVar17 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_res20 = (longlong)(int)uVar17;
      pUVar12 = *(UNiagaraDataInterface **)
                 ((param_1->DataInterfaces).AllocatorInstance.Data + local_res20 * 8);
      if (pUVar12 == (UNiagaraDataInterface *)0x0) {
        bVar4 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals(&param_1->Owner,(void *)0x0);
        if (bVar4) {
          local_res8[0] = 0;
          bVar4 = `FNiagaraParameterStore::CopyParameterData'::__l12::<lambda_1>::operator()
                            (local_res8);
          if (!bVar4) {
            return;
          }
        }
        if (2 < (byte)LogNiagara._0_1_) {
          pUVar10 = FWeakObjectPtr::Get(&(param_1->Owner).WeakPtr);
          if (pUVar10 == (UObject *)0x0) {
            ::FString::FString(&local_68,L"None");
          }
          else {
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar10,&local_68,(UObject *)0x0);
          }
          ::FName::ToString((FName *)local_res18,&local_58);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
        local_res10 = 0;
        pFVar7 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)this_00);
        pUVar11 = FNiagaraTypeDefinition::GetClass(pFVar7);
        pUVar10 = FWeakObjectPtr::Get(&(param_1->Owner).WeakPtr);
        pUVar12 = NewObject<UNiagaraDataInterface>
                            (pUVar10,pUVar11,(FName)0x0,RF_Transactional|RF_Public,(UObject *)0x0,
                             false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        lVar3 = local_res20;
        uVar5 = 0;
        if ((int)uVar17 < (param_1->DataInterfaces).ArrayNum) {
          uVar5 = ~uVar17 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_1->DataInterfaces).AllocatorInstance.Data;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar12 != (UNiagaraDataInterface *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        *(UNiagaraDataInterface **)(pFVar1 + lVar3 * 8) = pUVar12;
      }
      uVar17 = 0;
      if ((int)uVar16 < (this->DataInterfaces).ArrayNum) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UNiagaraDataInterface::CopyTo
                (*(UNiagaraDataInterface **)
                  ((this->DataInterfaces).AllocatorInstance.Data + (longlong)(int)uVar16 * 8),
                 pUVar12);
      param_1->bInterfacesDirty = 1;
    }
    else {
      pFVar7 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)this_00);
      bVar4 = FNiagaraTypeDefinition::IsUObject(pFVar7);
      if (bVar4) {
        TVar13 = GetUObject(this,(int)local_70);
        SetUObject(param_1,TVar13,uVar17);
      }
      else {
        pFVar7 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)this_00);
        if ((((TObjectPtr<UObject>_u_0)(pFVar7->ClassStructOrEnum).field0_0x0.DebugPtr ==
              FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) &&
            (pFVar7->UnderlyingType == FNiagaraTypeDefinition::PositionDef.UnderlyingType)) &&
           (pFVar7->Flags == FNiagaraTypeDefinition::PositionDef.Flags)) {
          pTVar14 = (TVector<double> *)(**(code **)(this->_padding_ + 0x68))(this,param_2);
          pTVar15 = &UE::Math::TVector<double>::ZeroVector;
          if (pTVar14 != (TVector<double> *)0x0) {
            pTVar15 = pTVar14;
          }
          (**(code **)(param_1->_padding_ + 0x60))(param_1,pTVar15,param_3,0);
        }
        else {
          pFVar7 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)this_00);
          iVar6 = FNiagaraTypeDefinition::GetSize(pFVar7);
          SetParameterData(param_1,(uchar *)((this->ParameterData).AllocatorInstance.Data +
                                            (int)uVar16),uVar17,iVar6);
        }
      }
    }
  }
  return;
}

// CopyParameterData @ 1493418c0

void __thiscall
FNiagaraParameterStore::CopyParameterData
          (FNiagaraParameterStore *this,FNiagaraParameterStore *param_1,FNiagaraVariable *param_2)

{
  CopyParameterData(this,param_1,param_2,param_2);
  return;
}

// CopyParameterData @ 1493418d0

bool __thiscall
FNiagaraParameterStore::CopyParameterData
          (FNiagaraParameterStore *this,FNiagaraVariable *param_1,uchar *param_2)

{
  int iVar1;
  longlong lVar2;
  FNiagaraTypeDefinition *this_00;
  FScriptContainerElement *_Src;
  
  lVar2 = (**(code **)(this->_padding_ + 0x50))(this,param_1,0);
  if (lVar2 == 0) {
    return false;
  }
  _Src = (this->ParameterData).AllocatorInstance.Data + *(int *)(lVar2 + 0xc);
  if (((0 < *(int *)(lVar2 + 0x20)) && (0 < ((FNiagaraLwcStructConverter *)(lVar2 + 0x10))->LWCSize)
      ) && (0 < *(int *)(lVar2 + 0x14))) {
    FNiagaraLwcStructConverter::ConvertDataFromSimulation
              ((FNiagaraLwcStructConverter *)(lVar2 + 0x10),param_2,(uchar *)_Src,1);
    return true;
  }
  this_00 = FNiagaraTypeDefinitionHandle::Resolve
                      ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
  iVar1 = FNiagaraTypeDefinition::GetSize(this_00);
  memcpy(param_2,_Src,(longlong)iVar1);
  return true;
}

// CopyParametersTo @ 149341cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraParameterStore::CopyParametersTo
          (FNiagaraParameterStore *this,FNiagaraParameterStore *param_1,bool param_2,
          EDataInterfaceCopyMethod param_3)

{
  UNiagaraDataInterface *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FNiagaraTypeDefinition *pFVar7;
  uint *puVar8;
  TObjectPtr<UObject> TVar9;
  UObject *this_01;
  FString *pFVar10;
  FScriptContainerElement *_Dst;
  longlong lVar11;
  longlong lVar12;
  FScriptContainerElement *_Src;
  undefined8 uVar13;
  bool bVar14;
  FName *this_02;
  uint local_res8 [2];
  FString local_108;
  FString local_f8;
  FString local_e8;
  FName *local_d8;
  FString local_d0;
  FName local_c0;
  FName *local_b8;
  FName local_b0;
  uint local_a8;
  void *local_a0;
  undefined8 local_98;
  FName *local_90;
  int local_88;
  FString local_80;
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  FString local_60;
  FString local_50;
  
  bVar14 = false;
  local_res8[0] = 0;
  (**(code **)this->_padding_)(this,&local_90);
  local_b8 = local_90 + (longlong)local_88 * 5;
  if (local_90 != local_b8) {
    local_d8 = local_90 + 1;
    this_02 = local_90;
    do {
      uVar5 = this_02[1].Number;
      lVar12 = (longlong)(int)uVar5;
      if ((*this_02 == (FName)0x0) ||
         (pFVar7 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)local_d8),
         (pFVar7->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0)) {
        local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.Data.ArrayNum = 0;
        local_f8.Data.ArrayMax = 0;
        ::FString::operator=(&local_f8,L"Unknown");
        local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.Data.ArrayNum = 0;
        local_108.Data.ArrayMax = 0;
        bVar2 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals(&this->Owner,(void *)0x0);
        if (bVar2) {
          iVar6 = local_f8.Data.ArrayNum + -1;
          if (local_f8.Data.ArrayNum == 0) {
            iVar6 = 0;
          }
          ::FString::AssignRange(&local_108,(wchar_t *)local_f8.Data.AllocatorInstance.Data,iVar6);
        }
        else {
          this_01 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
          pFVar10 = UObjectBaseUtility::GetPathName
                              ((UObjectBaseUtility *)this_01,&local_60,(UObject *)0x0);
          ::FString::ConcatFC(&local_80,pFVar10,L".");
          ::FString::ConcatFF(&local_e8,&local_80,&local_f8);
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          local_108.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
          local_108.Data.ArrayNum = local_e8.Data.ArrayNum;
          local_108.Data.ArrayMax = local_e8.Data.ArrayMax;
          local_e8.Data.ArrayNum = 0;
          local_e8.Data.ArrayMax = 0;
          local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
        }
        if (1 < (byte)LogNiagara._0_1_) {
          pFVar7 = FNiagaraTypeDefinitionHandle::Resolve
                             ((FNiagaraTypeDefinitionHandle *)(this_02 + 1));
          if ((pFVar7->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
            bVar14 = true;
            pFVar7 = FNiagaraTypeDefinitionHandle::Resolve
                               ((FNiagaraTypeDefinitionHandle *)(this_02 + 1));
            if ((pFVar7->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
              ::FString::FString(&local_d0,L"Invalid");
            }
            else {
              local_c0 = UE::CoreUObject::Private::GetFName((UObject *)local_68);
              local_c0 = *(FName *)local_c0;
              ::FName::ToString(&local_c0,&local_d0);
            }
          }
          ::FName::ToString(this_02,&local_50);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
          if ((bVar14) &&
             (bVar14 = false, local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             )) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
        }
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
      }
      else {
        puVar8 = (uint *)(**(code **)(param_1->_padding_ + 0x58))(param_1);
        if (puVar8 == (uint *)0x0) {
          local_res8[0] = 0xffffffff;
LAB_149341daf:
          if (param_2) {
LAB_149341dd1:
            uVar13 = 0;
          }
          else {
            pFVar7 = FNiagaraTypeDefinitionHandle::Resolve
                               ((FNiagaraTypeDefinitionHandle *)(this_02 + 1));
            bVar2 = FNiagaraTypeDefinition::IsDataInterface(pFVar7);
            if ((!bVar2) || (param_3 != Value)) goto LAB_149341dd1;
            uVar13 = 1;
          }
          local_a8 = this_02[1].ComparisonIndex.Value;
          local_b0 = *this_02;
          local_a0 = (void *)0x0;
          local_98 = 0;
          (**(code **)(param_1->_padding_ + 0x10))(param_1,&local_b0,uVar13,0,local_res8);
          if (local_a0 != (void *)0x0) {
            FMemory::Free(local_a0);
          }
        }
        else {
          local_res8[0] = *puVar8;
          if (local_res8[0] == 0xffffffff) goto LAB_149341daf;
        }
        if (((!param_2) && (local_res8[0] != 0xffffffff)) && (uVar5 != 0xffffffff)) {
          pFVar7 = FNiagaraTypeDefinitionHandle::Resolve
                             ((FNiagaraTypeDefinitionHandle *)(this_02 + 1));
          bVar2 = FNiagaraTypeDefinition::IsDataInterface(pFVar7);
          if (bVar2) {
            if ((((int)uVar5 < 0) || ((this->DataInterfaces).ArrayNum <= (int)uVar5)) &&
               (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_745892470486727513>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraParameterStore.cpp"
                                   ,0x4a7,"DataInterfaces.IsValidIndex(SrcIndex)"), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if ((((int)local_res8[0] < 0) ||
                ((param_1->DataInterfaces).ArrayNum <= (int)local_res8[0])) &&
               (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_745892470486727512>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraParameterStore.cpp"
                                   ,0x4a8,"DestStore.DataInterfaces.IsValidIndex(DestIndex)"), bVar2
               )) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar4 = local_res8[0];
            if (param_3 == Reference) {
              uVar3 = 0;
              if ((int)uVar5 < (this->DataInterfaces).ArrayNum) {
                uVar3 = ~uVar5 >> 0x1f;
              }
              if ((uVar3 == 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              SetDataInterface(param_1,*(UNiagaraDataInterface **)
                                        ((this->DataInterfaces).AllocatorInstance.Data + lVar12 * 8)
                               ,uVar4);
            }
            else if (param_3 == Value) {
              uVar4 = 0;
              if ((int)uVar5 < (this->DataInterfaces).ArrayNum) {
                uVar4 = ~uVar5 >> 0x1f;
              }
              if ((uVar4 == 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              lVar11 = (longlong)(int)local_res8[0];
              this_00 = *(UNiagaraDataInterface **)
                         ((this->DataInterfaces).AllocatorInstance.Data + lVar12 * 8);
              if (((int)local_res8[0] < 0) ||
                 ((param_1->DataInterfaces).ArrayNum <= (int)local_res8[0])) {
                UNiagaraDataInterface::CopyTo(this_00,(UNiagaraDataInterface *)0x0);
              }
              else {
                uVar5 = 0;
                if ((int)local_res8[0] < (param_1->DataInterfaces).ArrayNum) {
                  uVar5 = ~local_res8[0] >> 0x1f;
                }
                if ((uVar5 == 0) &&
                   (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar2)) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                UNiagaraDataInterface::CopyTo
                          (this_00,*(UNiagaraDataInterface **)
                                    ((param_1->DataInterfaces).AllocatorInstance.Data + lVar11 * 8))
                ;
              }
            }
            else {
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraParameterStore.cpp"
                                 ,0x4b4,
                                 L"A data interface copy method must be specified if the parameter store has data interfaces."
                                );
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
          }
          else {
            pFVar7 = FNiagaraTypeDefinitionHandle::Resolve
                               ((FNiagaraTypeDefinitionHandle *)(this_02 + 1));
            bVar2 = FNiagaraTypeDefinition::IsUObject(pFVar7);
            uVar5 = local_res8[0];
            if (bVar2) {
              TVar9 = GetUObject(this,(int)local_70);
              SetUObject(param_1,TVar9,uVar5);
            }
            else if ((this->ParameterData).ArrayNum != 0) {
              pFVar7 = FNiagaraTypeDefinitionHandle::Resolve
                                 ((FNiagaraTypeDefinitionHandle *)(this_02 + 1));
              iVar6 = FNiagaraTypeDefinition::GetSize(pFVar7);
              uVar5 = local_res8[0];
              lVar11 = (longlong)(int)local_res8[0];
              _Src = (this->ParameterData).AllocatorInstance.Data + lVar12;
              if ((_Src == (FScriptContainerElement *)0x0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Data != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                     ,0x255,L""), bVar2)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              if ((((int)uVar5 < 0) || ((param_1->ParameterData).ArrayNum < (int)(iVar6 + uVar5)))
                 && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Offset >= 0 && (Offset + Size) <= ParameterData.Num()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                        ,0x256,L""), bVar2)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              _Dst = (param_1->ParameterData).AllocatorInstance.Data + lVar11;
              if (_Dst != _Src) {
                memcpy(_Dst,_Src,(longlong)iVar6);
              }
              param_1->bParametersDirty = 1;
            }
          }
        }
      }
      this_02 = this_02 + 5;
      local_d8 = local_d8 + 5;
    } while (this_02 != local_b8);
  }
  OnLayoutChange(param_1);
  return;
}

// CopySortedParameterOffsets @ 149342350

void __thiscall
FNiagaraParameterStore::CopySortedParameterOffsets
          (FNiagaraParameterStore *this,TArrayView<FNiagaraVariableWithOffset_const_,int> *param_1)

{
  TArray<FNiagaraVariableWithOffset,TSizedDefaultAllocator<32>_> *pTVar1;
  uint uVar2;
  FNiagaraVariableWithOffset *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  ForAnyElementType local_18;
  uint local_10;
  int local_c;
  
  uVar2 = param_1->ArrayNum;
  pFVar3 = param_1->DataPtr;
  local_18.Data = (FScriptContainerElement *)0x0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if ((pFVar3 == (FNiagaraVariableWithOffset *)0x0) && (uVar2 != 0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x2d3,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_10 = uVar2;
  if (uVar2 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,uVar2,0,&local_18,uVar2,&local_c);
    ConstructItems<FNiagaraVariableWithOffset,FNiagaraVariableWithOffset,int>
              (local_18.Data,pFVar3,uVar2);
  }
  pTVar1 = &this->SortedParameterOffsets;
  if (pTVar1 != (TArray<FNiagaraVariableWithOffset,TSizedDefaultAllocator<32>_> *)&local_18) {
    DestructItems<FNiagaraVariableWithOffset,int>
              ((FNiagaraVariableWithOffset *)(pTVar1->AllocatorInstance).Data,
               (this->SortedParameterOffsets).ArrayNum);
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = local_18.Data;
    (this->SortedParameterOffsets).ArrayNum = local_10;
    (this->SortedParameterOffsets).ArrayMax = local_c;
    local_c = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10 = 0;
  }
  DestructItems<FNiagaraVariableWithOffset,int>
            ((FNiagaraVariableWithOffset *)local_18.Data,local_10);
  if ((FNiagaraVariableWithOffset *)local_18.Data != (FNiagaraVariableWithOffset *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// Dump @ 1493454f0

void __thiscall FNiagaraParameterStore::Dump(FNiagaraParameterStore *this)

{
  return;
}

// DumpParameters @ 149345510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraParameterStore::DumpParameters(FNiagaraParameterStore *this,bool param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  FNiagaraTypeDefinition *pFVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  FName *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  undefined1 local_res8 [8];
  char local_res10;
  FName local_res18 [2];
  FString local_b8;
  FString local_a8;
  FString local_98;
  FName *local_88;
  int local_80;
  FString local_78;
  undefined1 local_68 [8];
  FNiagaraTypeDefinitionHandle local_60 [2];
  ForAnyElementType local_58;
  undefined8 local_50;
  
  local_res10 = param_1;
  (**(code **)this->_padding_)(this,&local_88);
  pFVar7 = local_88;
  while( true ) {
    if (pFVar7 == local_88 + (longlong)local_80 * 5) {
      if (local_res10 != '\0') {
        iVar9 = (this->Bindings).ArrayNum;
        pFVar6 = (this->Bindings).AllocatorInstance.Data;
        pFVar8 = pFVar6 + (longlong)iVar9 * 0x38;
        while( true ) {
          if ((this->Bindings).ArrayNum != iVar9) {
            `TCheckedPointerIterator<TTuple<FNiagaraParameterStore_*,FNiagaraParameterStoreBinding>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (pFVar6 == pFVar8) break;
          pFVar6 = pFVar6 + 0x38;
        }
      }
      return;
    }
    local_68 = *(undefined1 (*) [8])pFVar7;
    local_60[0].RegisteredTypeIndex = pFVar7[1].ComparisonIndex.Value;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50._0_4_ = 0;
    local_50._4_4_ = 0;
    pFVar6 = (this->ParameterData).AllocatorInstance.Data + (int)pFVar7[1].Number;
    if ((pFVar6 == (FScriptContainerElement *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Data",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                           ,0x5ec,L""), bVar3)) break;
    FNiagaraVariable::AllocateData((FNiagaraVariable *)local_68);
    memcpy(local_58.Data,pFVar6,(longlong)(int)local_50);
    if (4 < (byte)LogNiagara._0_1_) {
      pFVar4 = FNiagaraTypeDefinitionHandle::Resolve(local_60);
      if ((pFVar4->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
        ::FString::FString(&local_98,L"Invalid");
      }
      else {
        local_res18[0] = UE::CoreUObject::Private::GetFName((UObject *)(local_res18 + 1));
        local_res18[0] = *(FName *)local_res18[0];
        ::FName::ToString(local_res18,&local_98);
      }
      (**(code **)(this->_padding_ + 0x58))(this,local_68,0);
      pFVar5 = ::FName::ToString((FName *)local_68,&local_78);
      ::FString::ConcatFC(&local_b8,pFVar5,L"(");
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      pFVar4 = FNiagaraTypeDefinitionHandle::Resolve(local_60);
      FVar2.Data = local_58.Data;
      if (((pFVar4->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                             ,0x445,L"Type definition is not valid."), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (FVar2.Data == (FScriptContainerElement *)0x0) {
        ::FString::FString(&local_a8,L"(null)");
      }
      else {
        FNiagaraTypeHelper::ToString
                  (&local_a8,(uchar *)FVar2.Data,(pFVar4->ClassStructOrEnum).field0_0x0.DebugPtr);
      }
      iVar9 = local_a8.Data.ArrayNum + -1;
      if (local_a8.Data.ArrayNum == 0) {
        iVar9 = 0;
      }
      ::FString::AppendChars(&local_b8,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar9);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      ::FString::AppendChars(&local_b8,L")",1);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    pFVar7 = pFVar7 + 5;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// Empty @ 1493457f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraParameterStore::Empty(FNiagaraParameterStore *this,bool param_1)

{
  int *piVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory> FVar4;
  FThreadStats *pFVar5;
  FThreadStatsPool *pFVar6;
  uchar auVar7 [8];
  FName local_res8;
  FStatMessage local_38;
  
  DestructItems<FNiagaraVariableWithOffset,int>
            ((FNiagaraVariableWithOffset *)(this->SortedParameterOffsets).AllocatorInstance.Data,
             (this->SortedParameterOffsets).ArrayNum);
  piVar1 = &(this->SortedParameterOffsets).ArrayMax;
  (this->SortedParameterOffsets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->SortedParameterOffsets).AllocatorInstance,0,piVar1);
  }
  auVar7 = (uchar  [8])(longlong)(this->ParameterData).ArrayMax;
  piVar1 = &(this->ParameterData).ArrayMax;
  if (auVar7 != (uchar  [8])0x0) {
    FVar4 = StatPtr_STAT_NiagaraParamStoreMemory;
    if (StatPtr_STAT_NiagaraParamStoreMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_NiagaraParamStoreMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParamStoreMemory,*pFVar3,
                         L"Niagara parameter store memory","STATGROUP_Niagara","STATCAT_Niagara",
                         L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar4;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar5 == (FThreadStats *)0x0) {
        pFVar6 = FThreadStatsPool::Get();
        pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
      }
      local_38.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar2;
      local_38.StatData.Pad = auVar7;
      local_38.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar5,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar7);
      if (pFVar5->ScopeCount == 0) {
        FThreadStats::Flush(pFVar5,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar5,false,false);
      }
    }
  }
  (this->ParameterData).ArrayNum = 0;
  if ((this->ParameterData).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->ParameterData).AllocatorInstance,0,piVar1);
  }
  auVar7 = (uchar  [8])(longlong)*piVar1;
  if (auVar7 != (uchar  [8])0x0) {
    FVar4 = StatPtr_STAT_NiagaraParamStoreMemory;
    if (StatPtr_STAT_NiagaraParamStoreMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_NiagaraParamStoreMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParamStoreMemory,*pFVar3,
                         L"Niagara parameter store memory","STATGROUP_Niagara","STATCAT_Niagara",
                         L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar4;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar5 == (FThreadStats *)0x0) {
        pFVar6 = FThreadStatsPool::Get();
        pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
      }
      local_38.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_res8 = FVar2;
      local_38.StatData.Pad = auVar7;
      local_38.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar5,&local_38);
      FStatsTrace::Add(&local_res8,(long64)auVar7);
      if (pFVar5->ScopeCount == 0) {
        FThreadStats::Flush(pFVar5,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar5,false,false);
      }
    }
  }
  piVar1 = &(this->DataInterfaces).ArrayMax;
  (this->DataInterfaces).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->DataInterfaces).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->UObjects).ArrayMax;
  (this->UObjects).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->UObjects).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->OriginalPositionData).ArrayMax;
  (this->OriginalPositionData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->OriginalPositionData).AllocatorInstance,0,piVar1);
  }
  if (param_1) {
    UnbindAll(this);
  }
  return;
}

// FindParameterOffset @ 149346a40

int * __thiscall
FNiagaraParameterStore::FindParameterOffset
          (FNiagaraParameterStore *this,FNiagaraVariableBase *param_1,bool param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  FNiagaraTypeDefinition *pFVar9;
  FName FVar10;
  int *piVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  longlong local_48;
  ulonglong local_40;
  
  (**(code **)this->_padding_)(this,&local_48);
  lVar4 = local_48;
  iVar15 = (int)local_40;
  if (iVar15 != 0) {
    if (param_2) {
      local_40 = local_40 & 0xffffffff;
      uVar17 = 0;
      do {
        iVar6 = (int)local_40;
        uVar16 = (longlong)iVar6 / 2;
        local_40 = uVar16 & 0xffffffff;
        iVar13 = (int)uVar16;
        uVar18 = iVar13 + uVar17;
        iVar7 = *(int *)(local_48 + (longlong)(int)uVar18 * 0x28) -
                (param_1->Name).ComparisonIndex.Value;
        if (iVar7 == 0) {
          iVar7 = *(int *)(local_48 + 4 + (longlong)(int)uVar18 * 0x28) - (param_1->Name).Number;
        }
        if (iVar7 < 0) {
          local_40 = (ulonglong)(uint)(iVar13 + -1 + iVar6 % 2);
          uVar17 = uVar18 + 1;
        }
        else if (iVar7 == 0) {
          bVar5 = true;
          goto LAB_149346bef;
        }
        uVar18 = uVar17;
        uVar17 = uVar18;
      } while ((int)local_40 != 0);
      bVar5 = false;
    }
    else {
      uVar16 = local_40;
      uVar17 = 0;
      do {
        uVar1 = (ulonglong)(uint)((int)uVar16 >> 0x1f) << 0x20 | uVar16 & 0xffffffff;
        uVar2 = (longlong)uVar1 / 2;
        uVar16 = uVar2 & 0xffffffff;
        iVar15 = (int)uVar2;
        uVar18 = iVar15 + uVar17;
        lVar8 = (longlong)(int)uVar18;
        iVar13 = *(int *)(lVar4 + lVar8 * 0x28) - (param_1->Name).ComparisonIndex.Value;
        if ((iVar13 == 0) &&
           (iVar13 = *(int *)(lVar4 + 4 + lVar8 * 0x28) - (param_1->Name).Number, iVar13 == 0)) {
          pFVar9 = FNiagaraTypeDefinitionHandle::Resolve
                             ((FNiagaraTypeDefinitionHandle *)(lVar4 + 8 + lVar8 * 0x28));
          if ((pFVar9->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
            uVar14 = 0;
            iVar6 = 0;
          }
          else {
            FVar10 = UE::CoreUObject::Private::GetFName((UObject *)&stack0xffffffffffffffa8);
            uVar14 = *(undefined8 *)FVar10;
            iVar6 = (int)((ulonglong)uVar14 >> 0x20);
          }
          pFVar9 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
          if ((pFVar9->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
            uVar12 = 0;
            iVar7 = 0;
          }
          else {
            FVar10 = UE::CoreUObject::Private::GetFName((UObject *)&stack0xffffffffffffffb0);
            uVar12 = *(undefined8 *)FVar10;
            iVar7 = (int)((ulonglong)uVar12 >> 0x20);
          }
          iVar13 = (int)uVar14 - (int)uVar12;
          if (iVar13 == 0) {
            iVar13 = iVar6 - iVar7;
          }
        }
        if (iVar13 < 0) {
          uVar16 = (ulonglong)(uint)(iVar15 + -1 + (int)((longlong)uVar1 % 2));
          uVar17 = uVar18 + 1;
        }
        else if (iVar13 == 0) {
          bVar5 = true;
          goto LAB_149346bd3;
        }
        uVar18 = uVar17;
        uVar17 = uVar18;
      } while ((int)uVar16 != 0);
      bVar5 = false;
LAB_149346bd3:
      iVar15 = (int)local_40;
    }
LAB_149346bef:
    if (bVar5) {
      uVar17 = 0;
      if ((int)uVar18 < iVar15) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        piVar11 = (int *)(*pcVar3)();
        return piVar11;
      }
      return (int *)((longlong)(int)uVar18 * 0x28 + 0xc + local_48);
    }
  }
  return (int *)0x0;
}

// FindParameterVariable @ 149346c80

FNiagaraVariableWithOffset * __thiscall
FNiagaraParameterStore::FindParameterVariable
          (FNiagaraParameterStore *this,FNiagaraVariable *param_1,bool param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  FNiagaraTypeDefinition *pFVar9;
  FName FVar10;
  FNiagaraVariableWithOffset *pFVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  longlong local_48;
  ulonglong local_40;
  
  (**(code **)this->_padding_)(this,&local_48);
  lVar4 = local_48;
  iVar15 = (int)local_40;
  if (iVar15 != 0) {
    if (param_2) {
      local_40 = local_40 & 0xffffffff;
      uVar17 = 0;
      do {
        iVar6 = (int)local_40;
        uVar16 = (longlong)iVar6 / 2;
        local_40 = uVar16 & 0xffffffff;
        iVar13 = (int)uVar16;
        uVar18 = iVar13 + uVar17;
        iVar7 = *(int *)(local_48 + (longlong)(int)uVar18 * 0x28) - (int)param_1->_padding_;
        if (iVar7 == 0) {
          iVar7 = *(int *)(local_48 + 4 + (longlong)(int)uVar18 * 0x28) -
                  *(int *)((longlong)&param_1->_padding_ + 4);
        }
        if (iVar7 < 0) {
          local_40 = (ulonglong)(uint)(iVar13 + -1 + iVar6 % 2);
          uVar17 = uVar18 + 1;
        }
        else if (iVar7 == 0) {
          bVar5 = true;
          goto LAB_149346e2f;
        }
        uVar18 = uVar17;
        uVar17 = uVar18;
      } while ((int)local_40 != 0);
      bVar5 = false;
    }
    else {
      uVar16 = local_40;
      uVar17 = 0;
      do {
        uVar1 = (ulonglong)(uint)((int)uVar16 >> 0x1f) << 0x20 | uVar16 & 0xffffffff;
        uVar2 = (longlong)uVar1 / 2;
        uVar16 = uVar2 & 0xffffffff;
        iVar15 = (int)uVar2;
        uVar18 = iVar15 + uVar17;
        lVar8 = (longlong)(int)uVar18;
        iVar13 = *(int *)(lVar4 + lVar8 * 0x28) - (int)param_1->_padding_;
        if ((iVar13 == 0) &&
           (iVar13 = *(int *)(lVar4 + 4 + lVar8 * 0x28) -
                     *(int *)((longlong)&param_1->_padding_ + 4), iVar13 == 0)) {
          pFVar9 = FNiagaraTypeDefinitionHandle::Resolve
                             ((FNiagaraTypeDefinitionHandle *)(lVar4 + 8 + lVar8 * 0x28));
          if ((pFVar9->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
            uVar14 = 0;
            iVar6 = 0;
          }
          else {
            FVar10 = UE::CoreUObject::Private::GetFName((UObject *)&stack0xffffffffffffffa8);
            uVar14 = *(undefined8 *)FVar10;
            iVar6 = (int)((ulonglong)uVar14 >> 0x20);
          }
          pFVar9 = FNiagaraTypeDefinitionHandle::Resolve
                             ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
          if ((pFVar9->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
            uVar12 = 0;
            iVar7 = 0;
          }
          else {
            FVar10 = UE::CoreUObject::Private::GetFName((UObject *)&stack0xffffffffffffffb0);
            uVar12 = *(undefined8 *)FVar10;
            iVar7 = (int)((ulonglong)uVar12 >> 0x20);
          }
          iVar13 = (int)uVar14 - (int)uVar12;
          if (iVar13 == 0) {
            iVar13 = iVar6 - iVar7;
          }
        }
        if (iVar13 < 0) {
          uVar16 = (ulonglong)(uint)(iVar15 + -1 + (int)((longlong)uVar1 % 2));
          uVar17 = uVar18 + 1;
        }
        else if (iVar13 == 0) {
          bVar5 = true;
          goto LAB_149346e13;
        }
        uVar18 = uVar17;
        uVar17 = uVar18;
      } while ((int)uVar16 != 0);
      bVar5 = false;
LAB_149346e13:
      iVar15 = (int)local_40;
    }
LAB_149346e2f:
    if (bVar5) {
      uVar17 = 0;
      if ((int)uVar18 < iVar15) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FNiagaraVariableWithOffset *)(*pcVar3)();
        return pFVar11;
      }
      return (FNiagaraVariableWithOffset *)(local_48 + (longlong)(int)uVar18 * 0x28);
    }
  }
  return (FNiagaraVariableWithOffset *)0x0;
}

// FindVariableFromDataInterface @ 1493473a0

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraVariableBase * __thiscall
FNiagaraParameterStore::FindVariableFromDataInterface
          (FNiagaraParameterStore *this,UNiagaraDataInterface *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UClass *pUVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_NiagaraParameterStoreFindVar> FVar9;
  FNiagaraVariableBase *pFVar10;
  FNiagaraTypeDefinition *this_00;
  UClass *pUVar11;
  FNiagaraVariableBase *pFVar12;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  FNameEntryId FVar16;
  FName FVar17;
  FNiagaraVariableBase *pFVar18;
  bool bVar19;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_58;
  FName local_50;
  FStatMessage local_40;
  
  pFVar12 = (FNiagaraVariableBase *)0x0;
  FVar9 = StatPtr_STAT_NiagaraParameterStoreFindVar;
  if (StatPtr_STAT_NiagaraParameterStoreFindVar ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraParameterStoreFindVar>)0x0) {
    pFVar8 = ::FName::FName(&local_58,"STAT_NiagaraParameterStoreFindVar");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_NiagaraParameterStoreFindVar>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParameterStoreFindVar,
                       *pFVar8,L"Parameter store find var","STATGROUP_Niagara","STATCAT_Niagara",
                       L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar9;
  bVar5 = false;
  bVar7 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar13 = FVar17.Number;
  if ((FVar16.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar16.Value;
        local_res18.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraParameterStore.cpp"
                   ,0x5d2);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar16.Value;
      local_res20.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar6 = true;
      goto LAB_1493474f7;
    }
  }
  bVar6 = false;
  FVar17 = local_50;
LAB_1493474f7:
  pFVar2 = (this->DataInterfaces).AllocatorInstance.Data;
  pFVar15 = pFVar2;
  do {
    pFVar18 = pFVar12;
    if (pFVar15 == pFVar2 + (longlong)(this->DataInterfaces).ArrayNum * 8) {
LAB_149347598:
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar6) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
          local_40.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
          local_40.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_res20);
          local_40.StatData.Pad[4] = '\0';
          local_40.StatData.Pad[5] = '\0';
          local_40.StatData.Pad[6] = '\0';
          local_40.StatData.Pad[7] = '\0';
          local_40.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
          local_40.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
          local_40.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
          local_40.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_01,&local_40);
          piVar1 = &this_01->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_01,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_01,false,false);
          }
        }
      }
      return pFVar18;
    }
    if (*(UNiagaraDataInterface **)pFVar15 == (UNiagaraDataInterface *)0x0) {
      bVar19 = param_1 == (UNiagaraDataInterface *)0x0;
    }
    else {
      bVar19 = *(UNiagaraDataInterface **)pFVar15 == param_1;
    }
    if (bVar19) {
      iVar14 = (int)((longlong)pFVar15 - (longlong)pFVar2 >> 3);
      if ((iVar14 != -1) &&
         (pFVar10 = FindVariableFromDataInterfaceIndex(this,iVar14),
         pFVar10 != (FNiagaraVariableBase *)0x0)) {
        this_00 = FNiagaraTypeDefinitionHandle::Resolve(&pFVar10->TypeDefHandle);
        pUVar3 = (UClass *)param_1->_padding_;
        pUVar11 = FNiagaraTypeDefinition::GetClass(this_00);
        pFVar18 = pFVar10;
        if ((pUVar11 != pUVar3) &&
           (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_745892470486727209>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraParameterStore.cpp"
                                ,0x5d7,"Variable->GetType().GetClass() == Interface->GetClass()"),
           pFVar18 = pFVar12, bVar19)) {
          pcVar4 = (code *)swi(3);
          pFVar12 = (FNiagaraVariableBase *)(*pcVar4)();
          return pFVar12;
        }
      }
      goto LAB_149347598;
    }
    pFVar15 = pFVar15 + 8;
  } while( true );
}

// FindVariableFromDataInterfaceIndex @ 1493476a0

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraVariableBase * __thiscall
FNiagaraParameterStore::FindVariableFromDataInterfaceIndex(FNiagaraParameterStore *this,int param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_NiagaraParameterStoreFindVar> FVar7;
  FNiagaraTypeDefinition *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uchar auVar8 [8];
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  TAlignedBytes<8,8> TVar12;
  FNameEntryId FVar13;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FStatMessage local_38;
  
  FVar7 = StatPtr_STAT_NiagaraParameterStoreFindVar;
  if (StatPtr_STAT_NiagaraParameterStoreFindVar ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraParameterStoreFindVar>)0x0) {
    pFVar6 = ::FName::FName(&local_res18,"STAT_NiagaraParameterStoreFindVar");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_NiagaraParameterStoreFindVar>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParameterStoreFindVar,
                       *pFVar6,L"Parameter store find var","STATGROUP_Niagara","STATCAT_Niagara",
                       L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar7;
  FVar13.Value = 0;
  bVar2 = false;
  bVar4 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraParameterStore.cpp"
                   ,0x5c5);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      FVar13.Value = FVar10.Value;
      goto LAB_149347809;
    }
  }
  bVar3 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_149347809:
  (**(code **)this->_padding_)(this,&local_38);
  for (TVar12.Pad = local_38.StatData.Pad;
      TVar12.Pad != local_38.StatData.Pad + (longlong)(int)local_38.NameAndInfo.Index.Value * 0x28;
      TVar12.Pad = TVar12.Pad + 0x28) {
    if ((((FNiagaraVariableBase *)((longlong)TVar12.Pad + 0xc))->Name).ComparisonIndex.Value ==
        param_1) {
      this_00 = FNiagaraTypeDefinitionHandle::Resolve
                          ((FNiagaraTypeDefinitionHandle *)((longlong)TVar12.Pad + 8));
      bVar5 = FNiagaraTypeDefinition::IsDataInterface(this_00);
      if (bVar5) goto LAB_149347856;
    }
  }
  TVar12.Pad[0] = '\0';
  TVar12.Pad[1] = '\0';
  TVar12.Pad[2] = '\0';
  TVar12.Pad[3] = '\0';
  TVar12.Pad[4] = '\0';
  TVar12.Pad[5] = '\0';
  TVar12.Pad[6] = '\0';
  TVar12.Pad[7] = '\0';
LAB_149347856:
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_38);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  auVar8[0] = TVar12.Pad[0];
  auVar8[1] = TVar12.Pad[1];
  auVar8[2] = TVar12.Pad[2];
  auVar8[3] = TVar12.Pad[3];
  auVar8[4] = TVar12.Pad[4];
  auVar8[5] = TVar12.Pad[5];
  auVar8[6] = TVar12.Pad[6];
  auVar8[7] = TVar12.Pad[7];
  return (FNiagaraVariableBase *)auVar8;
}

// GetDataInterface @ 14934f8a0

UNiagaraDataInterface * __thiscall
FNiagaraParameterStore::GetDataInterface(FNiagaraParameterStore *this,FNiagaraVariable *param_1)

{
  int *piVar1;
  UNiagaraDataInterface *pUVar2;
  
  piVar1 = (int *)(**(code **)(this->_padding_ + 0x58))(this,param_1,0);
  if (piVar1 != (int *)0x0) {
    pUVar2 = GetDataInterface(this,*piVar1);
    return pUVar2;
  }
  pUVar2 = GetDataInterface(this,-1);
  return pUVar2;
}

// GetPositionData @ 1493554f0

TVector<double> * __thiscall
FNiagaraParameterStore::GetPositionData(FNiagaraParameterStore *this,FName *param_1)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->OriginalPositionData).ArrayNum;
  pFVar2 = (FName *)(this->OriginalPositionData).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 4;
  while( true ) {
    if ((this->OriginalPositionData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNiagaraPositionSource_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*pFVar2 == *param_1) {
      return (TVector<double> *)(pFVar2 + 1);
    }
    pFVar2 = pFVar2 + 4;
  }
  return (TVector<double> *)0x0;
}

// GetPositionParameterValue @ 149355570

TVector<double> * __thiscall
FNiagaraParameterStore::GetPositionParameterValue(FNiagaraParameterStore *this,FName *param_1)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->OriginalPositionData).ArrayNum;
  pFVar2 = (FName *)(this->OriginalPositionData).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 4;
  while( true ) {
    if ((this->OriginalPositionData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNiagaraPositionSource_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*pFVar2 == *param_1) {
      return (TVector<double> *)(pFVar2 + 1);
    }
    pFVar2 = pFVar2 + 4;
  }
  return (TVector<double> *)0x0;
}

// GetStructConverter @ 149356d30

FNiagaraLwcStructConverter * __thiscall
FNiagaraParameterStore::GetStructConverter
          (FNiagaraParameterStore *this,FNiagaraLwcStructConverter *__return_storage_ptr__,
          FNiagaraVariable *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  FNiagaraTypeDefinition *pFVar8;
  FName FVar9;
  FNiagaraLwcStructConverter *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  uint local_res8;
  UObject local_60;
  
  (**(code **)this->_padding_)(this,&local_60.field_0x10);
  uVar4 = local_60._16_8_;
  uVar15 = 0;
  if (local_60._24_4_ != 0) {
    local_res8 = 0;
    uVar12 = uVar15;
    uVar14 = local_60._24_8_;
    do {
      uVar1 = (ulonglong)(uint)((int)uVar14 >> 0x1f) << 0x20 | uVar14 & 0xffffffff;
      uVar11 = (longlong)uVar1 / 2;
      uVar14 = uVar11 & 0xffffffff;
      iVar3 = (int)uVar11;
      uVar16 = iVar3 + (int)uVar12;
      lVar7 = (longlong)(int)uVar16;
      iVar13 = *(int *)(uVar4 + lVar7 * 0x28) - (int)param_1->_padding_;
      if ((iVar13 == 0) &&
         (iVar13 = *(int *)(uVar4 + 4 + lVar7 * 0x28) - *(int *)((longlong)&param_1->_padding_ + 4),
         iVar13 == 0)) {
        pFVar8 = FNiagaraTypeDefinitionHandle::Resolve
                           ((FNiagaraTypeDefinitionHandle *)(uVar4 + 8 + lVar7 * 0x28));
        uVar12 = uVar15;
        iVar17 = 0;
        if ((pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
          FVar9 = UE::CoreUObject::Private::GetFName(&local_60);
          uVar12 = *(ulonglong *)FVar9;
          iVar17 = (int)(*(ulonglong *)FVar9 >> 0x20);
        }
        pFVar8 = FNiagaraTypeDefinitionHandle::Resolve
                           ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
        uVar11 = uVar15;
        uVar6 = 0;
        if ((pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
          FVar9 = UE::CoreUObject::Private::GetFName((UObject *)&local_60.field_0x8);
          uVar11 = *(ulonglong *)FVar9;
          uVar6 = (uint)(*(ulonglong *)FVar9 >> 0x20);
        }
        iVar13 = (int)uVar12 - (int)uVar11;
        if (iVar13 == 0) {
          iVar13 = iVar17 - uVar6;
        }
      }
      if (iVar13 < 0) {
        local_res8 = uVar16 + 1;
        uVar14 = (ulonglong)(uint)(iVar3 + -1 + (int)((longlong)uVar1 % 2));
      }
      else if (iVar13 == 0) {
        uVar6 = 0;
        if ((int)uVar16 < local_60._24_4_) {
          uVar6 = ~uVar16 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar10 = (FNiagaraLwcStructConverter *)(*pcVar2)();
          return pFVar10;
        }
        FNiagaraLwcStructConverter::FNiagaraLwcStructConverter
                  (__return_storage_ptr__,
                   (FNiagaraLwcStructConverter *)
                   (local_60._16_8_ + ((longlong)(int)uVar16 * 5 + 2) * 8));
        return __return_storage_ptr__;
      }
      uVar12 = (ulonglong)local_res8;
    } while ((int)uVar14 != 0);
  }
  __return_storage_ptr__->LWCSize = 0;
  __return_storage_ptr__->SWCSize = 0;
  (__return_storage_ptr__->ConversionSteps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ConversionSteps).ArrayNum = 0;
  (__return_storage_ptr__->ConversionSteps).ArrayMax = 0;
  return __return_storage_ptr__;
}

// HasPositionData @ 149357eb0

bool __thiscall FNiagaraParameterStore::HasPositionData(FNiagaraParameterStore *this,FName *param_1)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->OriginalPositionData).ArrayNum;
  pFVar2 = (FName *)(this->OriginalPositionData).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 4;
  while( true ) {
    if ((this->OriginalPositionData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNiagaraPositionSource_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*pFVar2 == *param_1) {
      return true;
    }
    pFVar2 = pFVar2 + 4;
  }
  return false;
}

// InitFromSource @ 149357f70

void __thiscall
FNiagaraParameterStore::InitFromSource
          (FNiagaraParameterStore *this,FNiagaraParameterStore *param_1,bool param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  TArrayView<unsigned_char_const_,int> *pTVar3;
  TArrayView<FNiagaraVariableWithOffset_const_,int> local_28;
  TArrayView<unsigned_char_const_,int> local_18;
  
  (**(code **)(this->_padding_ + 0x30))(this,0);
  if (param_1 != (FNiagaraParameterStore *)0x0) {
    puVar2 = (undefined8 *)(**(code **)param_1->_padding_)(param_1,&local_18);
    local_28.DataPtr = (FNiagaraVariableWithOffset *)*puVar2;
    local_28._8_8_ = puVar2[1];
    CopySortedParameterOffsets(this,&local_28);
    pTVar3 = TArrayView<unsigned_char_const_,int>::
             TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&param_1->ParameterData);
    local_28.DataPtr = (FNiagaraVariableWithOffset *)pTVar3->DataPtr;
    local_28.ArrayNum = pTVar3->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&pTVar3->field_0xc;
    AssignParameterData(this,(TArrayView<unsigned_char_const_,int> *)&local_28);
    TArray<TObjectPtr<UNiagaraDataInterface>,TSizedDefaultAllocator<32>_>::operator=
              (&this->DataInterfaces,&param_1->DataInterfaces);
    TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::operator=
              (&this->UObjects,&param_1->UObjects);
    SetOriginalPositionData(this,&param_1->OriginalPositionData);
    if (param_2) {
      this->bParametersDirty = 1;
      this->bUObjectsDirty = 1;
      this->bInterfacesDirty = 1;
      OnLayoutChange(this);
    }
  }
  return;
}

// OnLayoutChange @ 1493602c0

void __thiscall FNiagaraParameterStore::OnLayoutChange(FNiagaraParameterStore *this)

{
  int *piVar1;
  int iVar2;
  FNiagaraParameterStore *pFVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  FNiagaraParameterStore *local_res8;
  
  iVar2 = (this->ParameterData).ArrayNum;
  piVar1 = &(this->ParameterData).ArrayMax;
  uVar7 = (iVar2 + 0xfU & 0xfffffff0) + 0x10;
  if (*piVar1 < (int)uVar7) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar7,&(this->ParameterData).AllocatorInstance,iVar2,piVar1);
  }
  pFVar5 = (this->Bindings).AllocatorInstance.Data;
  iVar2 = (this->Bindings).ArrayNum;
  pFVar6 = pFVar5 + (longlong)iVar2 * 0x38;
  while( true ) {
    if ((this->Bindings).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TTuple<FNiagaraParameterStore_*,FNiagaraParameterStoreBinding>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar5 == pFVar6) break;
    pFVar3 = *(FNiagaraParameterStore **)pFVar5;
    local_res8 = this;
    bVar4 = FNiagaraParameterStoreBinding::BindParameters
                      ((FNiagaraParameterStoreBinding *)(pFVar5 + 8),pFVar3,this,
                       (TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *)0x0);
    if (bVar4) {
      TArray<FNiagaraParameterStore_*,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<FNiagaraParameterStore_*_const_&>(&pFVar3->SourceStores,&local_res8);
    }
    pFVar5 = pFVar5 + 0x38;
  }
  this->LayoutVersion = this->LayoutVersion + 1;
  return;
}

// PaddedParameterSize @ 149361050

int __cdecl FNiagaraParameterStore::PaddedParameterSize(int param_1)

{
  return (param_1 + 0xfU & 0xfffffff0) + 0x10;
}

// PostLoad @ 149361410

void __thiscall FNiagaraParameterStore::PostLoad(FNiagaraParameterStore *this,UObject *param_1)

{
  UObject *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&(this->Owner).WeakPtr,(FObjectPtr)local_res8);
  AlgoImpl::
  IntroSortInternal<FNiagaraVariableWithOffset,int,FIdentityFunctor,TDereferenceWrapper<FNiagaraVariableWithOffset,_FNiagaraParameterStore::SortParameters_::__l2::<lambda_1>_>_>
            ((FNiagaraVariableWithOffset *)(this->SortedParameterOffsets).AllocatorInstance.Data,
             (this->SortedParameterOffsets).ArrayNum,local_res8[0]._0_1_,(<lambda_1> *)local_res8);
  return;
}

// Rebind @ 1493643e0

void __thiscall FNiagaraParameterStore::Rebind(FNiagaraParameterStore *this)

{
  int iVar1;
  FNiagaraParameterStore *pFVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FNiagaraParameterStore *local_res8;
  
  iVar1 = (this->Bindings).ArrayNum;
  pFVar4 = (this->Bindings).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((this->Bindings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<FNiagaraParameterStore_*,FNiagaraParameterStoreBinding>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar4 == pFVar5) break;
    pFVar2 = *(FNiagaraParameterStore **)pFVar4;
    local_res8 = this;
    bVar3 = FNiagaraParameterStoreBinding::BindParameters
                      ((FNiagaraParameterStoreBinding *)(pFVar4 + 8),pFVar2,this,
                       (TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *)0x0);
    if (bVar3) {
      TArray<FNiagaraParameterStore_*,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<FNiagaraParameterStore_*_const_&>(&pFVar2->SourceStores,&local_res8);
    }
    pFVar4 = pFVar4 + 0x38;
  }
  return;
}

// RemoveParameter @ 149365ac0

/* WARNING: Removing unreachable block (ram,0x0001493660e7) */
/* WARNING: Removing unreachable block (ram,0x000149366305) */
/* WARNING: Removing unreachable block (ram,0x000149365ea7) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FNiagaraParameterStore::RemoveParameter(FNiagaraParameterStore *this,FNiagaraVariableBase *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FNiagaraTypeDefinition *pFVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  UObject *this_00;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  FName *pFVar19;
  ForAnyElementType local_1a8;
  undefined8 local_1a0;
  ForAnyElementType local_198;
  undefined8 local_190;
  ForAnyElementType local_188;
  undefined8 local_180;
  ForAnyElementType local_178;
  undefined8 local_170;
  FName local_168;
  FNiagaraTypeDefinitionHandle local_160 [2];
  void *local_158;
  undefined8 local_150;
  FNiagaraVariableWithOffset local_148;
  FNiagaraVariableWithOffset local_120;
  FNiagaraVariableWithOffset local_f8;
  FString local_d0;
  FNiagaraLwcStructConverter local_c0;
  FNiagaraLwcStructConverter local_a8;
  FName *local_90;
  int local_88;
  FNiagaraVariableWithOffset *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FString local_58;
  TArrayView<FNiagaraVariableWithOffset_const_,int> local_48;
  TArrayView<unsigned_char_const_,int> local_38;
  
  pFVar11 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
  uVar15 = 0;
  if (((((TObjectPtr<UObject>_u_0)(pFVar11->ClassStructOrEnum).field0_0x0.DebugPtr ==
         FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) &&
       (pFVar11->UnderlyingType == FNiagaraTypeDefinition::PositionDef.UnderlyingType)) &&
      (pFVar11->Flags == FNiagaraTypeDefinition::PositionDef.Flags)) &&
     (uVar18 = uVar15, 0 < (this->OriginalPositionData).ArrayNum)) {
    do {
      uVar8 = (uint)uVar15;
      uVar16 = ~uVar8 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar8 < (this->OriginalPositionData).ArrayNum) {
        uVar7 = uVar16;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (*(FName *)((this->OriginalPositionData).AllocatorInstance.Data + uVar18) == param_1->Name)
      {
        uVar7 = 0;
        if ((int)uVar8 < (this->OriginalPositionData).ArrayNum) {
          uVar7 = uVar16;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar10 = (this->OriginalPositionData).ArrayNum;
        pFVar1 = (this->OriginalPositionData).AllocatorInstance.Data;
        iVar9 = iVar10 + ~uVar8;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar8 * 0x20,pFVar1 + (longlong)(iVar10 - iVar9) * 0x20,
                  (longlong)iVar9 << 5);
        }
        piVar12 = &(this->OriginalPositionData).ArrayNum;
        *piVar12 = *piVar12 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,&(this->OriginalPositionData).AllocatorInstance,
                   (this->OriginalPositionData).ArrayNum,&(this->OriginalPositionData).ArrayMax);
        break;
      }
      uVar15 = (ulonglong)(uVar8 + 1);
      uVar18 = uVar18 + 0x20;
    } while ((int)(uVar8 + 1) < (this->OriginalPositionData).ArrayNum);
  }
  piVar12 = (int *)(**(code **)(this->_padding_ + 0x58))(this,param_1);
  if ((piVar12 == (int *)0x0) || (*piVar12 == -1)) {
    bVar5 = false;
  }
  else {
    local_1a8.Data = (FScriptContainerElement *)0x0;
    local_1a0 = 0;
    local_178.Data = (FScriptContainerElement *)0x0;
    local_170 = 0;
    local_188.Data = (FScriptContainerElement *)0x0;
    local_180 = 0;
    local_198.Data = (FScriptContainerElement *)0x0;
    local_190 = 0;
    (**(code **)this->_padding_)(this,&local_90);
    FVar4.Data = local_1a8.Data;
    for (pFVar19 = local_90; local_1a8.Data = FVar4.Data,
        pFVar19 != local_90 + (longlong)local_88 * 5; pFVar19 = pFVar19 + 5) {
      local_168 = *pFVar19;
      local_160[0].RegisteredTypeIndex = pFVar19[1].ComparisonIndex.Value;
      uVar7 = pFVar19[1].Number;
      lVar17 = (longlong)(int)uVar7;
      local_158 = (void *)0x0;
      local_150 = 0;
      if ((local_168 != param_1->Name) ||
         (local_160[0].RegisteredTypeIndex != (param_1->TypeDefHandle).RegisteredTypeIndex)) {
        pFVar11 = FNiagaraTypeDefinitionHandle::Resolve(local_160);
        bVar5 = FNiagaraTypeDefinition::IsDataInterface(pFVar11);
        if (bVar5) {
          uVar8 = (uint)local_180;
          if ((uint)local_180 == local_180._4_4_) {
            uVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_188,(int *)((longlong)&local_180 + 4));
          }
          local_c0.LWCSize = 0;
          local_c0.SWCSize = 0;
          local_180 = CONCAT44(local_180._4_4_,uVar8 + 1);
          local_c0.ConversionSteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c0.ConversionSteps.ArrayNum = 0;
          local_c0.ConversionSteps.ArrayMax = 0;
          *(undefined8 *)(local_188.Data + (longlong)(int)uVar8 * 8) = 0;
          pFVar11 = FNiagaraTypeDefinitionHandle::Resolve(local_160);
          local_148._padding_._0_4_ = local_168.ComparisonIndex.Value;
          local_148._padding_._4_4_ = local_168.Number;
          local_148._padding_ =
               FNiagaraTypeDefinitionHandle::Register
                         ((FNiagaraTypeDefinitionHandle *)&local_148._padding_,pFVar11);
          local_148.Offset = uVar8;
          FNiagaraLwcStructConverter::FNiagaraLwcStructConverter
                    (&local_148.StructConverter,&local_c0);
          if (((local_1a8.Data <= &local_148) &&
              (&local_148 <
               (FNiagaraVariableWithOffset *)(local_1a8.Data + (longlong)local_1a0._4_4_ * 0x28)))
             && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          iVar9 = (int)local_1a0;
          if ((int)local_1a0 == local_1a0._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,&local_1a8,(int *)((longlong)&local_1a0 + 4));
          }
          local_1a0 = CONCAT44(local_1a0._4_4_,iVar9 + 1);
          lVar13 = (longlong)iVar9;
          *(longlong *)&local_1a8.Data[lVar13 * 0x28].field_0x0 = local_148._padding_;
          *(int *)(local_1a8.Data + lVar13 * 0x28 + 8) = local_148._padding_;
          *(int *)(local_1a8.Data + lVar13 * 0x28 + 0xc) = local_148.Offset;
          *(int *)(local_1a8.Data + lVar13 * 0x28 + 0x10) = local_148.StructConverter.LWCSize;
          *(undefined8 *)(local_1a8.Data + lVar13 * 0x28 + 0x18) = 0;
          *(int *)(local_1a8.Data + lVar13 * 0x28 + 0x14) = local_148.StructConverter.SWCSize;
          *(FScriptContainerElement **)(local_1a8.Data + lVar13 * 0x28 + 0x18) =
               local_148.StructConverter.ConversionSteps.AllocatorInstance.Data;
          *(int *)(local_1a8.Data + lVar13 * 0x28 + 0x20) =
               local_148.StructConverter.ConversionSteps.ArrayNum;
          *(int *)(local_1a8.Data + lVar13 * 0x28 + 0x24) =
               local_148.StructConverter.ConversionSteps.ArrayMax;
          local_148.StructConverter.ConversionSteps.ArrayNum = 0;
          local_148.StructConverter.ConversionSteps.ArrayMax = 0;
          local_148.StructConverter.ConversionSteps.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          if (local_c0.ConversionSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.ConversionSteps.AllocatorInstance.Data);
          }
          uVar16 = 0;
          if ((int)uVar7 < (this->DataInterfaces).ArrayNum) {
            uVar16 = ~uVar7 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          uVar2 = *(undefined8 *)((this->DataInterfaces).AllocatorInstance.Data + lVar17 * 8);
          uVar7 = 0;
          if ((int)uVar8 < (int)(uint)local_180) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          *(undefined8 *)(local_188.Data + (longlong)(int)uVar8 * 8) = uVar2;
        }
        else {
          pFVar11 = FNiagaraTypeDefinitionHandle::Resolve(local_160);
          bVar5 = FNiagaraTypeDefinition::IsUObject(pFVar11);
          if (bVar5) {
            uVar8 = (uint)local_190;
            if ((uint)local_190 == local_190._4_4_) {
              uVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_198,(int *)((longlong)&local_190 + 4));
            }
            local_a8.LWCSize = 0;
            local_a8.SWCSize = 0;
            local_190 = CONCAT44(local_190._4_4_,uVar8 + 1);
            local_a8.ConversionSteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a8.ConversionSteps.ArrayNum = 0;
            local_a8.ConversionSteps.ArrayMax = 0;
            *(undefined8 *)(local_198.Data + (longlong)(int)uVar8 * 8) = 0;
            pFVar11 = FNiagaraTypeDefinitionHandle::Resolve(local_160);
            local_120._padding_._0_4_ = local_168.ComparisonIndex.Value;
            local_120._padding_._4_4_ = local_168.Number;
            local_120._padding_ =
                 FNiagaraTypeDefinitionHandle::Register
                           ((FNiagaraTypeDefinitionHandle *)&local_120._padding_,pFVar11);
            local_120.Offset = uVar8;
            FNiagaraLwcStructConverter::FNiagaraLwcStructConverter
                      (&local_120.StructConverter,&local_a8);
            if (((local_1a8.Data <= &local_120) &&
                (&local_120 <
                 (FNiagaraVariableWithOffset *)(local_1a8.Data + (longlong)local_1a0._4_4_ * 0x28)))
               && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            iVar9 = (int)local_1a0;
            if ((int)local_1a0 == local_1a0._4_4_) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x828,&local_1a8,(int *)((longlong)&local_1a0 + 4));
            }
            local_1a0 = CONCAT44(local_1a0._4_4_,iVar9 + 1);
            lVar13 = (longlong)iVar9;
            *(longlong *)&local_1a8.Data[lVar13 * 0x28].field_0x0 = local_120._padding_;
            *(int *)(local_1a8.Data + lVar13 * 0x28 + 8) = local_120._padding_;
            *(int *)(local_1a8.Data + lVar13 * 0x28 + 0xc) = local_120.Offset;
            *(int *)(local_1a8.Data + lVar13 * 0x28 + 0x10) = local_120.StructConverter.LWCSize;
            *(undefined8 *)(local_1a8.Data + lVar13 * 0x28 + 0x18) = 0;
            *(int *)(local_1a8.Data + lVar13 * 0x28 + 0x14) = local_120.StructConverter.SWCSize;
            *(FScriptContainerElement **)(local_1a8.Data + lVar13 * 0x28 + 0x18) =
                 local_120.StructConverter.ConversionSteps.AllocatorInstance.Data;
            *(int *)(local_1a8.Data + lVar13 * 0x28 + 0x20) =
                 local_120.StructConverter.ConversionSteps.ArrayNum;
            *(int *)(local_1a8.Data + lVar13 * 0x28 + 0x24) =
                 local_120.StructConverter.ConversionSteps.ArrayMax;
            local_120.StructConverter.ConversionSteps.ArrayNum = 0;
            local_120.StructConverter.ConversionSteps.ArrayMax = 0;
            local_120.StructConverter.ConversionSteps.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            if (local_a8.ConversionSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.ConversionSteps.AllocatorInstance.Data);
            }
            uVar16 = 0;
            if ((int)uVar7 < (this->UObjects).ArrayNum) {
              uVar16 = ~uVar7 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            uVar2 = *(undefined8 *)((this->UObjects).AllocatorInstance.Data + lVar17 * 8);
            uVar7 = 0;
            if ((int)uVar8 < (int)(uint)local_190) {
              uVar7 = ~uVar8 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            *(undefined8 *)(local_198.Data + (longlong)(int)uVar8 * 8) = uVar2;
          }
          else if ((local_168 == (FName)0x0) ||
                  (pFVar11 = FNiagaraTypeDefinitionHandle::Resolve(local_160),
                  (pFVar11->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0)) {
            if (2 < (byte)LogNiagara._0_1_) {
              ::FName::ToString(&local_168,&local_58);
              this_00 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
              if (this_00 == (UObject *)0x0) {
                ::FString::FString(&local_d0,L"None");
              }
              else {
                UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)this_00,&local_d0,(UObject *)0x0);
              }
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
              if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d0.Data.AllocatorInstance.Data);
              }
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            iVar9 = (int)local_170;
            lVar13 = (longlong)(int)local_170;
            pFVar11 = FNiagaraTypeDefinitionHandle::Resolve(local_160);
            iVar10 = FNiagaraTypeDefinition::GetSize(pFVar11);
            pFVar11 = FNiagaraTypeDefinitionHandle::Resolve(local_160);
            local_f8._padding_._0_4_ = local_168.ComparisonIndex.Value;
            local_f8._padding_._4_4_ = local_168.Number;
            local_f8._padding_ =
                 FNiagaraTypeDefinitionHandle::Register
                           ((FNiagaraTypeDefinitionHandle *)&local_f8._padding_,pFVar11);
            local_f8.Offset = iVar9;
            FNiagaraLwcStructConverter::FNiagaraLwcStructConverter
                      (&local_f8.StructConverter,(FNiagaraLwcStructConverter *)(pFVar19 + 2));
            if (((local_1a8.Data <= &local_f8) &&
                (&local_f8 <
                 (FNiagaraVariableWithOffset *)(local_1a8.Data + (longlong)local_1a0._4_4_ * 0x28)))
               && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            iVar9 = (int)local_1a0;
            if ((int)local_1a0 == local_1a0._4_4_) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x828,&local_1a8,(int *)((longlong)&local_1a0 + 4));
            }
            local_1a0 = CONCAT44(local_1a0._4_4_,iVar9 + 1);
            lVar14 = (longlong)iVar9;
            *(longlong *)&local_1a8.Data[lVar14 * 0x28].field_0x0 = local_f8._padding_;
            *(int *)(local_1a8.Data + lVar14 * 0x28 + 8) = local_f8._padding_;
            *(int *)(local_1a8.Data + lVar14 * 0x28 + 0xc) = local_f8.Offset;
            *(int *)(local_1a8.Data + lVar14 * 0x28 + 0x10) = local_f8.StructConverter.LWCSize;
            *(undefined8 *)(local_1a8.Data + lVar14 * 0x28 + 0x18) = 0;
            *(int *)(local_1a8.Data + lVar14 * 0x28 + 0x14) = local_f8.StructConverter.SWCSize;
            *(FScriptContainerElement **)(local_1a8.Data + lVar14 * 0x28 + 0x18) =
                 local_f8.StructConverter.ConversionSteps.AllocatorInstance.Data;
            *(int *)(local_1a8.Data + lVar14 * 0x28 + 0x20) =
                 local_f8.StructConverter.ConversionSteps.ArrayNum;
            *(int *)(local_1a8.Data + lVar14 * 0x28 + 0x24) =
                 local_f8.StructConverter.ConversionSteps.ArrayMax;
            local_f8.StructConverter.ConversionSteps.ArrayNum = 0;
            local_f8.StructConverter.ConversionSteps.ArrayMax = 0;
            local_f8.StructConverter.ConversionSteps.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar10,&local_178,(int *)&local_170,(int *)((longlong)&local_170 + 4));
            memcpy(local_178.Data + lVar13,(this->ParameterData).AllocatorInstance.Data + lVar17,
                   (longlong)iVar10);
          }
        }
      }
      if (local_158 != (void *)0x0) {
        FMemory::Free(local_158);
      }
      FVar4.Data = local_1a8.Data;
    }
    iVar9 = (int)local_1a0;
    if (((int)local_1a0 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    iStack_70 = iVar9;
    local_48._12_4_ = uStack_6c;
    local_48.ArrayNum = iVar9;
    local_78 = (FNiagaraVariableWithOffset *)FVar4.Data;
    local_48.DataPtr = (FNiagaraVariableWithOffset *)FVar4.Data;
    CopySortedParameterOffsets(this,&local_48);
    iStack_60 = (int)local_170;
    local_68 = local_178.Data;
    if (((int)local_170 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    local_38._12_4_ = uStack_5c;
    local_38.ArrayNum = iStack_60;
    local_38.DataPtr = (uchar *)local_68;
    AssignParameterData(this,&local_38);
    FVar4.Data = local_188.Data;
    iVar10 = (uint)local_180;
    iVar9 = (this->DataInterfaces).ArrayMax;
    piVar12 = &(this->DataInterfaces).ArrayMax;
    (this->DataInterfaces).ArrayNum = (uint)local_180;
    if (((uint)local_180 == 0) && (iVar9 == 0)) {
      *piVar12 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(uint)local_180,iVar9,&(this->DataInterfaces).AllocatorInstance,(uint)local_180
                 ,piVar12);
      ConstructItems<TObjectPtr<UNiagaraDataInterface>,UNiagaraDataInterface_*,int>
                ((this->DataInterfaces).AllocatorInstance.Data,(UNiagaraDataInterface **)FVar4.Data,
                 iVar10);
    }
    FVar4.Data = local_198.Data;
    iVar10 = (uint)local_190;
    iVar9 = (this->UObjects).ArrayMax;
    piVar12 = &(this->UObjects).ArrayMax;
    (this->UObjects).ArrayNum = (uint)local_190;
    if (((uint)local_190 == 0) && (iVar9 == 0)) {
      *piVar12 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(uint)local_190,iVar9,&(this->UObjects).AllocatorInstance,(uint)local_190,
                 piVar12);
      ConstructItems<TObjectPtr<UObject>,UObject_*,int>
                ((this->UObjects).AllocatorInstance.Data,(UObject **)FVar4.Data,iVar10);
    }
    OnLayoutChange(this);
    if (local_198.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data);
    }
    if (local_188.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data);
    }
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data);
    }
    DestructItems<FNiagaraVariableWithOffset,int>
              ((FNiagaraVariableWithOffset *)local_1a8.Data,(int)local_1a0);
    if ((FNiagaraVariableWithOffset *)local_1a8.Data != (FNiagaraVariableWithOffset *)0x0) {
      FMemory::Free(local_1a8.Data);
    }
    bVar5 = true;
  }
  return bVar5;
}

// RemoveParameters @ 149366600

void __thiscall
FNiagaraParameterStore::RemoveParameters
          (FNiagaraParameterStore *this,FNiagaraParameterStore *param_1)

{
  longlong lVar1;
  longlong local_18;
  int local_10;
  
  (**(code **)this->_padding_)(this,&local_18);
  for (lVar1 = local_18; lVar1 != local_18 + (longlong)local_10 * 0x28; lVar1 = lVar1 + 0x28) {
    (**(code **)(param_1->_padding_ + 0x18))(param_1,lVar1);
  }
  return;
}

// RemovePositionData @ 149366660

void __thiscall
FNiagaraParameterStore::RemovePositionData(FNiagaraParameterStore *this,FName *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar8 = 0;
  if (0 < (this->OriginalPositionData).ArrayNum) {
    lVar9 = 0;
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < (this->OriginalPositionData).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(FName *)((this->OriginalPositionData).AllocatorInstance.Data + lVar9) == *param_1) {
        uVar6 = 0;
        if ((int)uVar8 < (this->OriginalPositionData).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar2 = (this->OriginalPositionData).ArrayNum;
        pFVar3 = (this->OriginalPositionData).AllocatorInstance.Data;
        iVar7 = iVar2 + ~uVar8;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar3 + (longlong)(int)uVar8 * 0x20,pFVar3 + (longlong)(iVar2 - iVar7) * 0x20,
                  (longlong)iVar7 << 5);
        }
        piVar1 = &(this->OriginalPositionData).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,&(this->OriginalPositionData).AllocatorInstance,
                   (this->OriginalPositionData).ArrayNum,&(this->OriginalPositionData).ArrayMax);
        return;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x20;
    } while ((int)uVar8 < (this->OriginalPositionData).ArrayNum);
  }
  return;
}

// RenameParameter @ 1493667e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraParameterStore::RenameParameter
          (FNiagaraParameterStore *this,FNiagaraVariableBase *param_1,FName param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  FNiagaraTypeDefinition *pFVar9;
  UNiagaraDataInterface *pUVar10;
  TObjectPtr<UObject> TVar11;
  FScriptContainerElement *_Dst;
  longlong lVar12;
  FScriptContainerElement *_Src;
  int local_res10 [2];
  FName local_res18;
  undefined1 local_res20 [8];
  FString local_68;
  FString local_58;
  FName local_48;
  int local_40;
  void *local_38;
  undefined8 local_30;
  
  if ((param_1->Name != param_2) &&
     (local_res18 = param_2, piVar8 = (int *)(**(code **)(this->_padding_ + 0x58))(this,param_1,0),
     piVar8 != (int *)0x0)) {
    iVar1 = *piVar8;
    if (iVar1 != -1) {
      local_40 = (param_1->TypeDefHandle).RegisteredTypeIndex;
      local_38 = (void *)0x0;
      local_30 = 0;
      local_48 = local_res18;
      iVar2 = (this->ParameterData).ArrayNum;
      local_res10[0] = -1;
      cVar4 = (**(code **)(this->_padding_ + 0x10))(this,&local_48,0,0,local_res10);
      if (cVar4 == '\0') {
        if (2 < (byte)LogNiagara._0_1_) {
          ::FName::ToString(&local_res18,&local_58);
          ::FName::ToString(&param_1->Name,&local_68);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        iVar7 = (this->ParameterData).ArrayNum;
        pFVar9 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
        iVar6 = FNiagaraTypeDefinition::GetSize(pFVar9);
        if ((iVar7 - iVar2 != iVar6) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("DeltaBytes == SizeInBytes",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraParameterStore.cpp"
                               ,0x407,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
        bVar5 = FNiagaraTypeDefinition::IsDataInterface(pFVar9);
        iVar2 = local_res10[0];
        if (bVar5) {
          pUVar10 = GetDataInterface(this,iVar1);
          SetDataInterface(this,pUVar10,iVar2);
        }
        else {
          pFVar9 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
          bVar5 = FNiagaraTypeDefinition::IsUObject(pFVar9);
          iVar2 = local_res10[0];
          if (bVar5) {
            TVar11 = GetUObject(this,(int)local_res20);
            SetUObject(this,TVar11,iVar2);
          }
          else {
            pFVar9 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
            iVar7 = FNiagaraTypeDefinition::GetSize(pFVar9);
            iVar2 = local_res10[0];
            lVar12 = (longlong)local_res10[0];
            _Src = (this->ParameterData).AllocatorInstance.Data + iVar1;
            if ((_Src == (FScriptContainerElement *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Data != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                   ,0x255,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (((iVar2 < 0) || ((this->ParameterData).ArrayNum < iVar7 + iVar2)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Offset >= 0 && (Offset + Size) <= ParameterData.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                   ,0x256,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            _Dst = (this->ParameterData).AllocatorInstance.Data + lVar12;
            if (_Dst != _Src) {
              memcpy(_Dst,_Src,(longlong)iVar7);
            }
            this->bParametersDirty = 1;
          }
        }
        (**(code **)(this->_padding_ + 0x18))(this,param_1);
        OnLayoutChange(this);
      }
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
    }
  }
  return;
}

// Reset @ 1493690b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraParameterStore::Reset(FNiagaraParameterStore *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  FNiagaraVariableWithOffset *pFVar3;
  FName FVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory> FVar6;
  FThreadStats *pFVar7;
  FThreadStatsPool *pFVar8;
  uchar auVar9 [8];
  FName local_res8;
  FStatMessage local_38;
  
  piVar1 = &(this->SortedParameterOffsets).ArrayMax;
  pFVar3 = (FNiagaraVariableWithOffset *)(this->SortedParameterOffsets).AllocatorInstance.Data;
  iVar2 = (this->SortedParameterOffsets).ArrayNum;
  if ((this->SortedParameterOffsets).ArrayMax < 0) {
    DestructItems<FNiagaraVariableWithOffset,int>(pFVar3,iVar2);
    (this->SortedParameterOffsets).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->SortedParameterOffsets).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FNiagaraVariableWithOffset,int>(pFVar3,iVar2);
    (this->SortedParameterOffsets).ArrayNum = 0;
  }
  auVar9 = (uchar  [8])(longlong)(this->ParameterData).ArrayMax;
  piVar1 = &(this->ParameterData).ArrayMax;
  if (auVar9 != (uchar  [8])0x0) {
    FVar6 = StatPtr_STAT_NiagaraParamStoreMemory;
    if (StatPtr_STAT_NiagaraParamStoreMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory>)0x0) {
      pFVar5 = ::FName::FName(&local_res8,"STAT_NiagaraParamStoreMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParamStoreMemory,*pFVar5,
                         L"Niagara parameter store memory","STATGROUP_Niagara","STATCAT_Niagara",
                         L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar4 = *(FName *)FVar6;
    local_res8 = FVar4;
    if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_38.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar4;
      local_38.StatData.Pad = auVar9;
      local_38.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar9);
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
  }
  (this->ParameterData).ArrayNum = 0;
  if ((this->ParameterData).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->ParameterData).AllocatorInstance,0,piVar1);
  }
  auVar9 = (uchar  [8])(longlong)*piVar1;
  if (auVar9 != (uchar  [8])0x0) {
    FVar6 = StatPtr_STAT_NiagaraParamStoreMemory;
    if (StatPtr_STAT_NiagaraParamStoreMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory>)0x0) {
      pFVar5 = ::FName::FName(&local_res8,"STAT_NiagaraParamStoreMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParamStoreMemory,*pFVar5,
                         L"Niagara parameter store memory","STATGROUP_Niagara","STATCAT_Niagara",
                         L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar4 = *(FName *)FVar6;
    local_res8 = FVar4;
    if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_38.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
      local_res8 = FVar4;
      local_38.StatData.Pad = auVar9;
      local_38.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&local_38);
      FStatsTrace::Add(&local_res8,(long64)auVar9);
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
  }
  (this->DataInterfaces).ArrayNum = 0;
  if ((this->DataInterfaces).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->DataInterfaces).AllocatorInstance,0,&(this->DataInterfaces).ArrayMax);
  }
  (this->UObjects).ArrayNum = 0;
  if ((this->UObjects).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->UObjects).AllocatorInstance,0,&(this->UObjects).ArrayMax);
  }
  (this->OriginalPositionData).ArrayNum = 0;
  if ((this->OriginalPositionData).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->OriginalPositionData).AllocatorInstance,0,
               &(this->OriginalPositionData).ArrayMax);
  }
  if (param_1) {
    UnbindAll(this);
  }
  return;
}

// ResolvePositions @ 149369890

void __thiscall
FNiagaraParameterStore::ResolvePositions(FNiagaraParameterStore *this,FNiagaraLWCConverter *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FNiagaraPosition local_78;
  TVector<double>_u_0 local_68;
  undefined8 local_48;
  FNiagaraTypeDefinitionHandle local_40 [2];
  void *local_38;
  undefined8 local_30;
  
  if (ZPULL(*(undefined4 *)&this->field_0x80,3,1) != 0) {
    *(uint *)&this->field_0x80 = *(undefined4 *)&this->field_0x80 & 0xfffffff7;
    pFVar5 = (this->OriginalPositionData).AllocatorInstance.Data;
    iVar1 = (this->OriginalPositionData).ArrayNum;
    pFVar7 = pFVar5 + (longlong)iVar1 * 0x20;
    pFVar6 = pFVar5 + 8;
    while( true ) {
      if ((this->OriginalPositionData).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FNiagaraPositionSource,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar5 == pFVar7) break;
      local_48 = *(undefined8 *)pFVar5;
      local_40[0].RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register(local_40,&FNiagaraTypeDefinition::PositionDef);
      local_38 = (void *)0x0;
      local_30 = 0;
      piVar4 = (int *)(**(code **)(this->_padding_ + 0x58))(this,&local_48,0);
      if ((piVar4 != (int *)0x0) && (iVar2 = *piVar4, iVar2 != -1)) {
        local_68._s_0.X = (double)*(undefined8 *)pFVar6;
        local_68._s_0.Y = (double)*(undefined8 *)(pFVar6 + 8);
        local_68._s_0.Z = (double)*(undefined8 *)(pFVar6 + 0x10);
        FNiagaraLWCConverter::ConvertWorldToSimulationPosition
                  (param_1,&local_78,(TVector<double> *)&local_68._s_0);
        pFVar3 = (this->ParameterData).AllocatorInstance.Data;
        *(undefined8 *)(pFVar3 + iVar2) = local_78._0_8_;
        *(undefined4 *)(pFVar3 + (longlong)iVar2 + 8) = local_78._8_4_;
      }
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
      pFVar5 = pFVar5 + 0x20;
      pFVar6 = pFVar6 + 0x20;
    }
    this->bParametersDirty = 1;
  }
  return;
}

// SanityCheckData @ 1493699f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraParameterStore::SanityCheckData(FNiagaraParameterStore *this,bool param_1)

{
  TArray<TObjectPtr<UNiagaraDataInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  FNiagaraTypeDefinitionHandle *pFVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  EObjectFlags EVar14;
  FNiagaraTypeDefinition *pFVar15;
  UObject *pUVar16;
  UClass *pUVar17;
  UNiagaraDataInterface *pUVar18;
  int iVar19;
  int iVar20;
  FNiagaraTypeDefinitionHandle *this_00;
  int local_res8;
  FNiagaraTypeDefinitionHandle *local_e0;
  int local_d8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar11 = false;
  iVar12 = 0;
  bVar10 = false;
  local_res8 = 0;
  (**(code **)this->_padding_)(this,&local_e0);
  if (local_e0 != local_e0 + (longlong)local_d8 * 10) {
    this_00 = local_e0 + 2;
    bVar10 = false;
    do {
      uVar3 = this_00[1].RegisteredTypeIndex;
      iVar20 = iVar12;
      if ((*(longlong *)(this_00 + -2) != 0) &&
         (pFVar15 = FNiagaraTypeDefinitionHandle::Resolve(this_00),
         (pFVar15->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0)) {
        pFVar15 = FNiagaraTypeDefinitionHandle::Resolve(this_00);
        bVar9 = FNiagaraTypeDefinition::IsDataInterface(pFVar15);
        if (bVar9) {
          iVar12 = (this->DataInterfaces).ArrayNum;
          pTVar1 = &this->DataInterfaces;
          if (iVar12 <= (int)uVar3) {
            iVar20 = (uVar3 - iVar12) + 1;
            iVar12 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (8,8,iVar20,&pTVar1->AllocatorInstance,
                                &(this->DataInterfaces).ArrayNum,&(this->DataInterfaces).ArrayMax);
            memset((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 8,0,(longlong)iVar20 << 3);
            if (5 < (byte)LogNiagara._0_1_) {
              bVar10 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals(&this->Owner,(void *)0x0);
              if (!bVar10) {
                pUVar16 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
                bVar11 = true;
                UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)pUVar16,&local_d0,(UObject *)0x0);
              }
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
              if ((bVar11) &&
                 (bVar11 = false,
                 local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_d0.Data.AllocatorInstance.Data);
              }
            }
            bVar10 = true;
          }
          uVar13 = 0;
          if ((int)uVar3 < (this->DataInterfaces).ArrayNum) {
            uVar13 = ~uVar3 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar20 = local_res8;
          if (((*(longlong *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar3 * 8) == 0) &&
              (param_1)) && (bVar9 = FWeakObjectPtr::IsValid(&(this->Owner).WeakPtr), bVar9)) {
            pUVar16 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
            EVar14 = UNiagaraDataInterface::BuildObjectFlagsForOwner(pUVar16,RF_Transactional);
            pFVar15 = FNiagaraTypeDefinitionHandle::Resolve(this_00);
            pUVar17 = FNiagaraTypeDefinition::GetClass(pFVar15);
            pUVar16 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
            pUVar18 = NewObject<UNiagaraDataInterface>
                                (pUVar16,pUVar17,(FName)0x0,EVar14,(UObject *)0x0,false,
                                 (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
            uVar13 = 0;
            if ((int)uVar3 < (this->DataInterfaces).ArrayNum) {
              uVar13 = ~uVar3 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (pTVar1->AllocatorInstance).Data;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar18 != (UNiagaraDataInterface *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar18);
            }
            *(UNiagaraDataInterface **)(pFVar4 + (longlong)(int)uVar3 * 8) = pUVar18;
            if (5 < (byte)LogNiagara._0_1_) {
              bVar10 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals(&this->Owner,(void *)0x0);
              if (!bVar10) {
                pUVar16 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
                bVar6 = true;
                UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)pUVar16,&local_b0,(UObject *)0x0);
              }
              ::FName::ToString((FName *)(this_00 + -2),&local_c0);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
              if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c0.Data.AllocatorInstance.Data);
              }
              if ((bVar6) &&
                 (bVar6 = false,
                 local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_b0.Data.AllocatorInstance.Data);
              }
            }
            bVar10 = true;
          }
        }
        else {
          pFVar15 = FNiagaraTypeDefinitionHandle::Resolve(this_00);
          bVar9 = FNiagaraTypeDefinition::IsUObject(pFVar15);
          if (bVar9) {
            iVar12 = (this->UObjects).ArrayNum;
            if (iVar12 <= (int)uVar3) {
              iVar19 = (uVar3 - iVar12) + 1;
              iVar12 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (8,8,iVar19,&(this->UObjects).AllocatorInstance,
                                  &(this->UObjects).ArrayNum,&(this->UObjects).ArrayMax);
              memset((this->UObjects).AllocatorInstance.Data + (longlong)iVar12 * 8,0,
                     (longlong)iVar19 << 3);
              if (5 < (byte)LogNiagara._0_1_) {
                bVar10 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                                   (&this->Owner,(void *)0x0);
                if (!bVar10) {
                  pUVar16 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
                  bVar7 = true;
                  UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)pUVar16,&local_90,(UObject *)0x0);
                }
                ::FName::ToString((FName *)(this_00 + -2),&local_a0);
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
                if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_a0.Data.AllocatorInstance.Data);
                }
                if ((bVar7) &&
                   (bVar7 = false,
                   local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_90.Data.AllocatorInstance.Data);
                }
              }
              bVar10 = true;
            }
          }
          else {
            pFVar15 = FNiagaraTypeDefinitionHandle::Resolve(this_00);
            iVar20 = FNiagaraTypeDefinition::GetSize(pFVar15);
            iVar20 = iVar20 + uVar3;
            if ((this->ParameterData).ArrayNum < iVar20) {
              if (5 < (byte)LogNiagara._0_1_) {
                bVar10 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                                   (&this->Owner,(void *)0x0);
                if (!bVar10) {
                  pUVar16 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
                  bVar8 = true;
                  UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)pUVar16,&local_70,(UObject *)0x0);
                }
                ::FName::ToString((FName *)(this_00 + -2),&local_80);
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
                if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_80.Data.AllocatorInstance.Data);
                }
                if ((bVar8) &&
                   (bVar8 = false,
                   local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_70.Data.AllocatorInstance.Data);
                }
              }
              bVar10 = true;
            }
            local_res8 = iVar20;
            if (iVar20 < iVar12) {
              iVar20 = iVar12;
              local_res8 = iVar12;
            }
          }
        }
      }
      iVar12 = iVar20;
      pFVar2 = this_00 + 8;
      this_00 = this_00 + 10;
    } while (pFVar2 != local_e0 + (longlong)local_d8 * 10);
  }
  iVar20 = (this->ParameterData).ArrayNum;
  if (iVar20 < iVar12) {
    iVar12 = iVar12 - iVar20;
    iVar20 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,iVar12,&(this->ParameterData).AllocatorInstance,
                        &(this->ParameterData).ArrayNum,&(this->ParameterData).ArrayMax);
    memset((this->ParameterData).AllocatorInstance.Data + iVar20,0,(longlong)iVar12);
  }
  bVar11 = FWeakObjectPtr::IsValid(&(this->Owner).WeakPtr);
  if (((bVar11) && (bVar10)) && (5 < (byte)LogNiagara._0_1_)) {
    pUVar16 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar16,local_60,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetDataInterface @ 14936a1b0

void __thiscall
FNiagaraParameterStore::SetDataInterface
          (FNiagaraParameterStore *this,UNiagaraDataInterface *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_2 < (this->DataInterfaces).ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->DataInterfaces).AllocatorInstance.Data;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UNiagaraDataInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  *(UNiagaraDataInterface **)(pFVar1 + (longlong)param_2 * 8) = param_1;
  this->bInterfacesDirty = 1;
  return;
}

// SetDataInterfaces @ 14936a250

void __thiscall
FNiagaraParameterStore::SetDataInterfaces
          (FNiagaraParameterStore *this,
          TArray<UNiagaraDataInterface_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  TArray<TObjectPtr<UNiagaraDataInterface>,TSizedDefaultAllocator<32>_>::
  operator=<TSizedDefaultAllocator<32>,TObjectPtr<UNiagaraDataInterface>_>
            (&this->DataInterfaces,param_1);
  if (param_2) {
    this->bInterfacesDirty = 1;
  }
  return;
}

// SetOriginalPositionData @ 14936a600

void __thiscall
FNiagaraParameterStore::SetOriginalPositionData
          (FNiagaraParameterStore *this,
          TArray<FNiagaraPositionSource,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FNiagaraPositionSource,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->OriginalPositionData;
  if (pTVar1 != param_1) {
    iVar3 = (this->OriginalPositionData).ArrayMax;
    piVar2 = &(this->OriginalPositionData).ArrayMax;
    _Src = (param_1->AllocatorInstance).Data;
    iVar4 = param_1->ArrayNum;
    (this->OriginalPositionData).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
      this->bPositionDataDirty = 1;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 5);
      }
      this->bPositionDataDirty = 1;
    }
    return;
  }
  this->bPositionDataDirty = 1;
  return;
}

// SetOwner @ 14936a6c0

void __thiscall FNiagaraParameterStore::SetOwner(FNiagaraParameterStore *this,UObject *param_1)

{
  UObject *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&(this->Owner).WeakPtr,(FObjectPtr)local_res8);
  return;
}

// SetParameterData @ 14936a700

void __thiscall
FNiagaraParameterStore::SetParameterData
          (FNiagaraParameterStore *this,uchar *param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  FScriptContainerElement *_Dst;
  
  if (param_1 == (uchar *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x255,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2 < 0) || ((this->ParameterData).ArrayNum < param_2 + param_3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Offset >= 0 && (Offset + Size) <= ParameterData.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x256,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->ParameterData).AllocatorInstance.Data + param_2;
  if (_Dst != (FScriptContainerElement *)param_1) {
    memcpy(_Dst,param_1,(longlong)param_3);
  }
  this->bParametersDirty = 1;
  return;
}

// SetParameterData @ 14936a7c0

bool __thiscall
FNiagaraParameterStore::SetParameterData
          (FNiagaraParameterStore *this,uchar *param_1,FNiagaraVariable *param_2,bool param_3)

{
  TObjectPtr<UObject>_u_0 TVar1;
  code *pcVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  FNiagaraTypeDefinition *pFVar6;
  int *piVar7;
  FScriptContainerElement *pFVar8;
  int local_res18 [4];
  FNiagaraLwcStructConverter local_78;
  FNiagaraLwcStructConverter local_60;
  double local_48;
  double local_40;
  double local_38;
  
  pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                     ((FNiagaraTypeDefinitionHandle *)&param_2->_padding_);
  TVar1.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar6->ClassStructOrEnum).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(TVar1.DebugPtr);
  }
  if ((((TObjectPtr<UObject>_u_0)TVar1.DebugPtr ==
        FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) &&
      (pFVar6->UnderlyingType == FNiagaraTypeDefinition::PositionDef.UnderlyingType)) &&
     (pFVar6->Flags == FNiagaraTypeDefinition::PositionDef.Flags)) {
    local_48 = (double)(float)*(undefined8 *)param_1;
    local_40 = (double)(float)((ulonglong)*(undefined8 *)param_1 >> 0x20);
    local_38 = (double)*(float *)(param_1 + 8);
    uVar3 = (**(code **)(this->_padding_ + 0x60))(this,&local_48,param_2,param_3);
    pFVar8 = (param_2->VarData).AllocatorInstance.Data;
    if (pFVar8 == (FScriptContainerElement *)0x0) {
      return (bool)uVar3;
    }
    FMemory::Free(pFVar8);
    return (bool)uVar3;
  }
  piVar7 = (int *)(**(code **)(this->_padding_ + 0x58))(this,param_2,0);
  if (piVar7 == (int *)0x0) {
    local_res18[0] = -1;
  }
  else {
    local_res18[0] = *piVar7;
    if (local_res18[0] != -1) {
      pFVar8 = (this->ParameterData).AllocatorInstance.Data + local_res18[0];
      if (pFVar8 != (FScriptContainerElement *)param_1) {
        GetStructConverter(this,&local_78,param_2);
        if (((local_78.ConversionSteps.ArrayNum < 1) || (local_78.LWCSize < 1)) ||
           (local_78.SWCSize < 1)) {
          pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                             ((FNiagaraTypeDefinitionHandle *)&param_2->_padding_);
          iVar5 = FNiagaraTypeDefinition::GetSize(pFVar6);
          memcpy(pFVar8,param_1,(longlong)iVar5);
        }
        else {
          FNiagaraLwcStructConverter::ConvertDataToSimulation(&local_78,(uchar *)pFVar8,param_1,1);
        }
        if (local_78.ConversionSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.ConversionSteps.AllocatorInstance.Data);
        }
      }
      this->bParametersDirty = 1;
      goto LAB_14936aa28;
    }
  }
  if (!param_3) {
    pFVar8 = (param_2->VarData).AllocatorInstance.Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    return false;
  }
  (**(code **)(this->_padding_ + 0x10))(this,param_2,0,0,local_res18);
  if ((local_res18[0] == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraParameterStore.cpp"
                         ,0x59b,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return (bool)uVar3;
  }
  pFVar8 = (this->ParameterData).AllocatorInstance.Data + local_res18[0];
  if (pFVar8 != (FScriptContainerElement *)param_1) {
    GetStructConverter(this,&local_60,param_2);
    if (((local_60.ConversionSteps.ArrayNum < 1) || (local_60.LWCSize < 1)) ||
       (local_60.SWCSize < 1)) {
      pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                         ((FNiagaraTypeDefinitionHandle *)&param_2->_padding_);
      iVar5 = FNiagaraTypeDefinition::GetSize(pFVar6);
      memcpy(pFVar8,param_1,(longlong)iVar5);
    }
    else {
      FNiagaraLwcStructConverter::ConvertDataToSimulation(&local_60,(uchar *)pFVar8,param_1,1);
    }
    if (local_60.ConversionSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.ConversionSteps.AllocatorInstance.Data);
    }
  }
  OnLayoutChange(this);
LAB_14936aa28:
  pFVar8 = (param_2->VarData).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return true;
}

// SetParameterDataArray @ 14936aa70

void __thiscall
FNiagaraParameterStore::SetParameterDataArray
          (FNiagaraParameterStore *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_1c;
  TArrayView<unsigned_char_const_,int> local_18;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = (uchar *)pFVar2;
  AssignParameterData(this,&local_18);
  if (param_2) {
    this->bParametersDirty = 1;
  }
  return;
}

// SetPositionData @ 14936ae20

void __thiscall
FNiagaraParameterStore::SetPositionData
          (FNiagaraParameterStore *this,FName *param_1,TVector<double> *param_2)

{
  TArray<FNiagaraPositionSource,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  int iVar6;
  FName *pFVar7;
  FName *pFVar8;
  undefined1 local_res8 [8];
  
  iVar6 = (this->OriginalPositionData).ArrayNum;
  pTVar1 = &this->OriginalPositionData;
  pFVar7 = (FName *)(pTVar1->AllocatorInstance).Data;
  pFVar8 = pFVar7 + (longlong)iVar6 * 4;
  while( true ) {
    if ((this->OriginalPositionData).ArrayNum != iVar6) {
      `TCheckedPointerIterator<FNiagaraPositionSource,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    if (*pFVar7 == *param_1) {
      FVar3 = (FName)(param_2->field0_0x0)._s_0.Y;
      pFVar7[1] = (FName)(param_2->field0_0x0)._s_0.X;
      pFVar7[2] = FVar3;
      pFVar7[3] = (FName)(param_2->field0_0x0)._s_0.Z;
      return;
    }
    pFVar7 = pFVar7 + 4;
  }
  iVar6 = (this->OriginalPositionData).ArrayNum;
  piVar2 = &(this->OriginalPositionData).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->OriginalPositionData).ArrayNum = iVar6 + 1;
  FVar5 = (FName)(param_2->field0_0x0)._s_0.Y;
  FVar4 = *param_1;
  FVar3 = (FName)(param_2->field0_0x0)._s_0.Z;
  pFVar7 = (FName *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x20);
  pFVar7[1] = (FName)(param_2->field0_0x0)._s_0.X;
  pFVar7[2] = FVar5;
  *pFVar7 = FVar4;
  pFVar7[3] = FVar3;
  return;
}

// SetPositionParameterValue @ 14936aef0

bool __thiscall
FNiagaraParameterStore::SetPositionParameterValue
          (FNiagaraParameterStore *this,TVector<double> *param_1,FName *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FNiagaraTypeDefinition *this_00;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int local_res8 [2];
  FName local_58;
  FNiagaraTypeDefinitionHandle local_50 [2];
  void *local_48;
  undefined8 local_40;
  
  SetPositionData(this,param_2,param_1);
  this->bPositionDataDirty = 1;
  local_58 = *param_2;
  fVar7 = (float)(param_1->field0_0x0)._s_0.X;
  fVar8 = (float)(param_1->field0_0x0)._s_0.Y;
  fVar9 = (float)(param_1->field0_0x0)._s_0.Z;
  local_50[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_50,&FNiagaraTypeDefinition::PositionDef);
  local_48 = (void *)0x0;
  local_40 = 0;
  this_00 = FNiagaraTypeDefinitionHandle::Resolve(local_50);
  iVar5 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar5 != 0xc) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Param.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x232,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  piVar6 = (int *)(**(code **)(this->_padding_ + 0x58))(this,&local_58,0);
  if (piVar6 == (int *)0x0) {
    local_res8[0] = -1;
  }
  else {
    local_res8[0] = *piVar6;
    if (local_res8[0] != -1) {
      bVar3 = true;
      pFVar1 = (this->ParameterData).AllocatorInstance.Data;
      *(float *)(pFVar1 + local_res8[0]) = fVar7;
      *(float *)(pFVar1 + (longlong)local_res8[0] + 4) = fVar8;
      *(float *)(pFVar1 + (longlong)local_res8[0] + 8) = fVar9;
      this->bParametersDirty = 1;
      goto LAB_14936b0a2;
    }
  }
  if (param_3) {
    (**(code **)(this->_padding_ + 0x10))(this,&local_58,0,0,local_res8);
    if (local_res8[0] == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x249,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar1 = (this->ParameterData).AllocatorInstance.Data;
    *(ulonglong *)(pFVar1 + local_res8[0]) = CONCAT44(fVar8,fVar7);
    *(float *)(pFVar1 + (longlong)local_res8[0] + 8) = fVar9;
    OnLayoutChange(this);
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
LAB_14936b0a2:
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return bVar3;
}

// SetUObject @ 14936b130

void __thiscall
FNiagaraParameterStore::SetUObject
          (FNiagaraParameterStore *this,TObjectPtr<UObject> param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_2 < (this->UObjects).ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->UObjects).AllocatorInstance.Data;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)param_1.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1.field0_0x0);
  }
  *(undefined8 *)(pFVar1 + (longlong)param_2 * 8) = *(undefined8 *)param_1.field0_0x0;
  this->bUObjectsDirty = 1;
  return;
}

// SetUObjects @ 14936b1e0

void __thiscall
FNiagaraParameterStore::SetUObjects
          (FNiagaraParameterStore *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::
  operator=<TSizedDefaultAllocator<32>,TObjectPtr<UObject>_>(&this->UObjects,param_1);
  if (param_2) {
    this->bUObjectsDirty = 1;
  }
  return;
}

// SortParameters @ 149370270

void __thiscall FNiagaraParameterStore::SortParameters(FNiagaraParameterStore *this)

{
  FIdentityFunctor local_res8 [32];
  
  AlgoImpl::
  IntroSortInternal<FNiagaraVariableWithOffset,int,FIdentityFunctor,TDereferenceWrapper<FNiagaraVariableWithOffset,_FNiagaraParameterStore::SortParameters_::__l2::<lambda_1>_>_>
            ((FNiagaraVariableWithOffset *)(this->SortedParameterOffsets).AllocatorInstance.Data,
             (this->SortedParameterOffsets).ArrayNum,local_res8[0],(<lambda_1> *)local_res8);
  return;
}

// Tick @ 149370420

void __thiscall FNiagaraParameterStore::Tick(FNiagaraParameterStore *this)

{
  undefined1 *puVar1;
  
  if ((0 < (this->Bindings).ArrayNum) &&
     (this->bParametersDirty != 0 || (this->bInterfacesDirty != 0 || this->bUObjectsDirty != 0))) {
    TickBindings(this);
    this->bParametersDirty = 0;
    this->bUObjectsDirty = 0;
    this->bInterfacesDirty = 0;
    return;
  }
  this->bParametersDirty = 0;
  this->bUObjectsDirty = 0;
  this->bInterfacesDirty = 0;
  return;
}

// TickBindings @ 149371560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraParameterStore::TickBindings(FNiagaraParameterStore *this)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  FName FVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_NiagaraParameterStoreTick> FVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  ushort *puVar17;
  UObject *pUVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_c8;
  undefined1 local_c7 [7];
  FScriptContainerElement *local_c0;
  uint local_b8 [2];
  FScriptContainerElement *local_b0;
  FColor_u_0 local_a8 [2];
  uint local_a0 [2];
  uint local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FScriptContainerElement *local_70;
  uint *local_68;
  uint *local_60;
  FNiagaraParameterStore *local_58;
  FName local_50 [2];
  
  FVar14 = StatPtr_STAT_NiagaraParameterStoreTick;
  if (StatPtr_STAT_NiagaraParameterStoreTick ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraParameterStoreTick>)0x0) {
    pFVar13 = ::FName::FName(local_50,"STAT_NiagaraParameterStoreTick");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_NiagaraParameterStoreTick>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParameterStoreTick,
                        *pFVar13,L"Parameter store tick","STATGROUP_Niagara","STATCAT_Niagara",
                        L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar5 = *(FName *)FVar14;
  bVar10 = false;
  bVar9 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  bVar12 = false;
  bVar11 = false;
  if ((FVar5.ComparisonIndex.Value.Value != 0) || (FVar5.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a8[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar10 = false;
      bVar9 = true;
      bVar12 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_90.ComparisonIndex.Value = FVar5.ComparisonIndex.Value.Value;
        local_90.Number = FVar5.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_90,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraParameterStore.cpp"
                   ,0x2c5);
        bVar10 = true;
        bVar9 = true;
        bVar12 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_88 = FVar5;
      FThreadStats::AddMessage(FVar5,CycleScopeStart);
      bVar11 = true;
      goto LAB_1493716b3;
    }
  }
  bVar10 = bVar12;
  bVar9 = bVar11;
  bVar11 = false;
  local_88 = local_80;
LAB_1493716b3:
  local_98 = (this->Bindings).ArrayNum;
  uVar15 = (ulonglong)(int)local_98;
  pFVar19 = (this->Bindings).AllocatorInstance.Data;
  local_c0 = pFVar19 + 0x10;
  local_70 = pFVar19 + uVar15 * 0x38;
  do {
    pFVar16 = local_70;
    local_b0 = pFVar19;
    if ((this->Bindings).ArrayNum != (int)uVar15) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TTuple<FNiagaraParameterStore_*,FNiagaraParameterStoreBinding>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    FVar5 = local_88;
    if (pFVar19 == pFVar16) {
      if (bVar9) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar11) {
        FThreadStats::AddMessage(FVar5,CycleScopeEnd);
      }
      return;
    }
    lVar6 = *(longlong *)pFVar19;
    if (this->bParametersDirty != 0) {
      iVar4 = *(int *)local_c0;
      puVar17 = *(ushort **)(local_c0 + -8);
      puVar1 = puVar17 + (longlong)iVar4 * 3;
      while( true ) {
        if (*(int *)local_c0 != iVar4) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FNiagaraParameterStoreBinding::FParameterBinding_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        pFVar19 = local_b0;
        if (puVar17 == puVar1) break;
        uVar2 = puVar17[2];
        uVar3 = puVar17[1];
        local_a0[0] = (uint)uVar2;
        local_b8[0] = (uint)*puVar17;
        if ((this->ParameterData).ArrayNum < (int)((uint)*puVar17 + (uint)uVar2)) {
          local_68 = local_b8;
          local_60 = local_a0;
          local_58 = this;
          `FNiagaraParameterStore::GetParameterData'::__l2::<lambda_1>::operator()(&local_68);
        }
        pFVar19 = (this->ParameterData).AllocatorInstance.Data + (int)local_b8[0];
        if ((pFVar19 == (FScriptContainerElement *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Data != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                ,0x255,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((*(int *)(lVar6 + 0x28) < (int)((uint)uVar2 + (uint)uVar3)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Offset >= 0 && (Offset + Size) <= ParameterData.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                ,0x256,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar16 = (FScriptContainerElement *)((ulonglong)uVar3 + *(longlong *)(lVar6 + 0x20));
        if (pFVar16 != pFVar19) {
          memcpy(pFVar16,pFVar19,(ulonglong)uVar2);
        }
        *(uint *)(lVar6 + 0x80) = *(uint *)(lVar6 + 0x80) | 1;
        puVar17 = puVar17 + 3;
      }
    }
    if (this->bInterfacesDirty != 0) {
      puVar17 = *(ushort **)(local_c0 + 8);
      iVar4 = *(int *)(local_c0 + 0x10);
      puVar1 = puVar17 + (longlong)iVar4 * 2;
      while( true ) {
        if (*(int *)(local_c0 + 0x10) != iVar4) {
          local_c8 = 0;
          `TCheckedPointerIterator<FNiagaraParameterStoreBinding::FInterfaceBinding_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_c8);
        }
        pFVar19 = local_b0;
        if (puVar17 == puVar1) break;
        uVar2 = *puVar17;
        uVar3 = puVar17[1];
        if ((int)(uint)uVar2 < (this->DataInterfaces).ArrayNum) {
          if (((this->DataInterfaces).ArrayNum <= (int)(uint)uVar2) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pUVar18 = *(UObject **)
                     ((this->DataInterfaces).AllocatorInstance.Data + (ulonglong)uVar2 * 8);
        }
        else {
          pUVar18 = (UObject *)0x0;
        }
        if ((*(int *)(lVar6 + 0x38) <= (int)(uint)uVar3) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar7 = *(longlong *)(lVar6 + 0x30);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar18);
        }
        *(UObject **)(lVar7 + (ulonglong)uVar3 * 8) = pUVar18;
        *(uint *)(lVar6 + 0x80) = *(uint *)(lVar6 + 0x80) | 2;
        puVar17 = puVar17 + 2;
      }
    }
    if (this->bUObjectsDirty != 0) {
      puVar17 = *(ushort **)(local_c0 + 0x18);
      iVar4 = *(int *)(local_c0 + 0x20);
      puVar1 = puVar17 + (longlong)iVar4 * 2;
      while( true ) {
        if (*(int *)(local_c0 + 0x20) != iVar4) {
          local_c7[0] = 0;
          `TCheckedPointerIterator<FNiagaraParameterStoreBinding::FUObjectBinding_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_c7);
        }
        pFVar19 = local_b0;
        if (puVar17 == puVar1) break;
        uVar2 = *puVar17;
        uVar3 = puVar17[1];
        if ((int)(uint)uVar2 < (this->UObjects).ArrayNum) {
          if (((this->UObjects).ArrayNum <= (int)(uint)uVar2) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pUVar18 = *(UObject **)((this->UObjects).AllocatorInstance.Data + (ulonglong)uVar2 * 8);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar18);
          }
        }
        else {
          pUVar18 = (UObject *)0x0;
        }
        if ((*(int *)(lVar6 + 0x48) <= (int)(uint)uVar3) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar7 = *(longlong *)(lVar6 + 0x40);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar18);
        }
        *(UObject **)(lVar7 + (ulonglong)uVar3 * 8) = pUVar18;
        *(uint *)(lVar6 + 0x80) = *(uint *)(lVar6 + 0x80) | 4;
        puVar17 = puVar17 + 2;
      }
    }
    pFVar19 = pFVar19 + 0x38;
    uVar15 = (ulonglong)local_98;
    local_c0 = local_c0 + 0x38;
  } while( true );
}

// ToString @ 149373c80

FString * __thiscall
FNiagaraParameterStore::ToString(FNiagaraParameterStore *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  FString *pFVar4;
  FNiagaraTypeDefinition *pFVar5;
  FName *pFVar6;
  FScriptContainerElement *_Src;
  int iVar7;
  FName local_res8;
  FName *local_res10;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FName *local_78;
  int local_70;
  FString local_68;
  undefined1 local_58 [8];
  FNiagaraTypeDefinitionHandle local_50 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  (**(code **)this->_padding_)(this,&local_78);
  local_res10 = local_78 + (longlong)local_70 * 5;
  pFVar6 = local_78;
  if (local_78 != local_res10) {
    do {
      local_58 = *(undefined1 (*) [8])pFVar6;
      local_50[0].RegisteredTypeIndex = pFVar6[1].ComparisonIndex.Value;
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40._0_4_ = 0;
      local_40._4_4_ = 0;
      _Src = (this->ParameterData).AllocatorInstance.Data + (int)pFVar6[1].Number;
      if ((_Src == (FScriptContainerElement *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                             ,0x5ec,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
      FNiagaraVariable::AllocateData((FNiagaraVariable *)local_58);
      memcpy(local_48.Data,_Src,(longlong)(int)local_40);
      pFVar5 = FNiagaraTypeDefinitionHandle::Resolve(local_50);
      if ((pFVar5->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
        ::FString::FString(&local_98,L"Invalid");
      }
      else {
        local_res8 = UE::CoreUObject::Private::GetFName((UObject *)&stack0x00000018);
        local_res8 = *(FName *)local_res8;
        ::FName::ToString(&local_res8,&local_98);
      }
      (**(code **)(this->_padding_ + 0x58))(this,local_58,0);
      pFVar4 = ::FName::ToString((FName *)local_58,&local_68);
      ::FString::ConcatFC(&local_b8,pFVar4,L"(");
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      pFVar5 = FNiagaraTypeDefinitionHandle::Resolve(local_50);
      FVar2.Data = local_48.Data;
      if (((pFVar5->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                             ,0x445,L"Type definition is not valid."), bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
      if (FVar2.Data == (FScriptContainerElement *)0x0) {
        ::FString::FString(&local_a8,L"(null)");
      }
      else {
        FNiagaraTypeHelper::ToString
                  (&local_a8,(uchar *)FVar2.Data,(pFVar5->ClassStructOrEnum).field0_0x0.DebugPtr);
      }
      iVar7 = local_a8.Data.ArrayNum + -1;
      if (local_a8.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      ::FString::AppendChars(&local_b8,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar7);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      ::FString::AppendChars(&local_b8,L")",1);
      ::FString::PrintfImpl(&local_88,L"Param: %s Offset: %d Type : %s\n");
      iVar7 = local_88.Data.ArrayNum + -1;
      if (local_88.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar7);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      pFVar6 = pFVar6 + 5;
    } while (pFVar6 != local_res10);
  }
  return __return_storage_ptr__;
}

// TransferBindings @ 149374060

void __thiscall
FNiagaraParameterStore::TransferBindings
          (FNiagaraParameterStore *this,FNiagaraParameterStore *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Bindings).ArrayNum;
  pFVar2 = (this->Bindings).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((this->Bindings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<FNiagaraParameterStore_*,FNiagaraParameterStoreBinding>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    Bind(param_1,*(FNiagaraParameterStore **)pFVar2,
         (TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *)0x0);
    pFVar2 = pFVar2 + 0x38;
  }
  UnbindAll(this);
  return;
}

// Unbind @ 149374b20

void __thiscall
FNiagaraParameterStore::Unbind(FNiagaraParameterStore *this,FNiagaraParameterStore *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  iVar1 = (this->Bindings).ArrayNum;
  pFVar2 = (this->Bindings).AllocatorInstance.Data;
  pFVar7 = pFVar2;
  if (pFVar2 != pFVar2 + (longlong)iVar1 * 0x38) {
    while (*(FNiagaraParameterStore **)pFVar7 != param_1) {
      pFVar7 = pFVar7 + 0x38;
      if (pFVar7 == pFVar2 + (longlong)iVar1 * 0x38) {
        return;
      }
    }
    uVar4 = (uint)(((longlong)pFVar7 - (longlong)pFVar2) / 0x38);
    if (uVar4 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar4 < iVar1) {
        uVar6 = ~uVar4 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FNiagaraParameterStoreBinding::Empty
                ((FNiagaraParameterStoreBinding *)
                 ((this->Bindings).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x38 + 8),param_1
                 ,this);
      uVar6 = 0;
      if ((int)uVar4 < (this->Bindings).ArrayNum) {
        uVar6 = ~uVar4 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TArray<TTuple<FNiagaraParameterStore_*,FNiagaraParameterStoreBinding>,TSizedDefaultAllocator<32>_>
      ::RemoveAtSwapImpl(&this->Bindings,uVar4);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,&(this->Bindings).AllocatorInstance,(this->Bindings).ArrayNum,
                 &(this->Bindings).ArrayMax);
    }
  }
  return;
}

// UnbindAll @ 149374ca0

void __thiscall FNiagaraParameterStore::UnbindAll(FNiagaraParameterStore *this)

{
  TArray<TTuple<FNiagaraParameterStore_*,FNiagaraParameterStoreBinding>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  uint local_res10;
  
  UnbindFromSourceStores(this);
  local_res10 = (this->Bindings).ArrayNum;
  uVar8 = (ulonglong)(int)local_res10;
  pTVar1 = &this->Bindings;
  pFVar13 = (pTVar1->AllocatorInstance).Data;
  pFVar11 = pFVar13 + 0x14;
  pFVar12 = pFVar13 + uVar8 * 0x38;
  do {
    if ((this->Bindings).ArrayNum != (int)uVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<FNiagaraParameterStore_*,FNiagaraParameterStoreBinding>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar12) {
      DestructItems<TTuple<FNiagaraParameterStore_*,FNiagaraParameterStoreBinding>,int>
                ((TTuple<FNiagaraParameterStore_*,FNiagaraParameterStoreBinding> *)
                 (pTVar1->AllocatorInstance).Data,(this->Bindings).ArrayNum);
      (this->Bindings).ArrayNum = 0;
      if ((this->Bindings).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,&pTVar1->AllocatorInstance,0,&(this->Bindings).ArrayMax);
      }
      return;
    }
    lVar2 = *(longlong *)pFVar13;
    if (lVar2 != 0) {
      plVar3 = *(longlong **)(lVar2 + 0x70);
      for (plVar10 = plVar3; plVar10 != plVar3 + *(int *)(lVar2 + 0x78); plVar10 = plVar10 + 1) {
        if ((FNiagaraParameterStore *)*plVar10 == this) {
          uVar9 = (uint)((longlong)plVar10 - (longlong)plVar3 >> 3);
          if (uVar9 != 0xffffffff) {
            uVar6 = 0;
            if ((int)(uVar9 + 1) <= *(int *)(lVar2 + 0x78)) {
              uVar6 = ~uVar9 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar7 = *(int *)(lVar2 + 0x78) + ~uVar9;
            if (1 < iVar7) {
              iVar7 = 1;
            }
            if (iVar7 != 0) {
              memmove((void *)(*(longlong *)(lVar2 + 0x70) + (longlong)(int)uVar9 * 8),
                      (void *)(*(longlong *)(lVar2 + 0x70) +
                              (longlong)(*(int *)(lVar2 + 0x78) - iVar7) * 8),(longlong)iVar7 << 3);
            }
            *(int *)(lVar2 + 0x78) = *(int *)(lVar2 + 0x78) + -1;
          }
          break;
        }
      }
    }
    *(undefined4 *)(pFVar11 + -4) = 0;
    if (*(int *)pFVar11 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (6,2,0,(ForAnyElementType *)(pFVar11 + -0xc),0,(int *)pFVar11);
    }
    *(undefined4 *)(pFVar11 + 0xc) = 0;
    if (*(int *)(pFVar11 + 0x10) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,2,0,(ForAnyElementType *)(pFVar11 + 4),0,(int *)(pFVar11 + 0x10));
    }
    *(undefined4 *)(pFVar11 + 0x1c) = 0;
    if (*(int *)(pFVar11 + 0x20) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,2,0,(ForAnyElementType *)(pFVar11 + 0x14),0,(int *)(pFVar11 + 0x20));
    }
    uVar8 = (ulonglong)local_res10;
    pFVar13 = pFVar13 + 0x38;
    pFVar11 = pFVar11 + 0x38;
  } while( true );
}

// UnbindFromSourceStores @ 149374ef0

void __thiscall FNiagaraParameterStore::UnbindFromSourceStores(FNiagaraParameterStore *this)

{
  int iVar1;
  FNiagaraParameterStore *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  undefined1 local_res8 [8];
  
  iVar9 = (this->SourceStores).ArrayNum;
  do {
    if (iVar9 == 0) {
      if ((this->SourceStores).ArrayNum != 0) {
        `FNiagaraParameterStore::UnbindFromSourceStores'::__l2::<lambda_1>::operator()(local_res8);
      }
      (this->SourceStores).ArrayNum = 0;
      if ((this->SourceStores).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->SourceStores).AllocatorInstance,0,&(this->SourceStores).ArrayMax);
      }
      return;
    }
    iVar9 = iVar9 + -1;
    if (((this->SourceStores).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = *(FNiagaraParameterStore **)(this->SourceStores).AllocatorInstance.Data;
    pFVar3 = (pFVar2->Bindings).AllocatorInstance.Data;
    iVar1 = (pFVar2->Bindings).ArrayNum;
    for (pFVar8 = pFVar3; pFVar8 != pFVar3 + (longlong)iVar1 * 0x38; pFVar8 = pFVar8 + 0x38) {
      if (*(FNiagaraParameterStore **)pFVar8 == this) {
        uVar5 = (uint)(((longlong)pFVar8 - (longlong)pFVar3) / 0x38);
        if (uVar5 != 0xffffffff) {
          uVar7 = 0;
          if ((int)uVar5 < iVar1) {
            uVar7 = ~uVar5 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FNiagaraParameterStoreBinding::Empty
                    ((FNiagaraParameterStoreBinding *)
                     ((pFVar2->Bindings).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x38 + 8),
                     this,pFVar2);
          uVar7 = 0;
          if ((int)uVar5 < (pFVar2->Bindings).ArrayNum) {
            uVar7 = ~uVar5 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          TArray<TTuple<FNiagaraParameterStore_*,FNiagaraParameterStoreBinding>,TSizedDefaultAllocator<32>_>
          ::RemoveAtSwapImpl(&pFVar2->Bindings,uVar5);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,&(pFVar2->Bindings).AllocatorInstance,(pFVar2->Bindings).ArrayNum,
                     &(pFVar2->Bindings).ArrayMax);
        }
        break;
      }
    }
  } while( true );
}

// VerifyBinding @ 149375200

bool __thiscall
FNiagaraParameterStore::VerifyBinding(FNiagaraParameterStore *this,FNiagaraParameterStore *param_1)

{
  return true;
}

// GetParameterValueFromOffset<UE::Math::TVector<float>_> @ 149380eb0

TVector<float> * __thiscall
FNiagaraParameterStore::GetParameterValueFromOffset<UE::Math::TVector<float>_>
          (FNiagaraParameterStore *this,TVector<float> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TVector<float> *pTVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_1;
  if ((param_1 < 0) || ((ulonglong)(longlong)(this->ParameterData).ArrayNum < lVar6 + 0xcU)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x17f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TVector<float> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (this->ParameterData).AllocatorInstance.Data;
  fVar1 = *(float *)(pFVar2 + lVar6 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)(pFVar2 + lVar6);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// operator() @ 15053cb60

bool __thiscall `FNiagaraParameterStore::GetParameterData'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<138009776100475329>);
  if (bVar2) {
    FNiagaraTypeDefinition::GetSize(*(FNiagaraTypeDefinition **)((longlong)this + 8));
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<138009776100475329>,
                       &`public:___cdecl_`public:_unsigned_char_const*___ptr64___cdecl_FNiagaraParameterStore::GetParameterData(int,FNiagaraTypeDefinition_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 150540f00

bool __thiscall `FNiagaraParameterStore::GetParameterData'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<138009776100475323>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<138009776100475323>,
                       &`public:___cdecl_`public:_unsigned_char_const*___ptr64___cdecl_FNiagaraParameterStore::GetParameterData(int,int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 150540f60

bool __thiscall
`FNiagaraParameterStore::UnbindFromSourceStores'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_745892470486727935>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_745892470486727935>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150541040

bool __thiscall `FNiagaraParameterStore::CheckForNaNs'::__l28::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_745892470486728032>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_745892470486728032>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505412d0

bool __thiscall
`FNiagaraParameterStore::CopyParameterData'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_745892470486727182>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_745892470486727182>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150542ba0

bool __thiscall
`FNiagaraParameterStore::GetMutableParameterData'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<138009776100475336>);
  if (bVar2) {
    FNiagaraTypeDefinition::GetSize(*(FNiagaraTypeDefinition **)((longlong)this + 8));
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<138009776100475336>,
                       &`public:___cdecl_`public:_unsigned_char*___ptr64___cdecl_FNiagaraParameterStore::GetMutableParameterData(int,FNiagaraTypeDefinition_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

