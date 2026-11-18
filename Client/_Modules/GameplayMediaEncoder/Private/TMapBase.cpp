// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayMediaEncoder
// Functions: 2

// FindChecked @ 148d21840

TRefCountPtr<FRHITexture> * __thiscall
TMapBase<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>_>
::FindChecked(TMapBase<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>_>
              *this,TSharedPtr<AVEncoder::FVideoEncoderInputFrame_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TRefCountPtr<FRHITexture> *pTVar5;
  uint uVar6;
  longlong lVar7;
  TSharedPtr<AVEncoder::FVideoEncoderInputFrame_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar6 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  iVar4 = TSet<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<AVEncoder::FVideoEncoderInputFrame_const_,1>_>
                    (&this->Pairs,uVar6 >> 0x10 ^ uVar6,&local_18);
  if (iVar4 == -1) {
    lVar7 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  else {
    lVar7 = (longlong)iVar4 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (lVar7 != 0) goto LAB_148d218fe;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TRefCountPtr<FRHITexture> *)(*pcVar2)();
    return pTVar5;
  }
LAB_148d218fe:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (TRefCountPtr<FRHITexture> *)(lVar7 + 0x10);
}

// Remove @ 148d23e50

int __thiscall
TMapBase<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>_>
::Remove(TMapBase<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>_>
         *this,TSharedPtr<AVEncoder::FVideoEncoderInputFrame_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  int iVar2;
  uint uVar3;
  atomic<int> *paVar4;
  TSharedPtr<AVEncoder::FVideoEncoderInputFrame_const_,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.Object = param_1->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar4 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar4 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar4 = (atomic<int>)((int)*paVar4 + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  if (*(int *)&(this->Pairs).Elements.field_0x8 == *(int *)&(this->Pairs).Elements.field_0x34) {
    iVar2 = 0;
  }
  else {
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar4 = (atomic<int>)((int)*paVar4 + 1);
      UNLOCK();
    }
    uVar3 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
            (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    iVar2 = TSet<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
            ::RemoveImpl<TSharedPtr<AVEncoder::FVideoEncoderInputFrame_const_,1>_>
                      (&this->Pairs,uVar3 >> 0x10 ^ uVar3,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return iVar2;
}

