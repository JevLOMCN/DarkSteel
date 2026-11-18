// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 15

// FSkeletalMeshConnectivity @ 149212a40

FSkeletalMeshConnectivity * __thiscall
FSkeletalMeshConnectivity::FSkeletalMeshConnectivity
          (FSkeletalMeshConnectivity *this,TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> param_1,
          int param_2)

{
  this->LodIndex = param_2;
  (this->MeshObject).WeakPtr = param_1.WeakPtr;
  (this->Proxy).Ptr = (FSkeletalMeshConnectivityProxy *)0x0;
  this->GpuUserCount = (atomic<int>)0x0;
  return this;
}

// ~FSkeletalMeshConnectivity @ 1492158d0

void __thiscall
FSkeletalMeshConnectivity::~FSkeletalMeshConnectivity(FSkeletalMeshConnectivity *this)

{
  FSkeletalMeshConnectivityProxy *pFVar1;
  
  Release(this);
  pFVar1 = (this->Proxy).Ptr;
  if (pFVar1 != (FSkeletalMeshConnectivityProxy *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001492158f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// CanBeDestroyed @ 149221ac0

bool __thiscall FSkeletalMeshConnectivity::CanBeDestroyed(FSkeletalMeshConnectivity *this)

{
  return (int)this->GpuUserCount < 1;
}

// CanBeUsed @ 149221b10

bool __thiscall
FSkeletalMeshConnectivity::CanBeUsed
          (FSkeletalMeshConnectivity *this,TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> *param_1,
          int param_2)

{
  bool bVar1;
  
  if ((0 < (int)this->GpuUserCount) && (this->LodIndex == param_2)) {
    bVar1 = TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>::UEOpEquals<USkeletalMesh,bool>
                      (&this->MeshObject,param_1);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// GetAdjacentTriangleIndex @ 149233d00

int __thiscall
FSkeletalMeshConnectivity::GetAdjacentTriangleIndex
          (FSkeletalMeshConnectivity *this,int param_1,int param_2)

{
  return -1;
}

// GetLodRenderData @ 1492361a0

FSkeletalMeshLODRenderData * __cdecl
FSkeletalMeshConnectivity::GetLodRenderData(USkeletalMesh *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  FSkeletalMeshLODRenderData *pFVar4;
  
  plVar3 = (longlong *)(**(code **)(param_1->_padding_ + 0x398))();
  if (((plVar3 != (longlong *)0x0) && (-1 < param_2)) && (param_2 < (int)plVar3[1])) {
    if (param_2 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FSkeletalMeshLODRenderData *)(*pcVar1)();
        return pFVar4;
      }
    }
    return *(FSkeletalMeshLODRenderData **)(*plVar3 + (longlong)param_2 * 8);
  }
  return (FSkeletalMeshLODRenderData *)0x0;
}

// GetLodRenderData @ 149236230

FSkeletalMeshLODRenderData * __thiscall
FSkeletalMeshConnectivity::GetLodRenderData(FSkeletalMeshConnectivity *this)

{
  USkeletalMesh *pUVar1;
  FSkeletalMeshLODRenderData *pFVar2;
  
  pUVar1 = (USkeletalMesh *)FWeakObjectPtr::Get(&(this->MeshObject).WeakPtr);
  if (pUVar1 != (USkeletalMesh *)0x0) {
    pFVar2 = GetLodRenderData(pUVar1,this->LodIndex);
    return pFVar2;
  }
  return (FSkeletalMeshLODRenderData *)0x0;
}

// GetMeshName @ 1492363e0

FString * __thiscall
FSkeletalMeshConnectivity::GetMeshName
          (FSkeletalMeshConnectivity *this,FString *__return_storage_ptr__)

{
  UObject *this_00;
  
  this_00 = FWeakObjectPtr::Get(&(this->MeshObject).WeakPtr);
  if (this_00 != (UObject *)0x0) {
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)this_00,__return_storage_ptr__,(UObject *)0x0);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"<none>");
  return __return_storage_ptr__;
}

// GetProxy @ 149237750

FSkeletalMeshConnectivityProxy * __thiscall
FSkeletalMeshConnectivity::GetProxy(FSkeletalMeshConnectivity *this)

{
  return (this->Proxy).Ptr;
}

// GetTriangleVertices @ 149238ba0

void __thiscall
FSkeletalMeshConnectivity::GetTriangleVertices
          (FSkeletalMeshConnectivity *this,int param_1,int *param_2,int *param_3,int *param_4)

{
  *param_2 = -1;
  *param_3 = -1;
  *param_4 = -1;
  return;
}

// IsUsed @ 149242de0

bool __thiscall FSkeletalMeshConnectivity::IsUsed(FSkeletalMeshConnectivity *this)

{
  return 0 < (int)this->GpuUserCount;
}

// IsValidMeshObject @ 149242e70

bool __cdecl
FSkeletalMeshConnectivity::IsValidMeshObject
          (TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> *param_1,int param_2)

{
  USkeletalMesh *pUVar1;
  longlong lVar2;
  FSkeletalMeshLODRenderData *pFVar3;
  
  pUVar1 = (USkeletalMesh *)FWeakObjectPtr::Get(&param_1->WeakPtr);
  if (pUVar1 != (USkeletalMesh *)0x0) {
    lVar2 = (**(code **)(pUVar1->_padding_ + 0x330))(pUVar1,param_2);
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0xd0) & 4) != 0)) {
      pFVar3 = GetLodRenderData(pUVar1,param_2);
      return pFVar3 != (FSkeletalMeshLODRenderData *)0x0;
    }
  }
  return false;
}

