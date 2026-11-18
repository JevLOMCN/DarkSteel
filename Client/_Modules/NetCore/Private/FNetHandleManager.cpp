// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 6

// Deinit @ 1441d8f10

void __cdecl UE::Net::FNetHandleManager::Deinit(void)

{
  void *pvVar1;
  FPimpl *this;
  
  this = Instance;
  if (Instance != (FPimpl *)0x0) {
    *(undefined4 *)&(Instance->NetHandleToObject).field_0x48 = 0;
    pvVar1 = *(void **)&(this->NetHandleToObject).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetHandle,UObject_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetHandle,UObject_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetHandle,UObject_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->NetHandleToObject);
    *(undefined4 *)&(this->ObjectToNetHandle).field_0x48 = 0;
    pvVar1 = *(void **)&(this->ObjectToNetHandle).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<UObject_const_*,UE::Net::FNetHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,UE::Net::FNetHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,UE::Net::FNetHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this);
    ::operator_delete(this,0xa0);
  }
  Instance = (FPimpl *)0x0;
  return;
}

// DestroyNetHandle @ 1441d99f0

void __cdecl UE::Net::FNetHandleManager::DestroyNetHandle(FNetHandle param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  if (Instance != (FPimpl *)0x0) {
    iVar8 = (int)*(undefined8 *)param_1.field0_0x0;
    uVar7 = (uint)((ulonglong)*(undefined8 *)param_1.field0_0x0 >> 0x20);
    uVar5 = iVar8 - uVar7 ^ uVar7 >> 0xd;
    uVar3 = (-0x61c88647 - uVar5) - uVar7 ^ uVar5 << 8;
    uVar7 = (uVar7 - uVar3) - uVar5 ^ uVar3 >> 0xd;
    uVar5 = (uVar5 - uVar7) - uVar3 ^ uVar7 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar7 ^ uVar5 << 0x10;
    uVar7 = (uVar7 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar5 = (uVar5 - uVar7) - uVar3 ^ uVar7 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar7 ^ uVar5 << 10;
    if (*(int *)&(Instance->NetHandleToObject).field_0x8 !=
        *(int *)&(Instance->NetHandleToObject).field_0x34) {
      puVar4 = *(undefined1 **)&(Instance->NetHandleToObject).field_0x40;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &(Instance->NetHandleToObject).field_0x38;
      }
      iVar6 = *(int *)(puVar4 + (ulonglong)
                                (*(int *)&(Instance->NetHandleToObject).field_0x48 - 1U &
                                ((uVar7 - uVar3) - uVar5 ^ uVar3 >> 0xf)) * 4);
      if (iVar6 != -1) {
        while (lVar1 = *(longlong *)&Instance->NetHandleToObject + (longlong)iVar6 * 0x18,
              *(int *)(*(longlong *)&Instance->NetHandleToObject + (longlong)iVar6 * 0x18) != iVar8)
        {
          iVar6 = *(int *)(lVar1 + 0x10);
          if (iVar6 == -1) {
            return;
          }
        }
        uVar2 = *(ulonglong *)(lVar1 + 8);
        TSet<TTuple<UE::Net::FNetHandle,UObject_const_*>,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,UObject_const_*,0>,FDefaultSetAllocator>
        ::RemoveByIndex((TSet<TTuple<UE::Net::FNetHandle,UObject_const_*>,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,UObject_const_*,0>,FDefaultSetAllocator>
                         *)&Instance->NetHandleToObject,iVar6);
        if (*(int *)&(Instance->ObjectToNetHandle).field_0x8 !=
            *(int *)&(Instance->ObjectToNetHandle).field_0x34) {
          puVar4 = *(undefined1 **)&(Instance->ObjectToNetHandle).field_0x40;
          uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
          uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &(Instance->ObjectToNetHandle).field_0x38;
          }
          iVar8 = *(int *)(puVar4 + (((ulonglong)(uVar3 >> 0x10) ^ (longlong)(int)uVar3) &
                                    (longlong)*(int *)&(Instance->ObjectToNetHandle).field_0x48 - 1U
                                    ) * 4);
          if (iVar8 != -1) {
            do {
              if (*(ulonglong *)(*(longlong *)&Instance->ObjectToNetHandle + (longlong)iVar8 * 0x18)
                  == uVar2) {
                TSet<TTuple<UObject_const_*,UE::Net::FNetHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetHandle,0>,FDefaultSetAllocator>
                ::RemoveByIndex((TSet<TTuple<UObject_const_*,UE::Net::FNetHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetHandle,0>,FDefaultSetAllocator>
                                 *)Instance,iVar8);
                return;
              }
              iVar8 = *(int *)(*(longlong *)&Instance->ObjectToNetHandle + 0x10 +
                              (longlong)iVar8 * 0x18);
            } while (iVar8 != -1);
            return;
          }
        }
      }
    }
  }
  return;
}

// GetNetHandle @ 1441dc840

FNetHandle __cdecl UE::Net::FNetHandleManager::GetNetHandle(UObject *param_1)

