// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// SetBatchedShaderUnbinds @ 14812edd0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandList::SetBatchedShaderUnbinds
          (FRHICommandList *this,FRHIGraphicsShader *param_1,FRHIBatchedShaderUnbinds *param_2)

{
  code *pcVar1;
  FRHIShaderParameterUnbind *_Src;
  undefined8 uVar2;
  bool bVar3;
  TArrayView<FRHIShaderParameterUnbind_const_,int> *pTVar4;
  IRHICommandContext *pIVar5;
  undefined8 *puVar6;
  void *_Dst;
  int iVar7;
  undefined4 uStack_4c;
  TArrayView<FRHIShaderParameterUnbind_const_,int> local_38 [2];
  
  if (0 < (param_2->Unbinds).ArrayNum) {
    pTVar4 = TArrayView<FRHIShaderParameterUnbind_const_,int>::
             TArrayView<FRHIShaderParameterUnbind_const_,int><TArray<FRHIShaderParameterUnbind,TSizedDefaultAllocator<32>_>_&,TArray<FRHIShaderParameterUnbind,TSizedDefaultAllocator<32>_>_>
                       (local_38,&param_2->Unbinds);
    _Src = pTVar4->DataPtr;
    uVar2 = *(undefined8 *)&pTVar4->ArrayNum;
    if (GRHIGlobals.NeedsShaderUnbinds != false) {
      if ((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) {
        puVar6 = FMemStackBase::Alloc((FMemStackBase *)this,0x28,8);
        *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
        iVar7 = (int)uVar2;
        **(undefined8 **)&this->field_0x30 = puVar6;
        *(undefined8 **)&this->field_0x30 = puVar6 + 1;
        if (iVar7 == 0) {
          _Dst = (void *)0x0;
        }
        else {
          _Dst = FMemStackBase::Alloc((FMemStackBase *)this,(longlong)iVar7 << 2,2);
          memcpy(_Dst,_Src,(longlong)iVar7 << 2);
          if (iVar7 < 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L"");
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
        }
        puVar6[1] = 0;
        puVar6[3] = _Dst;
        puVar6[4] = CONCAT44(uStack_4c,iVar7);
        *puVar6 = &___7__FRHICommandSetShaderUnbinds_VFRHIGraphicsShader____6B_;
        puVar6[2] = param_1;
      }
      else {
        pIVar5 = FRHICommandListBase::GetContext((FRHICommandListBase *)this);
        (**(code **)(pIVar5->_padding_ + 0x1c8))(pIVar5,param_1);
      }
    }
    (param_2->Unbinds).ArrayNum = 0;
    if ((param_2->Unbinds).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,2,0,(ForAnyElementType *)param_2,0,&(param_2->Unbinds).ArrayMax);
    }
  }
  return;
}

