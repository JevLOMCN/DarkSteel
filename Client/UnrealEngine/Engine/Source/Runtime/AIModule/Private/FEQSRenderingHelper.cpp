// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// ExtractLocation @ 146f485a0

TVector<double> * __cdecl
FEQSRenderingHelper::ExtractLocation
          (TVector<double> *__return_storage_ptr__,TSubclassOf<UEnvQueryItemType> param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UEnvQueryItemType_VectorBase *pUVar8;
  TVector<double> *pTVar9;
  UClass *this;
  uint uVar10;
  
  if ((-1 < param_4) && (param_4 < param_3->ArrayNum)) {
    lVar2 = *(longlong *)param_1.Class.field0_0x0;
    this = (UClass *)0x0;
    pUVar7 = this;
    if ((lVar2 != 0) && (pUVar6 = UEnvQueryItemType::StaticClass(), pUVar6 != (UClass *)0x0)) {
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        pUVar7 = *(UClass **)param_1.Class.field0_0x0;
      }
    }
    pUVar6 = UEnvQueryItemType_VectorBase::StaticClass();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)pUVar7->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        lVar2 = *(longlong *)param_1.Class.field0_0x0;
        if ((lVar2 != 0) && (pUVar7 = UEnvQueryItemType::StaticClass(), pUVar7 != (UClass *)0x0)) {
          iVar1 = (int)pUVar7->_padding_;
          if ((*(int *)(lVar2 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar7->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            this = *(UClass **)param_1.Class.field0_0x0;
          }
        }
        pUVar8 = UClass::GetDefaultObject<UEnvQueryItemType_VectorBase>(this);
        pcVar3 = *(code **)(*(longlong *)pUVar8 + 0x2c8);
        uVar10 = 0;
        if (param_4 < param_3->ArrayNum) {
          uVar10 = (uint)~param_4 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TVector<double> *)(*pcVar3)();
          return pTVar9;
        }
        (*pcVar3)(pUVar8,__return_storage_ptr__,
                  (param_2->AllocatorInstance).Data +
                  ((longlong)
                   (*(int *)((param_3->AllocatorInstance).Data + (longlong)param_4 * 8 + 4) * 2) >>
                  1));
        return __return_storage_ptr__;
      }
    }
  }
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