{
  FNetHandle_u_0 FVar1;
  UObject *pUVar2;
  UObject *in_RDX;
  FWeakObjectPtr local_res18;
  FNetHandle_u_0 local_res20;
  TBaseKeyIterator<0> local_38;
  
  if (Instance == (FPimpl *)0x0) {
    *(undefined8 *)param_1 = 0;
    return (FNetHandle)(FNetHandle_u_0)param_1;
  }
  TSet<TTuple<UObject_const_*,UE::Net::FNetHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetHandle,0>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_38,
             (TSet<TTuple<UObject_const_*,UE::Net::FNetHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetHandle,0>,FDefaultSetAllocator>
              *)Instance,in_RDX);
  if (local_38.Index != -1) {
    FVar1 = (FNetHandle_u_0)
            *(FNetHandle_u_0 *)
             &((FNetHandle_u_0 *)
              (*(longlong *)&(local_38.Set)->Elements + 8 + (longlong)local_38.Index * 0x18))->Value
    ;
    local_res18.ObjectSerialNumber = FVar1.Value.ObjectSerialNumber;
    local_res18.ObjectIndex = FVar1.Value.ObjectIndex;
    local_res20 = FVar1;
    pUVar2 = FWeakObjectPtr::GetEvenIfUnreachable(&local_res18);
    if (pUVar2 == in_RDX) {
      *(FNetHandle_u_0 *)param_1 = FVar1;
    }
    else {
      TSet<TTuple<UObject_const_*,UE::Net::FNetHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetHandle,0>,FDefaultSetAllocator>
      ::RemoveByIndex(local_38.Set,local_38.Index);
      TMapBase<UE::Net::FNetHandle,UObject_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,UObject_const_*,0>_>
      ::Remove((TMapBase<UE::Net::FNetHandle,UObject_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,UObject_const_*,0>_>
                *)&Instance->NetHandleToObject,(FNetHandle *)&local_res20.Value);
      *(undefined8 *)param_1 = 0;
    }
    return (FNetHandle)(FNetHandle_u_0)param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (FNetHandle)(FNetHandle_u_0)param_1;
}

// GetOrCreateNetHandle @ 1441dcb90

FNetHandle __cdecl UE::Net::FNetHandleManager::GetOrCreateNetHandle(UObject *param_1)

{
  FNetHandle_u_0 FVar1;
  FNetHandle_u_0 this;
  FNetHandle_u_0 FVar2;
  FNetHandle_u_0 in_RDX;
  FNetHandle_u_0 local_res10;
  FNetHandle_u_0 local_res18;
  FNetHandle_u_0 local_res20;
  FNetHandle_u_0 local_48;
  FNetHandle_u_0 *local_40;
  int local_38;
  
  if (Instance == (FPimpl *)0x0) {
    *(undefined8 *)param_1 = 0;
    return (FNetHandle)(FNetHandle_u_0)param_1;
  }
  local_res10 = in_RDX;
  TSet<TTuple<UObject_const_*,UE::Net::FNetHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetHandle,0>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            ((TBaseKeyIterator<0> *)&local_48.Value,
             (TSet<TTuple<UObject_const_*,UE::Net::FNetHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetHandle,0>,FDefaultSetAllocator>
              *)Instance,(UObject *)in_RDX);
  this = local_48;
  if (local_38 != -1) {
    FVar1 = *(FNetHandle_u_0 *)(*(longlong *)local_48 + 8 + (longlong)local_38 * 0x18);
    local_res18 = FVar1;
    local_48 = FVar1;
    FVar2 = (FNetHandle_u_0)
            FWeakObjectPtr::GetEvenIfUnreachable((FWeakObjectPtr *)&local_res18.Value);
    if (local_res10 == FVar2) {
      *(FNetHandle_u_0 *)param_1 = FVar1;
      return (FNetHandle)(FNetHandle_u_0)param_1;
    }
    TSet<TTuple<UObject_const_*,UE::Net::FNetHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetHandle,0>,FDefaultSetAllocator>
    ::RemoveByIndex((TSet<TTuple<UObject_const_*,UE::Net::FNetHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetHandle,0>,FDefaultSetAllocator>
                     *)this,local_38);
    TMapBase<UE::Net::FNetHandle,UObject_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,UObject_const_*,0>_>
    ::Remove((TMapBase<UE::Net::FNetHandle,UObject_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,UObject_const_*,0>_>
              *)&Instance->NetHandleToObject,(FNetHandle *)&local_48.Value);
  }
  if ((local_res10 != (FNetHandle_u_0)0x0) &&
     ((*(uint *)((longlong)local_res10 + 8) >> 0x1e & 1) == 0)) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)local_res10);
    }
    local_res18 = (FNetHandle_u_0)0x0;
    local_48 = local_res10;
    if ((GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (FNetHandle_u_0)0x0)) {
      GC::MarkAsReachable((UObject *)local_res10);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res18.Value,(FObjectPtr)&local_48);
    local_res20.Value = local_res18.Value;
    if ((local_res18.Value.ObjectIndex != 0) || (local_res18.Value.ObjectSerialNumber != 0)) {
      local_48 = (FNetHandle_u_0)&local_res20;
      local_40 = &local_res10;
      TSet<TTuple<UE::Net::FNetHandle,UObject_const_*>,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,UObject_const_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::Net::FNetHandle_&,UObject_const_*_&>_>
                ((TSet<TTuple<UE::Net::FNetHandle,UObject_const_*>,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,UObject_const_*,0>,FDefaultSetAllocator>
                  *)&Instance->NetHandleToObject,
                 (TPairInitializer<UE::Net::FNetHandle_&,UObject_const_*_&> *)&local_res18.Value,
                 (bool *)&local_48);
      local_48 = (FNetHandle_u_0)&local_res10;
      local_40 = &local_res20;
      TSet<TTuple<UObject_const_*,UE::Net::FNetHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetHandle,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UObject_const_*_&,UE::Net::FNetHandle_&>_>
                ((TSet<TTuple<UObject_const_*,UE::Net::FNetHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetHandle,0>,FDefaultSetAllocator>
                  *)Instance,
                 (TPairInitializer<UObject_const_*_&,UE::Net::FNetHandle_&> *)&local_res18.Value,
                 (bool *)&local_48);
      *(FNetHandle_u_0 *)param_1 = local_res20;
      return (FNetHandle)(FNetHandle_u_0)param_1;
    }
  }
  *(undefined8 *)param_1 = 0;
  return (FNetHandle)(FNetHandle_u_0)param_1;
}