// RegisterUser @ 149248880

void __thiscall
FSkeletalMeshConnectivity::RegisterUser
          (FSkeletalMeshConnectivity *this,FSkeletalMeshConnectivityUsage param_1,bool param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FSkeletalMeshConnectivityProxy *pFVar3;
  code *pcVar4;
  bool bVar5;
  FSkeletalMeshConnectivityProxy *pFVar6;
  
  if (param_1.RequiresGpuAccess != false) {
    LOCK();
    paVar1 = &this->GpuUserCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x0) {
      if (((this->Proxy).Ptr != (FSkeletalMeshConnectivityProxy *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Proxy == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMeshConnectivity.cpp"
                             ,0x73,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar6 = ::operator_new(0x60);
      if (pFVar6 == (FSkeletalMeshConnectivityProxy *)0x0) {
        pFVar6 = (FSkeletalMeshConnectivityProxy *)0x0;
      }
      else {
        pFVar6->_padding_ = 0;
        *(FNameEntryId *)&pFVar6->_padding_ = 0;
        *(uint *)((longlong)&pFVar6->_padding_ + 4) = 0;
        *(FNameEntryId *)&pFVar6->_padding_ = 0;
        *(uint *)((longlong)&pFVar6->_padding_ + 4) = 0;
        pFVar6->_padding_ = 0;
        *(undefined8 *)&pFVar6->MaxAdjacentTriangleCount = 0;
        (pFVar6->AdjacencyResource)._padding_ = 0;
        (pFVar6->AdjacencyResource)._padding_ = 0;
        (pFVar6->AdjacencyResource)._padding_ = 0;
        *(undefined8 *)&(pFVar6->AdjacencyResource).bNeedsCPUAccess = 0;
        (pFVar6->AdjacencyBuffer).Reference = (FRHIBuffer *)0x0;
        (pFVar6->AdjacencySrv).Reference = (FRHIShaderResourceView *)0x0;
        pFVar6->GpuMemoryUsage = 0;
        FRenderResource::FRenderResource((FRenderResource *)pFVar6);
        pFVar6->MaxAdjacentTriangleCount = 8;
        pFVar6->GpuMemoryUsage = 0;
        pFVar6->_padding_ = (longlong)&___7FSkeletalMeshConnectivityProxy__6B_;
        (pFVar6->AdjacencyResource)._padding_ = (longlong)&___7__TResourceArray_E_0A___6B_;
        (pFVar6->AdjacencyResource)._padding_ = 0;
        (pFVar6->AdjacencyResource)._padding_ = 0;
        (pFVar6->AdjacencyResource).bNeedsCPUAccess = false;
        (pFVar6->AdjacencyBuffer).Reference = (FRHIBuffer *)0x0;
        (pFVar6->AdjacencySrv).Reference = (FRHIShaderResourceView *)0x0;
      }
      pFVar3 = (this->Proxy).Ptr;
      if ((pFVar3 != pFVar6) &&
         ((this->Proxy).Ptr = pFVar6, pFVar3 != (FSkeletalMeshConnectivityProxy *)0x0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
      bVar5 = FSkeletalMeshConnectivityProxy::Initialize((this->Proxy).Ptr,this);
      pFVar6 = (this->Proxy).Ptr;
      if (bVar5) {
        BeginInitResource((FRenderResource *)pFVar6,(FRenderCommandPipe *)0x0);
        return;
      }
      if (pFVar6 != (FSkeletalMeshConnectivityProxy *)0x0) {
        (this->Proxy).Ptr = (FSkeletalMeshConnectivityProxy *)0x0;
        (**(code **)pFVar6->_padding_)(pFVar6,1);
      }
    }
  }
  return;
}

// Release @ 14924a290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FSkeletalMeshConnectivity::Release(FSkeletalMeshConnectivity *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FSkeletalMeshConnectivityProxy *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FSkeletalMeshConnectivityProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFStack_70 = (this->Proxy).Ptr;
  (this->Proxy).Ptr = (FSkeletalMeshConnectivityProxy *)0x0;
  if (pFStack_70 != (FSkeletalMeshConnectivityProxy *)0x0) {
    local_60 = (undefined ***)0x0;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSkeletalMeshConnectivity::Release'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FSkeletalMeshConnectivity::Release'::`5'::<lambda_1>,1,0>::
                _vftable_;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FSkeletalMeshConnectivity::Release_::__l5::TSTR_BeginDestroyCommand144>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FSkeletalMeshConnectivity::Release'::__l5::TSTR_BeginDestroyCommand144>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar4 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar4 = local_30;
          }
          (*(code *)(*pppuVar4)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar4 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar4 = local_60;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  return;
}

// UnregisterUser @ 149252750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSkeletalMeshConnectivity::UnregisterUser
          (FSkeletalMeshConnectivity *this,FSkeletalMeshConnectivityUsage param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  undefined ***pppuVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [32];
  code *apcStack_88 [2];
  undefined **ppuStack_78;
  FSkeletalMeshConnectivityProxy *pFStack_70;
  undefined8 uStack_68;
  undefined ***pppuStack_60;
  undefined1 auStack_58 [16];
  undefined **ppuStack_48;
  FSkeletalMeshConnectivityProxy *pFStack_40;
  undefined8 uStack_38;
  undefined ***pppuStack_30;
  byte bStack_28;
  ulonglong uStack_18;
  
  if (param_1.RequiresGpuAccess != false) {
    LOCK();
    paVar1 = &this->GpuUserCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      uStack_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
      pFStack_70 = (this->Proxy).Ptr;
      (this->Proxy).Ptr = (FSkeletalMeshConnectivityProxy *)0x0;
      if (pFStack_70 != (FSkeletalMeshConnectivityProxy *)0x0) {
        pppuStack_60 = (undefined ***)0x0;
        apcStack_88[0] =
             UE::Core::Private::Function::
             TFunctionRefCaller<`FSkeletalMeshConnectivity::Release'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
             ::Call;
        ppuStack_78 = &UE::Core::Private::Function::
                       TFunction_OwnedObject<`FSkeletalMeshConnectivity::Release'::`5'::<lambda_1>,1,0>
                       ::_vftable_;
        this_00 = FRenderCommandList::GetInstanceTLS();
        if (this_00 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_FSkeletalMeshConnectivity::Release_::__l5::TSTR_BeginDestroyCommand144>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)apcStack_88);
        }
        else {
          this_01 = FRenderCommandList::GetRenderThread(this_00);
          auStack_58._0_8_ = apcStack_88[0];
          pppuStack_30 = pppuStack_60;
          ppuStack_48 = ppuStack_78;
          pFStack_40 = pFStack_70;
          uStack_38 = uStack_68;
          apcStack_88[0] = (code *)0x0;
          bStack_28 = 2;
          pFVar5 = (FRenderCommandTag *)
                   TRenderCommandTag<`FSkeletalMeshConnectivity::Release'::__l5::TSTR_BeginDestroyCommand144>
                   ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)auStack_58,pFVar5);
          uVar7 = (ulonglong)bStack_28;
          if (2 < uVar7) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar7] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)auStack_58._0_8_ != (code *)0x0) {
              pppuVar6 = (undefined ***)(auStack_58 + 0x10);
              if (pppuStack_30 != (undefined ***)0x0) {
                pppuVar6 = pppuStack_30;
              }
              (*(code *)(*pppuVar6)[2])();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar7])(auStack_58);
          }
        }
        if (apcStack_88[0] != (code *)0x0) {
          pppuVar6 = &ppuStack_78;
          if (pppuStack_60 != (undefined ***)0x0) {
            pppuVar6 = pppuStack_60;
          }
          (*(code *)(*pppuVar6)[2])();
        }
      }
      return;
    }
  }
  return;
}