// Init @ 1441dd640

void __cdecl UE::Net::FNetHandleManager::Init(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (Instance != (FPimpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\NetHandle\\NetHandleManager.cpp"
                       ,0x82,L"%s");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Instance = ::operator_new(0xa0);
  if (Instance != (FPimpl *)0x0) {
    *(undefined8 *)&(Instance->ObjectToNetHandle).field_0x10 = 0;
    *(undefined8 *)&(Instance->ObjectToNetHandle).field_0x18 = 0;
    *(undefined8 *)&(Instance->ObjectToNetHandle).field_0x38 = 0;
    *(undefined8 *)&(Instance->ObjectToNetHandle).field_0x48 = 0;
    *(undefined8 *)&(Instance->NetHandleToObject).field_0x10 = 0;
    *(undefined8 *)&(Instance->NetHandleToObject).field_0x18 = 0;
    *(undefined8 *)&(Instance->NetHandleToObject).field_0x38 = 0;
    *(undefined8 *)&(Instance->NetHandleToObject).field_0x48 = 0;
    *(undefined8 *)&Instance->ObjectToNetHandle = 0;
    *(undefined8 *)&(Instance->ObjectToNetHandle).field_0x8 = 0;
    *(undefined8 *)&(Instance->ObjectToNetHandle).field_0x20 = 0;
    *(undefined4 *)&(Instance->ObjectToNetHandle).field_0x28 = 0;
    *(undefined4 *)&(Instance->ObjectToNetHandle).field_0x2c = 0x80;
    *(undefined4 *)&(Instance->ObjectToNetHandle).field_0x30 = 0xffffffff;
    *(undefined4 *)&(Instance->ObjectToNetHandle).field_0x34 = 0;
    *(undefined8 *)&(Instance->ObjectToNetHandle).field_0x40 = 0;
    *(undefined8 *)&Instance->NetHandleToObject = 0;
    *(undefined8 *)&(Instance->NetHandleToObject).field_0x8 = 0;
    *(undefined8 *)&(Instance->NetHandleToObject).field_0x20 = 0;
    *(undefined4 *)&(Instance->NetHandleToObject).field_0x28 = 0;
    *(undefined4 *)&(Instance->NetHandleToObject).field_0x2c = 0x80;
    *(undefined4 *)&(Instance->NetHandleToObject).field_0x30 = 0xffffffff;
    *(undefined4 *)&(Instance->NetHandleToObject).field_0x34 = 0;
    *(undefined8 *)&(Instance->NetHandleToObject).field_0x40 = 0;
    return;
  }
  Instance = (FPimpl *)0x0;
  return;
}

// MakeNetHandleFromId @ 1441e1f10

FNetHandle __cdecl UE::Net::FNetHandleManager::MakeNetHandleFromId(uint param_1)

{
  FUObjectItem *pFVar1;
  undefined4 in_register_0000000c;
  FNetHandle_u_0 FVar2;
  int in_EDX;
  
  FVar2.Value.ObjectSerialNumber = in_register_0000000c;
  FVar2.InternalValue.Id = param_1;
  if (Instance == (FPimpl *)0x0) {
    *(undefined8 *)FVar2 = 0;
    return (FNetHandle)FVar2;
  }
  pFVar1 = FUObjectArray::IndexToObject(&GUObjectArray,in_EDX);
  if (pFVar1 != (FUObjectItem *)0x0) {
    *(ulonglong *)FVar2 = CONCAT44(pFVar1->SerialNumber,in_EDX);
    return (FNetHandle)FVar2;
  }
  *(undefined8 *)FVar2 = 0;
  return (FNetHandle)FVar2;
}

